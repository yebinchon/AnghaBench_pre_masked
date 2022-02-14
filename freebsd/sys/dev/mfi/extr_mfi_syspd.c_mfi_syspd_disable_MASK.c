
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_system_pd {int pd_flags; int pd_dev; TYPE_1__* pd_controller; } ;
struct TYPE_2__ {scalar_t__ mfi_delete_busy_volumes; int mfi_io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(struct mfi_system_pd *VAR_4)
{

 FUNC_0(VAR_4->pd_dev, "syspd disable \n");
 FUNC_1(&VAR_4->pd_controller->mfi_io_lock, VAR_1);
 if (VAR_4->pd_flags & VAR_3) {
  if (VAR_4->pd_controller->mfi_delete_busy_volumes)
   return (0);
  FUNC_0(VAR_4->pd_dev,
      "Unable to delete busy syspd device\n");
  return (VAR_0);
 }
 VAR_4->pd_flags |= VAR_2;
 return (0);
}
