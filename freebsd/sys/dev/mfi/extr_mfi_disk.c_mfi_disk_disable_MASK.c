
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_disk {int ld_flags; int ld_dev; TYPE_1__* ld_controller; } ;
struct TYPE_2__ {scalar_t__ mfi_delete_busy_volumes; int mfi_io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(struct mfi_disk *VAR_4)
{

 FUNC_1(&VAR_4->ld_controller->mfi_io_lock, VAR_1);
 if (VAR_4->ld_flags & VAR_3) {
  if (VAR_4->ld_controller->mfi_delete_busy_volumes)
   return (0);
  FUNC_0(VAR_4->ld_dev, "Unable to delete busy ld device\n");
  return (VAR_0);
 }
 VAR_4->ld_flags |= VAR_2;
 return (0);
}
