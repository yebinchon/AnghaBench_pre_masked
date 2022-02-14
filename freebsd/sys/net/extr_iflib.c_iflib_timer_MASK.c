
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_16__ {int c_cpu; } ;
struct TYPE_14__ {scalar_t__ isc_pause_frames; } ;
struct TYPE_15__ {int ifc_flags; int ifc_ifp; int ifc_dev; TYPE_2__ ifc_softc_ctx; } ;
struct TYPE_13__ {int ift_last_timer_tick; scalar_t__ ift_qstatus; scalar_t__ ift_cleaned_prev; scalar_t__ ift_cleaned; int ift_pidx; int ift_id; TYPE_7__ ift_timer; int ift_task; scalar_t__ ift_db_pending; int ift_br; TYPE_3__* ift_ctx; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_7__*,int,void (*) (void*),TYPE_1__*,int ) ;
 int FUNC_6 (int ,char*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_13(void *VAR_8)
{
 iflib_txq_t VAR_9 = VAR_8;
 if_ctx_t VAR_10 = VAR_9->ift_ctx;
 if_softc_ctx_t VAR_11 = &VAR_10->ifc_softc_ctx;
 uint64_t VAR_12 = VAR_7;
 uint32_t VAR_13 = VAR_6 / 2;

 if (!(FUNC_8(VAR_10->ifc_ifp) & VAR_4))
  return;






 if (VAR_12 - VAR_9->ift_last_timer_tick >= VAR_6 / 2) {
  VAR_9->ift_last_timer_tick = VAR_12;
  FUNC_1(VAR_10, VAR_9->ift_id);
  if ((VAR_9->ift_qstatus == VAR_5) &&
      ((VAR_9->ift_cleaned_prev == VAR_9->ift_cleaned) ||
       (VAR_11->isc_pause_frames == 0)))
   goto hung;

  if (FUNC_12(VAR_9->ift_br))
   VAR_9->ift_qstatus = VAR_5;
  VAR_9->ift_cleaned_prev = VAR_9->ift_cleaned;
 }





 if (VAR_9->ift_db_pending)
  FUNC_0(&VAR_9->ift_task);

 VAR_11->isc_pause_frames = 0;
 if (FUNC_8(VAR_10->ifc_ifp) & VAR_4)
  FUNC_5(&VAR_9->ift_timer, VAR_13, FUNC_13, VAR_9, VAR_9->ift_timer.c_cpu);
 return;

 hung:
 FUNC_6(VAR_10->ifc_dev,
     "Watchdog timeout (TX: %d desc avail: %d pidx: %d) -- resetting\n",
     VAR_9->ift_id, FUNC_4(VAR_9), VAR_9->ift_pidx);
 FUNC_2(VAR_10);
 FUNC_9(VAR_10->ifc_ifp, VAR_3, VAR_4);
 VAR_10->ifc_flags |= (VAR_2|VAR_1);
 FUNC_10(VAR_10);
 FUNC_3(VAR_10);
}
