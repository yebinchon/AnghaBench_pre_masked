
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned VAR_4, VAR_5;
 uint32_t VAR_6 = 1;

 VAR_3[0] = 0;

 for (VAR_4 = 1 << (VAR_1 - 1); VAR_4; VAR_4 >>= 1) {
  VAR_6 = (VAR_6 >> 1) ^ ((VAR_6 & 1) ? VAR_0 : 0);
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += 2 * VAR_4)
   VAR_3[VAR_4 + VAR_5] = VAR_6 ^ VAR_3[VAR_5];
 }
}
