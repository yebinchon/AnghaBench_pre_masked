
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nesting_info {int context; } ;
struct cgraph_node {scalar_t__ origin; } ;


 int FUNC_0 (int ,int) ;
 struct cgraph_node* FUNC_1 (int ) ;
 int FUNC_2 (struct cgraph_node*) ;

__attribute__((used)) static void
FUNC_3 (struct nesting_info *VAR_0)
{
  struct cgraph_node *VAR_1 = FUNC_1 (VAR_0->context);



  if (VAR_1->origin)
    {
       FUNC_2 (FUNC_1 (VAR_0->context));
       FUNC_0 (VAR_0->context, 1);
    }
}
