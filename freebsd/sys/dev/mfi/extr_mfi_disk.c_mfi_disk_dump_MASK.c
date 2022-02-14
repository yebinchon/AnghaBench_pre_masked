
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct mfi_softc {int dummy; } ;
struct mfi_disk {int ld_id; struct mfi_softc* ld_controller; } ;
struct disk {struct mfi_disk* d_drv1; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (struct mfi_softc*,int ,int,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, void *VAR_2, vm_offset_t VAR_3, off_t VAR_4, size_t VAR_5)
{
 struct mfi_disk *VAR_6;
 struct mfi_softc *VAR_7;
 struct disk *VAR_8;
 int VAR_9;

 VAR_8 = VAR_1;
 VAR_6 = VAR_8->d_drv1;
 VAR_7 = VAR_6->ld_controller;

 if (VAR_5 > 0) {
  if ((VAR_9 = FUNC_0(VAR_7, VAR_6->ld_id, VAR_4 /
      VAR_0, VAR_2, VAR_5)) != 0)
   return (VAR_9);
 } else {

 }

 return (0);
}
