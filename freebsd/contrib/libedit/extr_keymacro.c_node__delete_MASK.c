
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_4__ {scalar_t__ const ch; struct TYPE_4__* sibling; struct TYPE_4__* next; } ;
typedef TYPE_1__ keymacro_node_t ;
typedef int EditLine ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(EditLine *VAR_0, keymacro_node_t **VAR_1, const wchar_t *VAR_2)
{
 keymacro_node_t *VAR_3;
 keymacro_node_t *VAR_4 = ((void*)0);

 VAR_3 = *VAR_1;

 if (VAR_3->ch != *VAR_2) {
  keymacro_node_t *VAR_5;

  for (VAR_5 = VAR_3; VAR_5->sibling != ((void*)0); VAR_5 = VAR_5->sibling)
   if (VAR_5->sibling->ch == *VAR_2)
    break;
  if (VAR_5->sibling == ((void*)0))
   return 0;
  VAR_4 = VAR_5;
  VAR_3 = VAR_5->sibling;
 }
 if (*++VAR_2 == '\0') {

  if (VAR_4 == ((void*)0))
   *VAR_1 = VAR_3->sibling;
  else
   VAR_4->sibling = VAR_3->sibling;
  VAR_3->sibling = ((void*)0);
  FUNC_0(VAR_0, VAR_3);
  return 1;
 } else if (VAR_3->next != ((void*)0) &&
     FUNC_1(VAR_0, &VAR_3->next, VAR_2) == 1) {
  if (VAR_3->next != ((void*)0))
   return 0;
  if (VAR_4 == ((void*)0))
   *VAR_1 = VAR_3->sibling;
  else
   VAR_4->sibling = VAR_3->sibling;
  VAR_3->sibling = ((void*)0);
  FUNC_0(VAR_0, VAR_3);
  return 1;
 } else {
  return 0;
 }
}
