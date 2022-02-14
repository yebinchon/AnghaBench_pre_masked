
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned VAR_3, VAR_4;
 uint32_t VAR_5 = 0x80000000;

 VAR_2[0] = 0;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3 <<= 1) {
  VAR_5 = (VAR_5 << 1) ^ ((VAR_5 & 0x80000000) ? VAR_1 : 0);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   VAR_2[VAR_3 + VAR_4] = VAR_5 ^ VAR_2[VAR_4];
 }
}
