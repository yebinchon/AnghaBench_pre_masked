
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ch; struct TYPE_6__* sibling; struct TYPE_6__* next; } ;
typedef TYPE_1__ XmapNode ;
struct TYPE_7__ {scalar_t__* buf; scalar_t__ len; } ;
typedef TYPE_2__ CStr ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(XmapNode **VAR_0, CStr *VAR_1)
{
    XmapNode *VAR_2;

    VAR_2 = *VAR_0;



    if (VAR_2->ch != *(VAR_1->buf)) {
 XmapNode *VAR_3;

 for (VAR_3 = VAR_2; VAR_3->sibling != ((void*)0); VAR_3 = VAR_3->sibling)
     if (VAR_3->sibling->ch == *(VAR_1->buf))
  break;
 if (VAR_3->sibling == ((void*)0))
     return (0);
 VAR_0 = &VAR_3->sibling;
 VAR_2 = VAR_3->sibling;
    }

    VAR_1->buf++;
    VAR_1->len--;

    if (VAR_1->len == 0) {

 *VAR_0 = VAR_2->sibling;
 VAR_2->sibling = ((void*)0);
 FUNC_0(VAR_2);
 return (1);
    }
    else if (VAR_2->next != ((void*)0) && FUNC_1(&VAR_2->next, VAR_1) == 1) {
 if (VAR_2->next != ((void*)0))
     return (0);
 *VAR_0 = VAR_2->sibling;
 VAR_2->sibling = ((void*)0);
 FUNC_0(VAR_2);
 return (1);
    }
    else {
 return (0);
    }
}
