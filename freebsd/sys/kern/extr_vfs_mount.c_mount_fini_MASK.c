
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_mtx; int mnt_listmtx; int mnt_explock; int mnt_thread_in_ops_pcpu; int mnt_ref_pcpu; int mnt_lockref_pcpu; int mnt_writeopcount_pcpu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct mount *VAR_3;

 VAR_3 = (struct mount *)VAR_1;
 FUNC_2(VAR_0, VAR_3->mnt_writeopcount_pcpu);
 FUNC_2(VAR_0, VAR_3->mnt_lockref_pcpu);
 FUNC_2(VAR_0, VAR_3->mnt_ref_pcpu);
 FUNC_2(VAR_0, VAR_3->mnt_thread_in_ops_pcpu);
 FUNC_0(&VAR_3->mnt_explock);
 FUNC_1(&VAR_3->mnt_listmtx);
 FUNC_1(&VAR_3->mnt_mtx);
}
