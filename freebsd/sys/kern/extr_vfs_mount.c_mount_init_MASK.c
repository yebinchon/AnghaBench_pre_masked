
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_vfs_ops; int * mnt_rootvnode; scalar_t__ mnt_ref; void* mnt_writeopcount_pcpu; void* mnt_lockref_pcpu; void* mnt_ref_pcpu; void* mnt_thread_in_ops_pcpu; int mnt_explock; int mnt_listmtx; int mnt_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int VAR_4 ;
 void* FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5, int VAR_6, int VAR_7)
{
 struct mount *VAR_8;

 VAR_8 = (struct mount *)VAR_5;
 FUNC_1(&VAR_8->mnt_mtx, "struct mount mtx", ((void*)0), VAR_0);
 FUNC_1(&VAR_8->mnt_listmtx, "struct mount vlist mtx", ((void*)0), VAR_0);
 FUNC_0(&VAR_8->mnt_explock, VAR_3, "explock", 0, 0);
 VAR_8->mnt_thread_in_ops_pcpu = FUNC_2(VAR_4,
     VAR_1 | VAR_2);
 VAR_8->mnt_ref_pcpu = FUNC_2(VAR_4,
     VAR_1 | VAR_2);
 VAR_8->mnt_lockref_pcpu = FUNC_2(VAR_4,
     VAR_1 | VAR_2);
 VAR_8->mnt_writeopcount_pcpu = FUNC_2(VAR_4,
     VAR_1 | VAR_2);
 VAR_8->mnt_ref = 0;
 VAR_8->mnt_vfs_ops = 1;
 VAR_8->mnt_rootvnode = ((void*)0);
 return (0);
}
