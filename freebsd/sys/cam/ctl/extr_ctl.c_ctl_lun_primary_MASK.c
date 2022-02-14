
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_lun {int lun_lock; int flags; } ;
struct ctl_be_lun {scalar_t__ ctl_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ctl_lun*,int,int ) ;
 int FUNC_1 (struct ctl_lun*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct ctl_be_lun *VAR_2)
{
 struct ctl_lun *VAR_3 = (struct ctl_lun *)VAR_2->ctl_lun;

 FUNC_2(&VAR_3->lun_lock);
 VAR_3->flags |= VAR_0;
 FUNC_0(VAR_3, -1, VAR_1);
 FUNC_3(&VAR_3->lun_lock);
 FUNC_1(VAR_3);
 return (0);
}
