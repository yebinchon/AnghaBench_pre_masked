
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef TYPE_2__* temp_expr_table_p ;
struct TYPE_6__ {int partition_in_use; TYPE_1__** partition_dep_list; } ;
struct TYPE_5__ {int value; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2 (temp_expr_table_p VAR_0, int VAR_1, bool VAR_2)
{
  value_expr_p VAR_3;


  while ((VAR_3 = VAR_0->partition_dep_list[VAR_1]) != ((void*)0))
    FUNC_1 (VAR_0, VAR_3->value, 0);

  if (VAR_2)
    FUNC_0 (VAR_0->partition_in_use, VAR_1);
}
