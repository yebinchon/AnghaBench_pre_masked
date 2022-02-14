
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;


 struct vfsmount* FUNC_0 (int) ;
 struct vfsmount* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct vfsmount**,int *) ;

struct vfsmount *FUNC_2(void)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2, &VAR_0, &VAR_1);
 if (VAR_3 != 0)
  return FUNC_0(VAR_3);
 return VAR_0;
}
