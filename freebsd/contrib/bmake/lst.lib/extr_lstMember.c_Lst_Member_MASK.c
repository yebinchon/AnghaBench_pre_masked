
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* firstPtr; } ;
struct TYPE_7__ {void* datum; struct TYPE_7__* nextPtr; } ;
typedef TYPE_1__* LstNode ;
typedef TYPE_2__* Lst ;
typedef TYPE_1__* ListNode ;
typedef TYPE_2__* List ;



LstNode
FUNC_0(Lst VAR_0, void *VAR_1)
{
    List VAR_2 = VAR_0;
    ListNode VAR_3;

    if (VAR_2 == ((void*)0)) {
 return ((void*)0);
    }
    VAR_3 = VAR_2->firstPtr;
    if (VAR_3 == ((void*)0)) {
 return ((void*)0);
    }

    do {
 if (VAR_3->datum == VAR_1) {
     return VAR_3;
 }
 VAR_3 = VAR_3->nextPtr;
    } while (VAR_3 != ((void*)0) && VAR_3 != VAR_2->firstPtr);

    return ((void*)0);
}
