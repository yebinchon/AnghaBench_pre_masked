
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int Dwarf_Unsigned ;



char *
FUNC_0(void *VAR_0, Dwarf_Unsigned VAR_1, uint64_t *VAR_2)
{
 char *VAR_3, *VAR_4;

 VAR_3 = VAR_4 = (char *) VAR_0 + *VAR_2;

 while (*VAR_4 != '\0' && *VAR_2 < VAR_1) {
  VAR_4++;
  (*VAR_2)++;
 }

 if (*VAR_4 == '\0' && *VAR_2 < VAR_1)
  (*VAR_2)++;

 return (VAR_3);
}
