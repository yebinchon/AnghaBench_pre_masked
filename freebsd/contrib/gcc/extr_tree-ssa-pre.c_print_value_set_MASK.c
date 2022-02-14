
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
struct TYPE_5__ {struct TYPE_5__* next; int expr; } ;
struct TYPE_4__ {TYPE_2__* head; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_0, value_set_t VAR_1,
   const char *VAR_2, int VAR_3)
{
  value_set_node_t VAR_4;
  FUNC_0 (VAR_0, "%s[%d] := { ", VAR_2, VAR_3);
  if (VAR_1)
    {
      for (VAR_4 = VAR_1->head;
    VAR_4;
    VAR_4 = VAR_4->next)
 {
   FUNC_2 (VAR_0, VAR_4->expr, 0);

   FUNC_0 (VAR_0, " (");
   FUNC_2 (VAR_0, FUNC_1 (VAR_4->expr), 0);
   FUNC_0 (VAR_0, ") ");

   if (VAR_4->next)
     FUNC_0 (VAR_0, ", ");
 }
    }

  FUNC_0 (VAR_0, " }\n");
}
