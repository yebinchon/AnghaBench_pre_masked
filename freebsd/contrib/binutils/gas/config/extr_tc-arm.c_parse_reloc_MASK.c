
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reloc_entry {int reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reloc_entry* FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1 (char **VAR_2)
{
  struct reloc_entry *VAR_3;
  char *VAR_4, *VAR_5;

  if (**VAR_2 != '(')
    return VAR_0;

  VAR_4 = *VAR_2 + 1;
  VAR_5 = VAR_4;

  while (*VAR_5 && *VAR_5 != ')' && *VAR_5 != ',')
    VAR_5++;
  if (*VAR_5 != ')')
    return -1;

  if ((VAR_3 = FUNC_0 (VAR_1, VAR_4, VAR_5 - VAR_4)) == ((void*)0))
    return -1;

  *VAR_2 = VAR_5 + 1;
  return VAR_3->reloc;
}
