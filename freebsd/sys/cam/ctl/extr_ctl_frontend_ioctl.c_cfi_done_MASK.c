
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_2__ io_hdr; } ;
struct ctl_fe_ioctl_params {int ioctl_mtx; int sem; int state; } ;
struct TYPE_3__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(union ctl_io *VAR_2)
{
 struct ctl_fe_ioctl_params *VAR_3;

 VAR_3 = (struct ctl_fe_ioctl_params *)
  VAR_2->io_hdr.ctl_private[VAR_1].ptr;

 FUNC_1(&VAR_3->ioctl_mtx);
 VAR_3->state = VAR_0;
 FUNC_0(&VAR_3->sem);
 FUNC_2(&VAR_3->ioctl_mtx);
}
