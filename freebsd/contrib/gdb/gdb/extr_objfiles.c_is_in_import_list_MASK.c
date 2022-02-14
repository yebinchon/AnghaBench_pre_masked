
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int import_list_size; scalar_t__* import_list; } ;


 scalar_t__ FUNC_0 (char*,scalar_t__) ;

int
FUNC_1 (char *VAR_0, struct objfile *VAR_1)
{
  int VAR_2;

  if (!VAR_1 || !VAR_0 || !*VAR_0)
    return 0;

  for (VAR_2 = 0; VAR_2 < VAR_1->import_list_size; VAR_2++)
    if (VAR_1->import_list[VAR_2] && FUNC_0 (VAR_0, VAR_1->import_list[VAR_2]))
      return 1;
  return 0;
}
