
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1(void)
{
 static int VAR_4 = 0;

 if (VAR_4)
  return;
 VAR_4 = 1;

 FUNC_0(&VAR_1, "newnfsd_mtx", ((void*)0), VAR_0);
 FUNC_0(&VAR_3, "nfs_state_mutex", ((void*)0), VAR_0);
 FUNC_0(&VAR_2, "nfs_clstate_mutex", ((void*)0), VAR_0);
}
