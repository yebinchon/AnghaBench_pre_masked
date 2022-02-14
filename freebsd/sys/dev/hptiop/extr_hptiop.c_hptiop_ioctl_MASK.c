
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct hpt_iop_ioctl_param {int dummy; } ;
struct hpt_iop_hba {TYPE_1__* ops; } ;
typedef int ioctl_thread_t ;
typedef int ioctl_dev_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int (* do_ioctl ) (struct hpt_iop_hba*,struct hpt_iop_ioctl_param*) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 struct hpt_iop_hba* FUNC_0 (int ) ;
 int FUNC_1 (struct hpt_iop_hba*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hpt_iop_hba*,struct hpt_iop_ioctl_param*) ;

__attribute__((used)) static int FUNC_5(ioctl_dev_t VAR_2, u_long VAR_3, caddr_t VAR_4,
     int VAR_5, ioctl_thread_t VAR_6)
{
 int VAR_7 = VAR_0;
 struct hpt_iop_hba *VAR_8 = FUNC_0(VAR_2);

 FUNC_2(&VAR_1);

 switch (VAR_3) {
 case 129:
  VAR_7 = VAR_8->ops->do_ioctl(VAR_8,
    (struct hpt_iop_ioctl_param *)VAR_4);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_8);
  break;
 }

 FUNC_3(&VAR_1);

 return VAR_7;
}
