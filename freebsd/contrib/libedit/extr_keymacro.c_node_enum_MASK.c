
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_8__ {struct TYPE_8__* sibling; struct TYPE_8__* next; int type; int val; int ch; } ;
typedef TYPE_2__ keymacro_node_t ;
struct TYPE_7__ {char* buf; } ;
struct TYPE_9__ {TYPE_1__ el_keymacro; int el_errfile; } ;
typedef TYPE_3__ EditLine ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(EditLine *VAR_1, keymacro_node_t *VAR_2, size_t VAR_3)
{
        ssize_t VAR_4;

 if (VAR_3 >= VAR_0 - 5) {
  VAR_1->el_keymacro.buf[++VAR_3] = '"';
  VAR_1->el_keymacro.buf[++VAR_3] = '\0';
  (void) FUNC_1(VAR_1->el_errfile,
      "Some extended keys too long for internal print buffer");
  (void) FUNC_1(VAR_1->el_errfile, " \"%s...\"\n",
      VAR_1->el_keymacro.buf);
  return 0;
 }
 if (VAR_2 == ((void*)0)) {




  return -1;
 }

        VAR_4 = FUNC_0(VAR_1->el_keymacro.buf + VAR_3, VAR_0 - VAR_3,
     VAR_2->ch);
 if (VAR_2->next == ((void*)0)) {

  VAR_1->el_keymacro.buf[VAR_3 + (size_t)VAR_4 ] = '"';
  VAR_1->el_keymacro.buf[VAR_3 + (size_t)VAR_4 + 1] = '\0';
  FUNC_2(VAR_1, VAR_1->el_keymacro.buf, &VAR_2->val, VAR_2->type);
 } else
  (void) FUNC_3(VAR_1, VAR_2->next, VAR_3 + (size_t)VAR_4);


 if (VAR_2->sibling)
  (void) FUNC_3(VAR_1, VAR_2->sibling, VAR_3);
 return 0;
}
