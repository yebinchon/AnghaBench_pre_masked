
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_5__ {int * str; } ;
typedef TYPE_1__ keymacro_value_t ;
struct TYPE_6__ {char ch; scalar_t__ type; struct TYPE_6__* sibling; TYPE_1__ val; struct TYPE_6__* next; } ;
typedef TYPE_2__ keymacro_node_t ;
typedef int EditLine ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int
FUNC_1(EditLine *VAR_3, keymacro_node_t *VAR_4, wchar_t *VAR_5,
    keymacro_value_t *VAR_6)
{

 if (VAR_4->ch == *VAR_5) {

  if (VAR_4->next) {

   if (FUNC_0(VAR_3, VAR_5) != 1)
    return VAR_1;
   return FUNC_1(VAR_3, VAR_4->next, VAR_5, VAR_6);
  } else {
   *VAR_6 = VAR_4->val;
   if (VAR_4->type != VAR_0)
    *VAR_5 = '\0';
   return VAR_4->type;
  }
 } else {

  if (VAR_4->sibling) {

   return FUNC_1(VAR_3, VAR_4->sibling, VAR_5, VAR_6);
  } else {

   VAR_6->str = ((void*)0);
   return VAR_2;
  }
 }
}
