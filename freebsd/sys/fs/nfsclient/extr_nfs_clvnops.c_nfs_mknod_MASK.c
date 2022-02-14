
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_mknod_args {int a_vap; int a_cnp; int a_vpp; int a_dvp; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_mknod_args *VAR_0)
{
 return (FUNC_0(VAR_0->a_dvp, VAR_0->a_vpp, VAR_0->a_cnp, VAR_0->a_vap));
}
