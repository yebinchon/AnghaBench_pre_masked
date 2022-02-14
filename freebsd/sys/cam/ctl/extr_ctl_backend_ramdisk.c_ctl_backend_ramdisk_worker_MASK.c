
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ctl_io {int io_hdr; } ;
struct ctl_be_ramdisk_lun {int queue_lock; int cont_queue; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3, int VAR_4)
{
 struct ctl_be_ramdisk_lun *VAR_5;
 union ctl_io *VAR_6;

 VAR_5 = (struct ctl_be_ramdisk_lun *)VAR_3;
 FUNC_5(&VAR_5->queue_lock);
 for (;;) {
  VAR_6 = (union ctl_io *)FUNC_1(&VAR_5->cont_queue);
  if (VAR_6 != ((void*)0)) {
   FUNC_2(&VAR_5->cont_queue, &VAR_6->io_hdr,
          VAR_1, VAR_2);
   FUNC_6(&VAR_5->queue_lock);
   if (FUNC_0(VAR_6)->flags & VAR_0)
    FUNC_3(VAR_6);
   else
    FUNC_4(VAR_6);
   FUNC_5(&VAR_5->queue_lock);
   continue;
  }





  break;
 }
 FUNC_6(&VAR_5->queue_lock);
}
