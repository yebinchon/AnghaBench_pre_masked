
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgraph_varpool_node {struct cgraph_varpool_node* next_needed; int decl; } ;
struct TYPE_2__ {int (* global_decl ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 struct cgraph_varpool_node* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  FUNC_4 (VAR_2);
  if (VAR_5 == 0 && VAR_6 == 0)
    while (VAR_3)
      {
 struct cgraph_varpool_node *VAR_7 = VAR_3;



 if (FUNC_0 (VAR_7->decl)
     && (FUNC_1 (FUNC_0 (VAR_7->decl)) == VAR_0
  || FUNC_1 (FUNC_0 (VAR_7->decl)) == VAR_1)
     && VAR_5 == 0 && VAR_6 == 0)
      (*VAR_4->global_decl) (VAR_7->decl);
 VAR_3 = VAR_7->next_needed;
 VAR_7->next_needed = 0;
      }
  FUNC_3 (VAR_2);
}
