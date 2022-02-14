
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_lun {int flags; int lun_lock; int ooa_queue; } ;
struct ctl_be_lun {scalar_t__ ctl_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ctl_lun*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct ctl_be_lun *VAR_2)
{
 struct ctl_lun *VAR_3;

 VAR_3 = (struct ctl_lun *)VAR_2->ctl_lun;

 FUNC_2(&VAR_3->lun_lock);




 if ((VAR_3->flags & VAR_0) == 0) {
  FUNC_3(&VAR_3->lun_lock);
  return (-1);
 }



 VAR_3->flags |= VAR_1;






 if (FUNC_0(&VAR_3->ooa_queue)) {
  FUNC_3(&VAR_3->lun_lock);
  FUNC_1(VAR_3);
 } else
  FUNC_3(&VAR_3->lun_lock);

 return (0);
}
