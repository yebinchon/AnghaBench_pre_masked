
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* firstPtr; } ;
struct TYPE_9__ {void* datum; int flags; struct TYPE_9__* nextPtr; int useCount; } ;
typedef TYPE_1__* LstNode ;
typedef TYPE_2__* Lst ;
typedef TYPE_1__* ListNode ;
typedef TYPE_2__* List ;
typedef int Boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,void*) ;

int
FUNC_4(Lst VAR_1, LstNode VAR_2, int (*VAR_3)(void *, void *),
  void *VAR_4)
{
    ListNode VAR_5 = VAR_2;
    List VAR_6 = VAR_1;
    ListNode VAR_7;
    Boolean VAR_8;
    int VAR_9;

    if (!FUNC_1 (VAR_6) || FUNC_0 (VAR_6)) {
 return 0;
    }

    do {





 VAR_7 = VAR_5->nextPtr;
 VAR_8 = (VAR_7 == ((void*)0) || VAR_7 == VAR_6->firstPtr);

 (void) VAR_5->useCount++;
 VAR_9 = (*VAR_3) (VAR_5->datum, VAR_4);
 (void) VAR_5->useCount--;






 if (VAR_7 != VAR_5->nextPtr) {
  VAR_7 = VAR_5->nextPtr;
  VAR_8 = 0;
 }

 if (VAR_5->flags & VAR_0) {
     FUNC_2((char *)VAR_5);
 }
 VAR_5 = VAR_7;
    } while (!VAR_9 && !FUNC_0(VAR_6) && !VAR_8);

    return VAR_9;
}
