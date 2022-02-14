
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_9__ {int * str; } ;
typedef TYPE_1__ keymacro_value_t ;
struct TYPE_10__ {scalar_t__ const ch; int type; struct TYPE_10__* next; TYPE_1__ val; struct TYPE_10__* sibling; } ;
typedef TYPE_2__ keymacro_node_t ;
struct TYPE_11__ {int el_errfile; } ;
typedef TYPE_3__ EditLine ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int *) ;
 void* FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(EditLine *VAR_0, keymacro_node_t *VAR_1, const wchar_t *VAR_2,
    keymacro_value_t *VAR_3, int VAR_4)
{

 if (VAR_1->ch != *VAR_2) {
  keymacro_node_t *VAR_5;

  for (VAR_5 = VAR_1; VAR_5->sibling != ((void*)0); VAR_5 = VAR_5->sibling)
   if (VAR_5->sibling->ch == *VAR_2)
    break;
  if (VAR_5->sibling == ((void*)0))
   VAR_5->sibling = FUNC_2(*VAR_2);
  VAR_1 = VAR_5->sibling;
 }
 if (*++VAR_2 == '\0') {

  if (VAR_1->next != ((void*)0)) {
   FUNC_3(VAR_0, VAR_1->next);

   VAR_1->next = ((void*)0);
  }
  switch (VAR_1->type) {
  case 130:
  case 129:
   break;
  case 128:
   if (VAR_1->val.str)
    FUNC_1(VAR_1->val.str);
   break;
  default:
   FUNC_0((VAR_0->el_errfile, "Bad XK_ type %d\n",
       VAR_1->type));
   break;
  }

  switch (VAR_1->type = VAR_4) {
  case 130:
   VAR_1->val = *VAR_3;
   break;
  case 128:
   if ((VAR_1->val.str = FUNC_4(VAR_3->str)) == ((void*)0))
    return -1;
   break;
  default:
   FUNC_0((VAR_0->el_errfile, "Bad XK_ type %d\n", VAR_4));
   break;
  }
 } else {

  if (VAR_1->next == ((void*)0))
   VAR_1->next = FUNC_2(*VAR_2);
  (void) FUNC_5(VAR_0, VAR_1->next, VAR_2, VAR_3, VAR_4);
 }
 return 0;
}
