
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int ssize_t ;
struct TYPE_10__ {scalar_t__ const ch; struct TYPE_10__* sibling; int type; int val; struct TYPE_10__* next; } ;
typedef TYPE_2__ keymacro_node_t ;
struct TYPE_9__ {char* buf; } ;
struct TYPE_11__ {TYPE_1__ el_keymacro; } ;
typedef TYPE_3__ EditLine ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__ const) ;
 int FUNC_1 (TYPE_3__*,char*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,size_t) ;

__attribute__((used)) static int
FUNC_3(EditLine *VAR_1, const wchar_t *VAR_2, keymacro_node_t *VAR_3,
    size_t VAR_4)
{
 ssize_t VAR_5;

 if (VAR_3 == ((void*)0))
  return -1;

 if (!VAR_2 || *VAR_2 == 0) {

  (void) FUNC_2(VAR_1, VAR_3, VAR_4);
  return 0;
 } else {

  if (VAR_3->ch == *VAR_2) {

   VAR_5 = FUNC_0(VAR_1->el_keymacro.buf + VAR_4,
       VAR_0 - VAR_4, VAR_3->ch);
   if (VAR_5 == -1)
    return -1;
   if (VAR_3->next != ((void*)0))

    return (FUNC_3(VAR_1, VAR_2 + 1, VAR_3->next,
        (size_t)VAR_5 + VAR_4));
   else {

    if (VAR_2[1] == 0) {
     size_t VAR_6 = VAR_4 + (size_t)VAR_5;
     VAR_1->el_keymacro.buf[VAR_6] = '"';
     VAR_1->el_keymacro.buf[VAR_6 + 1] = '\0';
     FUNC_1(VAR_1, VAR_1->el_keymacro.buf,
         &VAR_3->val, VAR_3->type);
     return 0;
    } else
     return -1;

   }
  } else {

   if (VAR_3->sibling)
    return (FUNC_3(VAR_1, VAR_2, VAR_3->sibling,
        VAR_4));
   else
    return -1;
  }
 }
}
