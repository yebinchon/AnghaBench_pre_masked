
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_create_args {TYPE_2__* a_cnp; int * a_vpp; int a_dvp; TYPE_1__* a_vap; } ;
struct TYPE_5__ {int cn_flags; } ;
struct TYPE_4__ {int va_mode; int va_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(struct vop_create_args *VAR_1)
{
 int VAR_2;

 VAR_2 =
     FUNC_2(FUNC_0(VAR_1->a_vap->va_type, VAR_1->a_vap->va_mode),
     VAR_1->a_dvp, VAR_1->a_vpp, VAR_1->a_cnp);
 if (VAR_2 != 0)
  return (VAR_2);
 if ((VAR_1->a_cnp->cn_flags & VAR_0) != 0)
  FUNC_1(VAR_1->a_dvp, *VAR_1->a_vpp, VAR_1->a_cnp);
 return (0);
}
