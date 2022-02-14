
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* firstPtr; int atEnd; TYPE_1__* curPtr; TYPE_1__* prevPtr; scalar_t__ isOpen; TYPE_1__* lastPtr; } ;
struct TYPE_11__ {scalar_t__ useCount; int flags; struct TYPE_11__* prevPtr; struct TYPE_11__* nextPtr; } ;
typedef int ReturnStatus ;
typedef TYPE_1__* LstNode ;
typedef TYPE_2__* Lst ;
typedef TYPE_1__* ListNode ;
typedef TYPE_2__* List ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

ReturnStatus
FUNC_3(Lst VAR_4, LstNode VAR_5)
{
    List VAR_6 = VAR_4;
    ListNode VAR_7 = VAR_5;

    if (!FUNC_1 (VAR_4) ||
 !FUNC_0 (VAR_5, VAR_4)) {
     return (VAR_0);
    }




    if (VAR_7->nextPtr != ((void*)0)) {
 VAR_7->nextPtr->prevPtr = VAR_7->prevPtr;
    }
    if (VAR_7->prevPtr != ((void*)0)) {
 VAR_7->prevPtr->nextPtr = VAR_7->nextPtr;
    }





    if (VAR_6->firstPtr == VAR_7) {
 VAR_6->firstPtr = VAR_7->nextPtr;
    }
    if (VAR_6->lastPtr == VAR_7) {
 VAR_6->lastPtr = VAR_7->prevPtr;
    }







    if (VAR_6->isOpen && (VAR_6->curPtr == VAR_7)) {
 VAR_6->curPtr = VAR_6->prevPtr;
 if (VAR_6->curPtr == ((void*)0)) {
     VAR_6->atEnd = VAR_3;
 }
    }






    if (VAR_6->firstPtr == VAR_7) {
 VAR_6->firstPtr = ((void*)0);
    }





    if (VAR_7->useCount == 0) {
 FUNC_2(VAR_5);
    } else {
 VAR_7->flags |= VAR_1;
    }

    return (VAR_2);
}
