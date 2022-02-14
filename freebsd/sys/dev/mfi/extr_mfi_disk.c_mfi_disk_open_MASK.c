
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_disk {int ld_flags; TYPE_1__* ld_controller; } ;
struct disk {struct mfi_disk* d_drv1; } ;
struct TYPE_2__ {int mfi_io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct disk *VAR_3)
{
 struct mfi_disk *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->d_drv1;
 FUNC_0(&VAR_4->ld_controller->mfi_io_lock);
 if (VAR_4->ld_flags & VAR_1)
  VAR_5 = VAR_0;
 else {
  VAR_4->ld_flags |= VAR_2;
  VAR_5 = 0;
 }
 FUNC_1(&VAR_4->ld_controller->mfi_io_lock);

 return (VAR_5);
}
