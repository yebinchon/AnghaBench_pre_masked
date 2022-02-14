
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
union ctl_io {TYPE_2__ io_hdr; } ;
struct ctl_lun {int lun_lock; TYPE_1__* be_lun; } ;
struct TYPE_3__ {scalar_t__ serseq; } ;


 int VAR_0 ;
 struct ctl_lun* FUNC_0 (union ctl_io*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ctl_lun*,union ctl_io*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(union ctl_io *VAR_3)
{
 struct ctl_lun *VAR_4 = FUNC_0(VAR_3);;

 if (VAR_4->be_lun == ((void*)0) ||
     VAR_4->be_lun->serseq == VAR_1)
  return;
 FUNC_2(&VAR_4->lun_lock);
 VAR_3->io_hdr.flags |= VAR_0;
 FUNC_1(VAR_4, VAR_3, VAR_2);
 FUNC_3(&VAR_4->lun_lock);
}
