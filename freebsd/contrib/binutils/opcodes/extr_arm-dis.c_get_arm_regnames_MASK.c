
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* description; char** reg_names; } ;


 TYPE_1__* VAR_0 ;

int
FUNC_0 (int VAR_1, const char **VAR_2, const char **VAR_3,
    const char *const **VAR_4)
{
  *VAR_2 = VAR_0[VAR_1].name;
  *VAR_3 = VAR_0[VAR_1].description;
  *VAR_4 = VAR_0[VAR_1].reg_names;
  return 16;
}
