
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int * buf; } ;
struct TYPE_8__ {TYPE_2__ str; } ;
struct TYPE_10__ {int * sibling; int * next; TYPE_1__ val; int type; int ch; } ;
typedef TYPE_3__ XmapNode ;
struct TYPE_11__ {int * buf; } ;
typedef TYPE_4__ CStr ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

__attribute__((used)) static XmapNode *
FUNC_1(CStr *VAR_1)
{
    XmapNode *VAR_2;

    VAR_2 = FUNC_0(sizeof(XmapNode));
    VAR_2->ch = VAR_1->buf[0];
    VAR_2->type = VAR_0;
    VAR_2->val.str.buf = ((void*)0);
    VAR_2->val.str.len = 0;
    VAR_2->next = ((void*)0);
    VAR_2->sibling = ((void*)0);
    return (VAR_2);
}
