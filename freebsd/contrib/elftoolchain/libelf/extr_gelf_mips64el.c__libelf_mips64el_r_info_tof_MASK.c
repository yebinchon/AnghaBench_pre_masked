
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int Elf64_Xword ;



Elf64_Xword
FUNC_0(Elf64_Xword VAR_0)
{
 Elf64_Xword VAR_1;
 uint8_t VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_2 = VAR_0 >> 24;
 VAR_3 = VAR_0 >> 16;
 VAR_4 = VAR_0 >> 8;
 VAR_5 = VAR_0;
 VAR_1 = VAR_0 >> 32;
 VAR_1 |= (Elf64_Xword)VAR_2 << 32;
 VAR_1 |= (Elf64_Xword)VAR_3 << 40;
 VAR_1 |= (Elf64_Xword)VAR_4 << 48;
 VAR_1 |= (Elf64_Xword)VAR_5 << 56;
 return (VAR_1);
}
