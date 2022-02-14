
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapping {scalar_t__* name; struct map_value* values; TYPE_1__* group; } ;
struct map_value {int number; struct map_value* next; } ;
struct TYPE_2__ {int attrs; } ;


 scalar_t__ FUNC_0 (int ,char const**) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__*,int) ;

__attribute__((used)) static struct map_value *
FUNC_3 (const char *VAR_0, struct mapping *VAR_1, int VAR_2)
{
  const char *VAR_3;
  struct mapping *VAR_4;
  struct map_value *VAR_5;



  VAR_3 = FUNC_1 (VAR_0, ':');
  if (VAR_3 == 0)
    VAR_3 = VAR_0;
  else
    {
      if (FUNC_2 (VAR_0, VAR_1->name, VAR_3 - VAR_0) != 0
   || VAR_1->name[VAR_3 - VAR_0] != 0)
 return 0;
      VAR_3++;
    }


  VAR_4 = (struct mapping *) FUNC_0 (VAR_1->group->attrs, &VAR_3);
  if (VAR_4 == 0)
    return 0;


  for (VAR_5 = VAR_4->values; VAR_5 != 0; VAR_5 = VAR_5->next)
    if (VAR_5->number == VAR_2)
      break;

  return VAR_5;
}
