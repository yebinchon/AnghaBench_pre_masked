
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct make_dev_args {int mda_flags; int mda_mode; struct evdev_dev* mda_si_drv1; int mda_gid; int mda_uid; int * mda_devsw; } ;
struct evdev_dev {int ev_unit; int ev_cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct make_dev_args*) ;
 int FUNC_1 (struct make_dev_args*,int *,char*,int) ;

int
FUNC_2(struct evdev_dev *VAR_6)
{
 struct make_dev_args VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_0(&VAR_7);
 VAR_7.mda_flags = VAR_3 | VAR_2;
 VAR_7.mda_devsw = &VAR_5;
 VAR_7.mda_uid = VAR_4;
 VAR_7.mda_gid = VAR_1;
 VAR_7.mda_mode = 0600;
 VAR_7.mda_si_drv1 = VAR_6;


 while ((VAR_8 = FUNC_1(&VAR_7, &VAR_6->ev_cdev, "input/event%d", VAR_9))
     == VAR_0)
  VAR_9++;

 if (VAR_8 == 0)
  VAR_6->ev_unit = VAR_9;

 return (VAR_8);
}
