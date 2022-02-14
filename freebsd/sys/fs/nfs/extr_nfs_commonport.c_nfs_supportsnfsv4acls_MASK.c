
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct vnode*,int ,long*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_2(struct vnode *VAR_2)
{
 int VAR_3;
 long VAR_4;

 FUNC_0(VAR_2, "nfs supports nfsv4acls");

 if (VAR_1 == 0)
  return (0);
 VAR_3 = FUNC_1(VAR_2, VAR_0, &VAR_4);
 if (VAR_3 == 0 && VAR_4 != 0)
  return (1);
 return (0);
}
