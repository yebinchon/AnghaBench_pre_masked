
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_disk {TYPE_1__* ld_controller; int ld_flags; } ;
struct disk {struct mfi_disk* d_drv1; } ;
struct TYPE_2__ {int mfi_io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct disk *VAR_1)
{
 struct mfi_disk *VAR_2;

 VAR_2 = VAR_1->d_drv1;
 FUNC_0(&VAR_2->ld_controller->mfi_io_lock);
 VAR_2->ld_flags &= ~VAR_0;
 FUNC_1(&VAR_2->ld_controller->mfi_io_lock);

 return (0);
}
