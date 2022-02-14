
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_ioctl_args {int a_command; int a_cred; scalar_t__ a_data; int a_vp; } ;
typedef int off_t ;


 int VAR_0 ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_ioctl_args *VAR_1)
{

 switch (VAR_1->a_command) {
 case 129:
 case 128:
  return (FUNC_0(VAR_1->a_vp, VAR_1->a_command,
      (off_t *)VAR_1->a_data, VAR_1->a_cred));
 default:
  return (VAR_0);
 }
}
