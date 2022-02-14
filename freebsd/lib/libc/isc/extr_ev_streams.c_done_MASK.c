
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * opaque; } ;
struct TYPE_8__ {TYPE_5__ file; struct TYPE_8__* nextDone; struct TYPE_8__* prevDone; } ;
typedef TYPE_1__ evStream ;
struct TYPE_9__ {TYPE_1__* strLast; TYPE_1__* strDone; } ;
typedef TYPE_2__ evContext_p ;
struct TYPE_10__ {TYPE_2__* opaque; } ;
typedef TYPE_3__ evContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__,TYPE_5__) ;

__attribute__((used)) static void
FUNC_2(evContext VAR_0, evStream *VAR_1) {
 evContext_p *VAR_2 = VAR_0.opaque;

 if (VAR_2->strLast != ((void*)0)) {
  VAR_1->prevDone = VAR_2->strLast;
  VAR_2->strLast->nextDone = VAR_1;
  VAR_2->strLast = VAR_1;
 } else {
  FUNC_0(VAR_2->strDone == ((void*)0));
  VAR_2->strDone = VAR_2->strLast = VAR_1;
 }
 FUNC_1(VAR_0, VAR_1->file);
 VAR_1->file.opaque = ((void*)0);

}
