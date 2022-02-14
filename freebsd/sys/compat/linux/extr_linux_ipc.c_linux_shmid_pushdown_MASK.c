
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_shmid_ds {scalar_t__ shm_segsz; scalar_t__ shm_atime; scalar_t__ shm_dtime; scalar_t__ shm_ctime; scalar_t__ shm_cpid; scalar_t__ shm_lpid; scalar_t__ shm_nattch; int shm_perm; } ;
struct l_shmid64_ds {scalar_t__ shm_segsz; scalar_t__ shm_atime; scalar_t__ shm_dtime; scalar_t__ shm_ctime; scalar_t__ shm_cpid; scalar_t__ shm_lpid; scalar_t__ shm_nattch; int shm_perm; } ;
typedef int linux_shmid ;
typedef scalar_t__ l_int ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct l_shmid_ds*,int) ;
 int FUNC_2 (struct l_shmid_ds*,int ,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(l_int VAR_3, struct l_shmid64_ds *VAR_4, caddr_t VAR_5)
{
 struct l_shmid_ds VAR_6;
 int VAR_7;

 if (VAR_3 == VAR_1 || FUNC_0(VAR_2))
  return (FUNC_2(VAR_4, VAR_5, sizeof(*VAR_4)));
 else {
  FUNC_1(&VAR_6, sizeof(VAR_6));

  VAR_7 = FUNC_3(&VAR_4->shm_perm,
      &VAR_6.shm_perm);
  if (VAR_7 != 0)
   return (VAR_7);

  VAR_6.shm_segsz = VAR_4->shm_segsz;
  VAR_6.shm_atime = VAR_4->shm_atime;
  VAR_6.shm_dtime = VAR_4->shm_dtime;
  VAR_6.shm_ctime = VAR_4->shm_ctime;
  VAR_6.shm_cpid = VAR_4->shm_cpid;
  VAR_6.shm_lpid = VAR_4->shm_lpid;
  VAR_6.shm_nattch = VAR_4->shm_nattch;


  if (VAR_6.shm_segsz != VAR_4->shm_segsz ||
      VAR_6.shm_atime != VAR_4->shm_atime ||
      VAR_6.shm_dtime != VAR_4->shm_dtime ||
      VAR_6.shm_ctime != VAR_4->shm_ctime ||
      VAR_6.shm_cpid != VAR_4->shm_cpid ||
      VAR_6.shm_lpid != VAR_4->shm_lpid ||
      VAR_6.shm_nattch != VAR_4->shm_nattch)
   return (VAR_0);

  return (FUNC_2(&VAR_6, VAR_5, sizeof(VAR_6)));
 }
}
