
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_long ;
struct TYPE_2__ {int uid; int gid; int cuid; int cgid; int mode; } ;
struct shmid_ds {TYPE_1__ shm_perm; int shm_ctime; int shm_dtime; int shm_atime; int shm_nattch; int shm_cpid; int shm_lpid; scalar_t__ shm_segsz; } ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct shmid_ds *VAR_0, mode_t VAR_1)
{
 uid_t VAR_2 = FUNC_3();
 gid_t VAR_3 = FUNC_2();

 FUNC_4("PERM: uid %d, gid %d, cuid %d, cgid %d, mode 0%o\n",
     VAR_0->shm_perm.uid, VAR_0->shm_perm.gid,
     VAR_0->shm_perm.cuid, VAR_0->shm_perm.cgid,
     VAR_0->shm_perm.mode & 0777);

 FUNC_4("segsz %lu, lpid %d, cpid %d, nattch %u\n",
     (u_long)VAR_0->shm_segsz, VAR_0->shm_lpid, VAR_0->shm_cpid,
     VAR_0->shm_nattch);

 FUNC_4("atime: %s", FUNC_1(&VAR_0->shm_atime));
 FUNC_4("dtime: %s", FUNC_1(&VAR_0->shm_dtime));
 FUNC_4("ctime: %s", FUNC_1(&VAR_0->shm_ctime));





 FUNC_0(VAR_0->shm_perm.uid == VAR_2 && VAR_0->shm_perm.cuid == VAR_2,
     "uid mismatch");

 FUNC_0(VAR_0->shm_perm.gid == VAR_3 && VAR_0->shm_perm.cgid == VAR_3,
     "gid mismatch");

 FUNC_0((VAR_0->shm_perm.mode & 0777) == VAR_1, "mode mismatch");
}
