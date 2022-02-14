
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_be_ramdisk_softc {int lock; int num_luns; int lun_list; } ;
struct ctl_be_ramdisk_lun {int flags; struct ctl_be_ramdisk_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ctl_be_ramdisk_lun*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (void*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ctl_be_ramdisk_lun*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5)
{
 struct ctl_be_ramdisk_lun *VAR_6 = VAR_5;
 struct ctl_be_ramdisk_softc *VAR_7 = VAR_6->softc;

 FUNC_2(&VAR_7->lock);
 VAR_6->flags |= VAR_0;
 if (VAR_6->flags & VAR_1) {
  FUNC_4(VAR_6);
 } else {
  FUNC_0(&VAR_7->lun_list, VAR_6, VAR_3,
         VAR_4);
  VAR_7->num_luns--;
  FUNC_1(VAR_5, VAR_2);
 }
 FUNC_3(&VAR_7->lock);
}
