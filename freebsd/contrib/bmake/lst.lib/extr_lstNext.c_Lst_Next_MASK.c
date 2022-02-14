
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ isOpen; scalar_t__ atEnd; TYPE_1__* firstPtr; TYPE_1__* curPtr; TYPE_1__* prevPtr; } ;
struct TYPE_8__ {struct TYPE_8__* nextPtr; } ;
typedef TYPE_1__* LstNode ;
typedef TYPE_2__* Lst ;
typedef TYPE_1__* ListNode ;
typedef TYPE_2__* List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;

LstNode
FUNC_1(Lst VAR_4)
{
    ListNode VAR_5;
    List VAR_6 = VAR_4;

    if ((FUNC_0 (VAR_4) == VAR_0) ||
 (VAR_6->isOpen == VAR_0)) {
     return ((void*)0);
    }

    VAR_6->prevPtr = VAR_6->curPtr;

    if (VAR_6->curPtr == ((void*)0)) {
 if (VAR_6->atEnd == VAR_3) {





     VAR_6->curPtr = VAR_5 = VAR_6->firstPtr;
     VAR_6->atEnd = VAR_1;
 } else {
     VAR_5 = ((void*)0);
     VAR_6->atEnd = VAR_2;
 }
    } else {
 VAR_5 = VAR_6->curPtr->nextPtr;
 VAR_6->curPtr = VAR_5;

 if (VAR_5 == VAR_6->firstPtr || VAR_5 == ((void*)0)) {



     VAR_6->atEnd = VAR_2;
 } else {



     VAR_6->atEnd = VAR_1;
 }
    }

    return (VAR_5);
}
