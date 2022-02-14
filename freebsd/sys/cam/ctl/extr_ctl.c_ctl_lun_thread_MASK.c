
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_softc {int * lun_thread; int ctl_lock; int pending_lun_queue; int shutdown; } ;
struct ctl_be_lun {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ctl_be_lun* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ctl_be_lun*) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void *VAR_4)
{
 struct ctl_softc *VAR_5 = (struct ctl_softc *)VAR_4;
 struct ctl_be_lun *VAR_6;

 FUNC_0(("ctl_lun_thread starting\n"));
 FUNC_9(VAR_2);
 FUNC_8(VAR_2, VAR_1 - 1);
 FUNC_10(VAR_2);

 while (!VAR_5->shutdown) {
  FUNC_5(&VAR_5->ctl_lock);
  VAR_6 = FUNC_1(&VAR_5->pending_lun_queue);
  if (VAR_6 != ((void*)0)) {
   FUNC_2(&VAR_5->pending_lun_queue, VAR_3);
   FUNC_7(&VAR_5->ctl_lock);
   FUNC_3(VAR_6);
   continue;
  }


  FUNC_6(&VAR_5->pending_lun_queue, &VAR_5->ctl_lock,
      VAR_0, "-", 0);
 }
 VAR_5->lun_thread = ((void*)0);
 FUNC_4();
}
