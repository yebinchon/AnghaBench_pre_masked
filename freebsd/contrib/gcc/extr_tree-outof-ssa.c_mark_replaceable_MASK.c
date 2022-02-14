
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef int tree ;
typedef TYPE_2__* temp_expr_table_p ;
struct TYPE_6__ {scalar_t__* version_info; TYPE_1__* pending_dependence; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_3 (temp_expr_table_p VAR_0, tree VAR_1)
{
  value_expr_p VAR_2;
  int VAR_3 = FUNC_1 (VAR_1);
  FUNC_2 (VAR_0, VAR_3, 1);


  if (VAR_0->version_info[VAR_3])
    {
      VAR_2 = (value_expr_p) VAR_0->version_info[VAR_3];
      for ( ; VAR_2->next; VAR_2 = VAR_2->next)
 continue;
      VAR_2->next = VAR_0->pending_dependence;
      VAR_0->pending_dependence = (value_expr_p)VAR_0->version_info[VAR_3];
    }

  VAR_0->version_info[VAR_3] = FUNC_0 (VAR_1);
}
