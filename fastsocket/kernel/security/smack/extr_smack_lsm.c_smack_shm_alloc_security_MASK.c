
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int security; } ;
struct shmid_kernel {struct kern_ipc_perm shm_perm; } ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct shmid_kernel *VAR_0)
{
 struct kern_ipc_perm *VAR_1 = &VAR_0->shm_perm;

 VAR_1->security = FUNC_0();
 return 0;
}
