
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_accessx_args {scalar_t__ a_accmode; int a_td; int a_cred; int a_vp; } ;
typedef scalar_t__ accmode_t ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__*) ;

int
FUNC_2(struct vop_accessx_args *VAR_0)
{
 int VAR_1;
 accmode_t VAR_2 = VAR_0->a_accmode;

 VAR_1 = FUNC_1(&VAR_2);
 if (VAR_1 != 0)
  return (VAR_1);

 if (VAR_2 == 0)
  return (0);

 return (FUNC_0(VAR_0->a_vp, VAR_2, VAR_0->a_cred, VAR_0->a_td));
}
