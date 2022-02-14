
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ io_type; } ;
union ctl_io {int scsiio; TYPE_1__ io_hdr; } ;
struct ctl_thread {int * thread; int queue_lock; int rtr_queue; int incoming_queue; int done_queue; int isc_queue; struct ctl_softc* ctl_softc; } ;
struct ctl_softc {int shutdown; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (union ctl_io*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ctl_softc*,int *) ;
 int VAR_4 ;
 int FUNC_8 () ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ctl_thread*,int *,int ,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(void *VAR_6)
{
 struct ctl_thread *VAR_7 = (struct ctl_thread *)VAR_6;
 struct ctl_softc *VAR_8 = VAR_7->ctl_softc;
 union ctl_io *VAR_9;
 int VAR_10;

 FUNC_0(("ctl_work_thread starting\n"));
 FUNC_13(VAR_4);
 FUNC_12(VAR_4, VAR_3 - 1);
 FUNC_14(VAR_4);

 while (!VAR_8->shutdown) {
  FUNC_9(&VAR_7->queue_lock);
  VAR_9 = (union ctl_io *)FUNC_1(&VAR_7->isc_queue);
  if (VAR_9 != ((void*)0)) {
   FUNC_2(&VAR_7->isc_queue, VAR_5);
   FUNC_11(&VAR_7->queue_lock);
   FUNC_3(VAR_9);
   continue;
  }
  VAR_9 = (union ctl_io *)FUNC_1(&VAR_7->done_queue);
  if (VAR_9 != ((void*)0)) {
   FUNC_2(&VAR_7->done_queue, VAR_5);

   FUNC_11(&VAR_7->queue_lock);
   FUNC_4(VAR_9);
   continue;
  }
  VAR_9 = (union ctl_io *)FUNC_1(&VAR_7->incoming_queue);
  if (VAR_9 != ((void*)0)) {
   FUNC_2(&VAR_7->incoming_queue, VAR_5);
   FUNC_11(&VAR_7->queue_lock);
   if (VAR_9->io_hdr.io_type == VAR_0)
    FUNC_5(VAR_9);
   else
    FUNC_7(VAR_8, &VAR_9->scsiio);
   continue;
  }
  VAR_9 = (union ctl_io *)FUNC_1(&VAR_7->rtr_queue);
  if (VAR_9 != ((void*)0)) {
   FUNC_2(&VAR_7->rtr_queue, VAR_5);
   FUNC_11(&VAR_7->queue_lock);
   VAR_10 = FUNC_6(&VAR_9->scsiio);
   if (VAR_10 != VAR_1)
    FUNC_0(("ctl_scsiio failed\n"));
   continue;
  }


  FUNC_10(VAR_7, &VAR_7->queue_lock, VAR_2, "-", 0);
 }
 VAR_7->thread = ((void*)0);
 FUNC_8();
}
