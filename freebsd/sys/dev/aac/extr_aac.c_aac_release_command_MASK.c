
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct aac_softc {int aac_ev_cmfree; int aac_max_fib_size; } ;
struct aac_event {int ev_arg; int (* ev_callback ) (struct aac_softc*,struct aac_event*,int ) ;} ;
struct aac_command {TYPE_2__* cm_fib; scalar_t__ cm_fibphys; struct aac_softc* cm_sc; int cm_queue; int * cm_private; int * cm_complete; scalar_t__ cm_flags; int * cm_sgtable; scalar_t__ cm_datalen; } ;
struct TYPE_3__ {scalar_t__ SenderData; scalar_t__ ReceiverFibAddress; int SenderSize; scalar_t__ Flags; int StructType; int XferState; } ;
struct TYPE_4__ {TYPE_1__ Header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 struct aac_event* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct aac_event*,int ) ;
 int FUNC_2 (struct aac_command*) ;
 int VAR_4 ;
 int FUNC_3 (struct aac_softc*,char*,char*) ;
 int FUNC_4 (struct aac_softc*,struct aac_event*,int ) ;

void
FUNC_5(struct aac_command *VAR_5)
{
 struct aac_event *VAR_6;
 struct aac_softc *VAR_7;

 VAR_7 = VAR_5->cm_sc;
 FUNC_3(VAR_7, VAR_3, "");


 VAR_5->cm_datalen = 0;
 VAR_5->cm_sgtable = ((void*)0);
 VAR_5->cm_flags = 0;
 VAR_5->cm_complete = ((void*)0);
 VAR_5->cm_private = ((void*)0);
 VAR_5->cm_queue = VAR_0;
 VAR_5->cm_fib->Header.XferState = VAR_1;
 VAR_5->cm_fib->Header.StructType = VAR_2;
 VAR_5->cm_fib->Header.Flags = 0;
 VAR_5->cm_fib->Header.SenderSize = VAR_5->cm_sc->aac_max_fib_size;






 VAR_5->cm_fib->Header.ReceiverFibAddress = (u_int32_t)VAR_5->cm_fibphys;
 VAR_5->cm_fib->Header.SenderData = 0;

 FUNC_2(VAR_5);

 if ((VAR_6 = FUNC_0(&VAR_7->aac_ev_cmfree)) != ((void*)0)) {
  FUNC_1(&VAR_7->aac_ev_cmfree, VAR_6, VAR_4);
  VAR_6->ev_callback(VAR_7, VAR_6, VAR_6->ev_arg);
 }
}
