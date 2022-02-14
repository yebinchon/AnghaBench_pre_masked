
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wint_t ;
struct TYPE_5__ {int * str; } ;
struct TYPE_6__ {int * sibling; int * next; TYPE_1__ val; int type; int ch; } ;
typedef TYPE_2__ keymacro_node_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static keymacro_node_t *
FUNC_1(wint_t VAR_1)
{
 keymacro_node_t *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->ch = VAR_1;
 VAR_2->type = VAR_0;
 VAR_2->val.str = ((void*)0);
 VAR_2->next = ((void*)0);
 VAR_2->sibling = ((void*)0);
 return VAR_2;
}
