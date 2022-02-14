
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,void const*) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_2, const void *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, VAR_3);




 for (VAR_4 = 0; VAR_4 < 16; VAR_4 ++) {
  uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
  int VAR_9;

  VAR_5 = VAR_2[(VAR_4 << 1) + 0];
  VAR_6 = VAR_2[(VAR_4 << 1) + 1];
  VAR_7 = 0;
  VAR_8 = 0;
  for (VAR_9 = 0; VAR_9 < 28; VAR_9 ++) {
   VAR_7 |= (VAR_5 & 1) << VAR_0[VAR_9];
   VAR_8 |= (VAR_6 & 1) << VAR_1[VAR_9];
   VAR_5 >>= 1;
   VAR_6 >>= 1;
  }
  VAR_2[(VAR_4 << 1) + 0] = VAR_7;
  VAR_2[(VAR_4 << 1) + 1] = VAR_8;
 }
}
