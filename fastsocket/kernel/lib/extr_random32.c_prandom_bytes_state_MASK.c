
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct rnd_state {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (struct rnd_state*) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct rnd_state *VAR_1, void *VAR_2, int VAR_3)
{
 unsigned char *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3, sizeof(u32)); VAR_5 += sizeof(u32)) {
  u32 VAR_6 = FUNC_0(VAR_1);
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < sizeof(u32); VAR_7++) {
   VAR_4[VAR_5 + VAR_7] = VAR_6;
   VAR_6 >>= VAR_0;
  }
 }
 if (VAR_5 < VAR_3) {
  u32 VAR_8 = FUNC_0(VAR_1);

  for (; VAR_5 < VAR_3; VAR_5++) {
   VAR_4[VAR_5] = VAR_8;
   VAR_8 >>= VAR_0;
  }
 }
}
