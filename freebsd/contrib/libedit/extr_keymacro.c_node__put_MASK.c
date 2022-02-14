
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* str; } ;
struct TYPE_8__ {int type; TYPE_1__ val; struct TYPE_8__* sibling; struct TYPE_8__* next; } ;
typedef TYPE_2__ keymacro_node_t ;
struct TYPE_9__ {int el_errfile; } ;
typedef TYPE_3__ EditLine ;


 int FUNC_0 (int ) ;



 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_0, keymacro_node_t *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->next != ((void*)0)) {
  FUNC_2(VAR_0, VAR_1->next);
  VAR_1->next = ((void*)0);
 }
 FUNC_2(VAR_0, VAR_1->sibling);

 switch (VAR_1->type) {
 case 130:
 case 129:
  break;
 case 128:
  if (VAR_1->val.str != ((void*)0))
   FUNC_1(VAR_1->val.str);
  break;
 default:
  FUNC_0((VAR_0->el_errfile, "Bad XK_ type %d\n", VAR_1->type));
  break;
 }
 FUNC_1(VAR_1);
}
