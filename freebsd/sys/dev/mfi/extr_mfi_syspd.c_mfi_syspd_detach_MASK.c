
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_system_pd {int pd_flags; int pd_info; TYPE_1__* pd_controller; TYPE_2__* pd_disk; } ;
typedef int device_t ;
struct TYPE_4__ {int d_flags; } ;
struct TYPE_3__ {int mfi_io_lock; int mfi_syspd_tqh; scalar_t__ mfi_detaching; scalar_t__ mfi_keep_deleted_volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct mfi_system_pd*,int ) ;
 struct mfi_system_pd* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct mfi_system_pd *VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 FUNC_2(VAR_5, "Detaching syspd\n");
 FUNC_5(&VAR_6->pd_controller->mfi_io_lock);
 if (((VAR_6->pd_disk->d_flags & VAR_0) ||
     (VAR_6->pd_flags & VAR_2)) &&
     (VAR_6->pd_controller->mfi_keep_deleted_volumes ||
     VAR_6->pd_controller->mfi_detaching)) {
  FUNC_6(&VAR_6->pd_controller->mfi_io_lock);
  FUNC_2(VAR_5, "Cant detach syspd\n");
  return (VAR_1);
 }
 FUNC_6(&VAR_6->pd_controller->mfi_io_lock);

 FUNC_3(VAR_6->pd_disk);
 FUNC_5(&VAR_6->pd_controller->mfi_io_lock);
 FUNC_0(&VAR_6->pd_controller->mfi_syspd_tqh, VAR_6, VAR_4);
 FUNC_6(&VAR_6->pd_controller->mfi_io_lock);
 FUNC_4(VAR_6->pd_info, VAR_3);
 return (0);
}
