
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_be_ramdisk_softc {int lun_list; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctl_be_ramdisk_softc*,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 struct ctl_be_ramdisk_softc VAR_1 ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct ctl_be_ramdisk_softc *VAR_2 = &VAR_1;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_2(&VAR_2->lock, "ctlramdisk", ((void*)0), VAR_0);
 FUNC_0(&VAR_2->lun_list);
 return (0);
}
