
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef int tree ;
typedef TYPE_2__* temp_expr_table_p ;
struct TYPE_10__ {int partition_in_use; int * version_info; TYPE_1__** partition_dep_list; int map; TYPE_1__* pending_dependence; int replaceable; } ;
struct TYPE_9__ {int value; struct TYPE_9__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__**,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__**,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7 (temp_expr_table_p VAR_1, int VAR_2, tree VAR_3)
{
  int VAR_4, VAR_5;
  value_expr_p VAR_6;

  VAR_4 = FUNC_0 (VAR_3);
  if (FUNC_3 (VAR_1->replaceable, VAR_4))
    {


      while ((VAR_6 = VAR_1->pending_dependence))
        {
   VAR_1->pending_dependence = VAR_6->next;


   VAR_5 = VAR_6->value;
   VAR_6->value = VAR_2;
   FUNC_1 (VAR_1, &(VAR_1->partition_dep_list[VAR_5]), VAR_6);
          FUNC_2 (VAR_1,
        (value_expr_p *)&(VAR_1->version_info[VAR_2]), VAR_5);
   FUNC_4 (VAR_1->partition_in_use, VAR_5);
 }
    }
  else
    {
      VAR_4 = FUNC_6 (VAR_1->map, VAR_3);
      FUNC_5 (VAR_4 != VAR_0);
      FUNC_2 (VAR_1, &(VAR_1->partition_dep_list[VAR_4]), VAR_2);
      FUNC_2 (VAR_1,
    (value_expr_p *)&(VAR_1->version_info[VAR_2]), VAR_4);
      FUNC_4 (VAR_1->partition_in_use, VAR_4);
    }
}
