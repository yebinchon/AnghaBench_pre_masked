
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_disk {int ld_flags; int ld_info; TYPE_1__* ld_controller; TYPE_2__* ld_disk; } ;
typedef int device_t ;
struct TYPE_4__ {int d_flags; } ;
struct TYPE_3__ {int mfi_io_lock; int mfi_ld_tqh; scalar_t__ mfi_detaching; scalar_t__ mfi_keep_deleted_volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct mfi_disk*,int ) ;
 struct mfi_disk* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5)
{
 struct mfi_disk *VAR_6;

 VAR_6 = FUNC_1(VAR_5);

 FUNC_4(&VAR_6->ld_controller->mfi_io_lock);
 if (((VAR_6->ld_disk->d_flags & VAR_0) ||
     (VAR_6->ld_flags & VAR_2)) &&
     (VAR_6->ld_controller->mfi_keep_deleted_volumes ||
     VAR_6->ld_controller->mfi_detaching)) {
  FUNC_5(&VAR_6->ld_controller->mfi_io_lock);
  return (VAR_1);
 }
 FUNC_5(&VAR_6->ld_controller->mfi_io_lock);

 FUNC_2(VAR_6->ld_disk);
 FUNC_4(&VAR_6->ld_controller->mfi_io_lock);
 FUNC_0(&VAR_6->ld_controller->mfi_ld_tqh, VAR_6, VAR_4);
 FUNC_5(&VAR_6->ld_controller->mfi_io_lock);
 FUNC_3(VAR_6->ld_info, VAR_3);
 return (0);
}
