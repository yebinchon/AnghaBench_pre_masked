
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef TYPE_2__* temp_expr_table_p ;
struct TYPE_6__ {TYPE_1__* free_list; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;



__attribute__((used)) static inline void
FUNC_0 (temp_expr_table_p VAR_0, value_expr_p VAR_1)
{
  VAR_1->next = VAR_0->free_list;
  VAR_0->free_list = VAR_1;
}
