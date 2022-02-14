
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zeroi ;
typedef int u_int8_t ;
struct rndtest_state {int* rs_buf; } ;
typedef int onei ;
struct TYPE_2__ {int rst_runs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct rndtest_state*,int,int*) ;
 int FUNC_2 (struct rndtest_state*,int,int*) ;

__attribute__((used)) static int
FUNC_3(struct rndtest_state *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9[VAR_1], VAR_10[VAR_1];
 u_int8_t VAR_11;

 FUNC_0(VAR_9, sizeof(VAR_9));
 FUNC_0(VAR_10, sizeof(VAR_10));
 VAR_6 = VAR_7 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_11 = VAR_3->rs_buf[VAR_4];
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++, VAR_11 <<= 1) {
   if (VAR_11 & 0x80) {
    VAR_6++;
    FUNC_2(VAR_3, VAR_7, VAR_10);
    VAR_7 = 0;
   } else {
    VAR_7++;
    FUNC_2(VAR_3, VAR_6, VAR_9);
    VAR_6 = 0;
   }
  }
 }
 FUNC_2(VAR_3, VAR_6, VAR_9);
 FUNC_2(VAR_3, VAR_7, VAR_10);

 VAR_8 |= FUNC_1(VAR_3, 0, VAR_10);
 VAR_8 |= FUNC_1(VAR_3, 1, VAR_9);

 if (VAR_8)
  VAR_2.rst_runs++;

 return (VAR_8);
}
