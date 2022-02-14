
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmid_ds {int shm_ctime; int shm_dtime; int shm_atime; int shm_nattch; int shm_cpid; int shm_lpid; int shm_segsz; int shm_perm; } ;
struct l_shmid64_ds {int shm_ctime; int shm_dtime; int shm_atime; int shm_nattch; int shm_cpid; int shm_lpid; int shm_segsz; int shm_perm; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct l_shmid64_ds *VAR_0, struct shmid_ds *VAR_1)
{

 FUNC_0(&VAR_0->shm_perm, &VAR_1->shm_perm);
 VAR_1->shm_segsz = VAR_0->shm_segsz;
 VAR_1->shm_lpid = VAR_0->shm_lpid;
 VAR_1->shm_cpid = VAR_0->shm_cpid;
 VAR_1->shm_nattch = VAR_0->shm_nattch;
 VAR_1->shm_atime = VAR_0->shm_atime;
 VAR_1->shm_dtime = VAR_0->shm_dtime;
 VAR_1->shm_ctime = VAR_0->shm_ctime;
}
