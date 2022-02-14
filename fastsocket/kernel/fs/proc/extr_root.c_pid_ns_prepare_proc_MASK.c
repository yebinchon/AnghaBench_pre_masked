
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct pid_namespace {struct vfsmount* proc_mnt; } ;


 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 struct vfsmount* FUNC_2 (int *,struct pid_namespace*) ;
 int VAR_0 ;

int FUNC_3(struct pid_namespace *VAR_1)
{
 struct vfsmount *VAR_2;

 VAR_2 = FUNC_2(&VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->proc_mnt = VAR_2;
 return 0;
}
