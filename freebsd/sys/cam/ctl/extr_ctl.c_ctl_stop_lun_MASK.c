
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_lun {int lun_lock; int flags; } ;
struct ctl_be_lun {scalar_t__ ctl_lun; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct ctl_be_lun *VAR_1)
{
 struct ctl_lun *VAR_2 = (struct ctl_lun *)VAR_1->ctl_lun;

 FUNC_0(&VAR_2->lun_lock);
 VAR_2->flags |= VAR_0;
 FUNC_1(&VAR_2->lun_lock);
 return (0);
}
