
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_list_element {int dummy; } ;
struct TYPE_3__ {int detect; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_3, int VAR_4,
      struct cmd_list_element *VAR_5)
{
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
      VAR_2[VAR_6].detect = VAR_1;
      FUNC_0 (&VAR_2[VAR_6]);
    }
}
