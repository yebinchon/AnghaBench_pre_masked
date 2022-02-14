
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dump_file_info {int state; } ;
typedef enum tree_dump_index { ____Placeholder_tree_dump_index } tree_dump_index ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 struct dump_file_info* FUNC_0 (int) ;

int
FUNC_1 (enum tree_dump_index VAR_6)
{
  if (VAR_6 == VAR_2)
    {
      size_t VAR_7;
      for (VAR_7 = VAR_1 + 1; VAR_7 < (size_t) VAR_0; VAR_7++)
 if (VAR_3[VAR_7].state)
   return 1;
      for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 if (VAR_4[VAR_7].state)
   return 1;
      return 0;
    }
  else
    {
      struct dump_file_info *VAR_8 = FUNC_0 (VAR_6);
      return VAR_8->state;
    }
}
