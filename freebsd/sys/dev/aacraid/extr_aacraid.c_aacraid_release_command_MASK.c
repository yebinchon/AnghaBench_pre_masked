
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct aac_softc {int aac_ev_cmfree; int aac_max_fib_size; int aac_io_lock; } ;
struct aac_event {int ev_arg; int (* ev_callback ) (struct aac_softc*,struct aac_event*,int ) ;} ;
struct aac_command {TYPE_3__* cm_fib; scalar_t__ cm_fibphys; struct aac_softc* cm_sc; scalar_t__ cm_passthr_dmat; int * cm_ccb; int * cm_complete; scalar_t__ cm_flags; int * cm_sgtable; } ;
struct TYPE_4__ {scalar_t__ ReceiverFibAddress; } ;
struct TYPE_5__ {scalar_t__ Handle; TYPE_1__ u; int SenderSize; scalar_t__ Unused; int StructType; int XferState; } ;
struct TYPE_6__ {TYPE_2__ Header; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 struct aac_event* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct aac_event*,int ) ;
 int FUNC_2 (struct aac_command*) ;
 int VAR_4 ;
 int FUNC_3 (struct aac_softc*,char*,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct aac_softc*,struct aac_event*,int ) ;

void
FUNC_6(struct aac_command *VAR_5)
{
 struct aac_event *VAR_6;
 struct aac_softc *VAR_7;

 VAR_7 = VAR_5->cm_sc;
 FUNC_3(VAR_7, VAR_2, "");
 FUNC_4(&VAR_7->aac_io_lock, VAR_3);


 VAR_5->cm_sgtable = ((void*)0);
 VAR_5->cm_flags = 0;
 VAR_5->cm_complete = ((void*)0);
 VAR_5->cm_ccb = ((void*)0);
 VAR_5->cm_passthr_dmat = 0;
 VAR_5->cm_fib->Header.XferState = VAR_0;
 VAR_5->cm_fib->Header.StructType = VAR_1;
 VAR_5->cm_fib->Header.Unused = 0;
 VAR_5->cm_fib->Header.SenderSize = VAR_5->cm_sc->aac_max_fib_size;






 VAR_5->cm_fib->Header.u.ReceiverFibAddress = (u_int32_t)VAR_5->cm_fibphys;
 VAR_5->cm_fib->Header.Handle = 0;

 FUNC_2(VAR_5);





 while ((VAR_6 = FUNC_0(&VAR_7->aac_ev_cmfree)) != ((void*)0)) {
  FUNC_1(&VAR_7->aac_ev_cmfree, VAR_6, VAR_4);
  VAR_6->ev_callback(VAR_7, VAR_6, VAR_6->ev_arg);
 }
}
