
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_disk {int ld_flags; TYPE_1__* ld_controller; } ;
struct TYPE_2__ {int mfi_io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct mfi_disk *VAR_2)
{

 FUNC_0(&VAR_2->ld_controller->mfi_io_lock, VAR_0);
 VAR_2->ld_flags &= ~VAR_1;
}
