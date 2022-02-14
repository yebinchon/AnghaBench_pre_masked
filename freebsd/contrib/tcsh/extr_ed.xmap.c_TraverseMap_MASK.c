
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; int * buf; } ;
struct TYPE_9__ {TYPE_1__ str; int cmd; } ;
typedef TYPE_2__ XmapVal ;
struct TYPE_10__ {char ch; int type; struct TYPE_10__* sibling; TYPE_2__ val; struct TYPE_10__* next; } ;
typedef TYPE_3__ XmapNode ;
struct TYPE_11__ {char* buf; } ;
typedef char Char ;
typedef TYPE_4__ CStr ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(XmapNode *VAR_3, CStr *VAR_4, XmapVal *VAR_5)
{
    Char VAR_6;

    if (VAR_3->ch == *(VAR_4->buf)) {

 if (VAR_3->next) {

     if (FUNC_0(&VAR_6) != 1) {
  VAR_5->cmd = VAR_0;
  return VAR_1;
     }
     *(VAR_4->buf) = VAR_6;
     return (FUNC_1(VAR_3->next, VAR_4, VAR_5));
 }
 else {
     *VAR_5 = VAR_3->val;
     if (VAR_3->type != VAR_1)
  *(VAR_4->buf) = '\0';
     return VAR_3->type;
 }
    }
    else {

 if (VAR_3->sibling) {

     return (FUNC_1(VAR_3->sibling, VAR_4, VAR_5));
 }
 else {

     VAR_5->str.buf = ((void*)0);
     VAR_5->str.len = 0;
     return VAR_2;
 }
    }
}
