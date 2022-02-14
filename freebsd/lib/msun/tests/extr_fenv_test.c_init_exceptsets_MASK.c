
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static void
FUNC_0(void)
{
 unsigned VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < 1 << VAR_0; VAR_3++) {
  for (VAR_5 = VAR_3, VAR_4 = 0; VAR_5 != 0; VAR_5 >>= 1, VAR_4++)
   VAR_1[VAR_3] |= VAR_2[VAR_4] & ((~VAR_5 & 1) - 1);
 }
}
