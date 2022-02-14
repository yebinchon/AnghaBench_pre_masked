
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_16__ {TYPE_5__* opaque; } ;
typedef TYPE_4__ evStreamID ;
struct TYPE_20__ {scalar_t__ opaque; } ;
struct TYPE_17__ {int iovOrigCount; int iovOrig; TYPE_9__ file; TYPE_3__* prevDone; struct TYPE_17__* nextDone; TYPE_2__* prev; TYPE_1__* next; } ;
typedef TYPE_5__ evStream ;
struct TYPE_18__ {TYPE_3__* strLast; TYPE_5__* strDone; TYPE_1__* streams; } ;
typedef TYPE_6__ evContext_p ;
struct TYPE_19__ {TYPE_6__* opaque; } ;
typedef TYPE_7__ evContext ;
struct TYPE_15__ {TYPE_5__* nextDone; } ;
struct TYPE_14__ {TYPE_1__* next; } ;
struct TYPE_13__ {TYPE_2__* prev; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_7__,TYPE_9__) ;
 int FUNC_2 (int ,int) ;

int
FUNC_3(evContext VAR_0, evStreamID VAR_1) {
 evContext_p *VAR_2 = VAR_0.opaque;
 evStream *VAR_3 = VAR_1.opaque;
 if (VAR_3->prev != ((void*)0))
  VAR_3->prev->next = VAR_3->next;
 else
  VAR_2->streams = VAR_3->next;
 if (VAR_3->next != ((void*)0))
  VAR_3->next->prev = VAR_3->prev;





 if (VAR_3->prevDone == ((void*)0) && VAR_3->nextDone == ((void*)0)) {





  if (VAR_2->strDone == VAR_3) {
   VAR_2->strDone = ((void*)0);
   VAR_2->strLast = ((void*)0);
  }
 } else {
  if (VAR_3->prevDone != ((void*)0))
   VAR_3->prevDone->nextDone = VAR_3->nextDone;
  else
   VAR_2->strDone = VAR_3->nextDone;
  if (VAR_3->nextDone != ((void*)0))
   VAR_3->nextDone->prevDone = VAR_3->prevDone;
  else
   VAR_2->strLast = VAR_3->prevDone;
 }


 if (VAR_3->file.opaque)
  FUNC_1(VAR_0, VAR_3->file);
 FUNC_2(VAR_3->iovOrig, sizeof (struct iovec) * VAR_3->iovOrigCount);
 FUNC_0(VAR_3);
 return (0);
}
