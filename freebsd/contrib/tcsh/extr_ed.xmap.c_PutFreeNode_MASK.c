
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* buf; } ;
struct TYPE_7__ {TYPE_1__ str; } ;
struct TYPE_8__ {int type; TYPE_2__ val; struct TYPE_8__* sibling; struct TYPE_8__* next; } ;
typedef TYPE_3__ XmapNode ;






 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(XmapNode *VAR_0)
{
    if (VAR_0 == ((void*)0))
 return;

    if (VAR_0->next != ((void*)0)) {
 FUNC_2(VAR_0->next);
 VAR_0->next = ((void*)0);
    }

    FUNC_2(VAR_0->sibling);

    switch (VAR_0->type) {
    case 131:
    case 129:
 break;
    case 130:
    case 128:
 FUNC_1(VAR_0->val.str.buf);
 break;
    default:
 FUNC_0();
 break;
    }
    FUNC_1(VAR_0);
}
