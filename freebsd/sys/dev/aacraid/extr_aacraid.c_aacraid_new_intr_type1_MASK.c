
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_softc {int flags; int* aac_host_rrq_idx; int aac_vector_cap; int aac_io_lock; scalar_t__ aif_pending; TYPE_2__* aac_common; int * aac_rrq_outstanding; struct aac_command* aac_commands; struct aac_command* aac_sync_cm; scalar_t__ msi_enabled; } ;
struct aac_msix_ctx {int vector_no; struct aac_softc* sc; } ;
struct TYPE_3__ {int XferState; } ;
struct aac_fib {scalar_t__ data; TYPE_1__ Header; } ;
struct aac_command {int (* cm_complete ) (struct aac_command*) ;int cm_flags; struct aac_fib* cm_fib; } ;
struct TYPE_4__ {int* ac_host_rrq; } ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct aac_softc*,int ) ;
 int FUNC_2 (struct aac_softc*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct aac_softc*,struct aac_fib*) ;
 int FUNC_4 (struct aac_command*) ;
 int FUNC_5 (struct aac_softc*) ;
 int FUNC_6 (struct aac_command*) ;
 int FUNC_7 (struct aac_command*) ;
 int FUNC_8 (struct aac_softc*) ;
 int FUNC_9 (struct aac_softc*,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct aac_command*) ;
 int FUNC_13 (struct aac_command*) ;
 int FUNC_14 (struct aac_command*) ;

void
FUNC_15(void *VAR_20)
{
 struct aac_msix_ctx *VAR_21;
 struct aac_softc *VAR_22;
 int VAR_23;
 struct aac_command *VAR_24;
 struct aac_fib *VAR_25;
 u_int32_t VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33;

 VAR_21 = (struct aac_msix_ctx *)VAR_20;
 VAR_22 = VAR_21->sc;
 VAR_23 = VAR_21->vector_no;

 FUNC_9(VAR_22, VAR_17, "");
 FUNC_10(&VAR_22->aac_io_lock);

 if (VAR_22->msi_enabled) {
  VAR_33 = VAR_10;
  if (VAR_23 == 0) {
   VAR_26 = FUNC_1(VAR_22, VAR_14);
   if (VAR_26 & 0x40000)
    VAR_33 |= VAR_8;
   else if (VAR_26 & 0x1000)
    VAR_33 |= VAR_11;
  }
 } else {
  VAR_33 = VAR_9;
  VAR_26 = FUNC_1(VAR_22, VAR_15);
  if (VAR_26 & VAR_4) {
   VAR_26 = VAR_4;
   FUNC_2(VAR_22, VAR_13, VAR_26);
  } else {
   VAR_27 = (VAR_26 >> VAR_16);
   FUNC_2(VAR_22, VAR_13, VAR_26);
   if (VAR_27 & VAR_3)
    VAR_33 |= VAR_8;
   else if (VAR_27 & VAR_5)
    VAR_33 |= VAR_11;
  }

  FUNC_1(VAR_22, VAR_15);
 }

 if (VAR_33 & VAR_11) {
  if (VAR_22->aac_sync_cm) {
   VAR_24 = VAR_22->aac_sync_cm;
   VAR_24->cm_flags |= VAR_1;

   if (VAR_24->cm_complete != ((void*)0)) {
    VAR_24->cm_complete(VAR_24);
   } else {

    FUNC_14(VAR_24);
   }
   VAR_22->flags &= ~VAR_12;
   VAR_22->aac_sync_cm = ((void*)0);
  }
  VAR_33 = 0;
 }

 if (VAR_33 & VAR_8) {
  if (VAR_33 & VAR_9) {
   FUNC_5(VAR_22);
   VAR_33 = 0;
  }
 }

 if (VAR_33) {

  VAR_28 = VAR_22->aac_host_rrq_idx[VAR_23];
  for (;;) {
   VAR_30 = VAR_31 = VAR_32 = 0;

   VAR_29 = (VAR_22->aac_common->ac_host_rrq[VAR_28] & 0x7fffffff);

   if (VAR_29 & 0x40000000)
    VAR_30 = 1;

   else if (VAR_29 & 0x00800000)
    VAR_31 = VAR_19;
   VAR_29 &= 0x0000ffff;
   if (VAR_29 == 0)
    break;

   VAR_24 = VAR_22->aac_commands + (VAR_29 - 1);
   VAR_25 = VAR_24->cm_fib;
   VAR_22->aac_rrq_outstanding[VAR_23]--;
   if (VAR_31) {
    VAR_32 = (VAR_25->Header.XferState & VAR_7) ? 1:0;
    if (!VAR_32)
     FUNC_3(VAR_22, VAR_25);
    FUNC_4(VAR_24);
    FUNC_7(VAR_24);
   } else {
    if (VAR_30) {
     VAR_25->Header.XferState |= VAR_6;
     *((u_int32_t *)(VAR_25->data)) = VAR_18;
     VAR_24->cm_flags |= VAR_2;
    }
    FUNC_4(VAR_24);
    FUNC_6(VAR_24);
    VAR_24->cm_flags |= VAR_1;


    if (VAR_24->cm_complete != ((void*)0)) {
     VAR_24->cm_complete(VAR_24);
    } else {

     FUNC_14(VAR_24);
    }
    VAR_22->flags &= ~VAR_12;
   }

   VAR_22->aac_common->ac_host_rrq[VAR_28++] = 0;
   if (VAR_28 == (VAR_23 + 1) * VAR_22->aac_vector_cap)
    VAR_28 = VAR_23 * VAR_22->aac_vector_cap;
   VAR_22->aac_host_rrq_idx[VAR_23] = VAR_28;

   if ((VAR_31 && !VAR_32) || VAR_22->aif_pending)
    FUNC_5(VAR_22);
  }
 }

 if (VAR_33 & VAR_8) {
  FUNC_5(VAR_22);
  FUNC_0(VAR_22, VAR_0);
  VAR_33 = 0;
 }


 if ((VAR_22->flags & VAR_12) == 0)
  FUNC_8(VAR_22);
 FUNC_11(&VAR_22->aac_io_lock);
}
