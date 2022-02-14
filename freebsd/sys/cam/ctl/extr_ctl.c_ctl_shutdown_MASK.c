
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_thread {int queue_lock; int * thread; } ;
struct ctl_softc {scalar_t__ is_single; int shutdown; int sysctl_ctx; struct ctl_softc* ctl_ports; struct ctl_softc* ctl_port_mask; struct ctl_softc* ctl_lun_mask; struct ctl_softc* ctl_luns; int ctl_lock; int io_zone; struct ctl_thread* thresh_thread; int * lun_thread; struct ctl_thread pending_lun_queue; struct ctl_thread* threads; int dev; } ;


 int VAR_0 ;
 struct ctl_softc* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctl_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ctl_softc*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ctl_thread*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(void)
{
 struct ctl_softc *VAR_4 = VAR_1;
 int VAR_5;

 if (VAR_4->is_single == 0)
  FUNC_0(&VAR_2);

 FUNC_2(VAR_4->dev);


 VAR_4->shutdown = 1;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct ctl_thread *VAR_6 = &VAR_4->threads[VAR_5];
  while (VAR_6->thread != ((void*)0)) {
   FUNC_8(VAR_6);
   if (VAR_6->thread != ((void*)0))
    FUNC_5("CTL thr shutdown", 1);
  }
  FUNC_4(&VAR_6->queue_lock);
 }
 while (VAR_4->lun_thread != ((void*)0)) {
  FUNC_8(&VAR_4->pending_lun_queue);
  if (VAR_4->lun_thread != ((void*)0))
   FUNC_5("CTL thr shutdown", 1);
 }
 while (VAR_4->thresh_thread != ((void*)0)) {
  FUNC_8(VAR_4->thresh_thread);
  if (VAR_4->thresh_thread != ((void*)0))
   FUNC_5("CTL thr shutdown", 1);
 }

 FUNC_1(VAR_4);
 FUNC_7(VAR_4->io_zone);
 FUNC_4(&VAR_4->ctl_lock);

 FUNC_3(VAR_4->ctl_luns, VAR_0);
 FUNC_3(VAR_4->ctl_lun_mask, VAR_0);
 FUNC_3(VAR_4->ctl_port_mask, VAR_0);
 FUNC_3(VAR_4->ctl_ports, VAR_0);

 FUNC_6(&VAR_4->sysctl_ctx);

 FUNC_3(VAR_4, VAR_0);
 VAR_1 = ((void*)0);
 return (0);
}
