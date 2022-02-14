
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int status; } ;
union ccb {TYPE_1__ ccb_h; int ccb_adapter; } ;
struct TYPE_9__ {scalar_t__ outstandingCommands; } ;
struct TYPE_8__ {TYPE_3__* pAdapter; } ;
typedef TYPE_2__* PBUS_DMAMAP ;
typedef TYPE_3__ IAL_ADAPTER_T ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(union ccb *VAR_1)
{
 PBUS_DMAMAP VAR_2 = (PBUS_DMAMAP)VAR_1->ccb_adapter;
 IAL_ADAPTER_T * VAR_3 = VAR_2->pAdapter;
 FUNC_1(("ccb_done: ccb %p status %x\n", VAR_1, VAR_1->ccb_h.status));

 FUNC_2(VAR_2);
 FUNC_4(VAR_1);

 VAR_3->outstandingCommands--;

 if (VAR_3->outstandingCommands == 0)
 {
  if(VAR_0 == 0)
   FUNC_0(VAR_3);
  FUNC_3(VAR_3);
 }
}
