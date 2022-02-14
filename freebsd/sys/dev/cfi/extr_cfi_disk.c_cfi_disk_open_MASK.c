
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {struct cfi_disk_softc* d_drv1; } ;
struct cfi_disk_softc {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct disk *VAR_1)
{
 struct cfi_disk_softc *VAR_2 = VAR_1->d_drv1;


 VAR_2->flags |= VAR_0;
 return 0;
}
