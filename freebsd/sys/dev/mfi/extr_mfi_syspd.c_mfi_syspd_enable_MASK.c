
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_system_pd {int pd_flags; TYPE_1__* pd_controller; int pd_dev; } ;
struct TYPE_2__ {int mfi_io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct mfi_system_pd *VAR_2)
{

 FUNC_0(VAR_2->pd_dev, "syspd enable \n");
 FUNC_1(&VAR_2->pd_controller->mfi_io_lock, VAR_0);
 VAR_2->pd_flags &= ~VAR_1;
}
