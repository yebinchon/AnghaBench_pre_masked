
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct ucred {scalar_t__ cr_uid; } ;
struct thread {int dummy; } ;
struct shmfd {scalar_t__ shm_uid; scalar_t__ shm_gid; } ;
struct file {struct shmfd* f_data; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct ucred*) ;
 int FUNC_1 (struct ucred*,struct shmfd*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ucred*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_2, uid_t VAR_3, gid_t VAR_4, struct ucred *VAR_5,
    struct thread *VAR_6)
{
 struct shmfd *VAR_7;
 int VAR_8;

 VAR_8 = 0;
 VAR_7 = VAR_2->f_data;
 FUNC_2(&VAR_1);





 if (VAR_3 == (uid_t)-1)
  VAR_3 = VAR_7->shm_uid;
 if (VAR_4 == (gid_t)-1)
                 VAR_4 = VAR_7->shm_gid;
 if (((VAR_3 != VAR_7->shm_uid && VAR_3 != VAR_5->cr_uid) ||
     (VAR_4 != VAR_7->shm_gid && !FUNC_0(VAR_4, VAR_5))) &&
     (VAR_8 = FUNC_4(VAR_5, VAR_0)))
  goto out;
 VAR_7->shm_uid = VAR_3;
 VAR_7->shm_gid = VAR_4;
out:
 FUNC_3(&VAR_1);
 return (VAR_8);
}
