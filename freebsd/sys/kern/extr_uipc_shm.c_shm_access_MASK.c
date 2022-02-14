
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct shmfd {int shm_gid; int shm_uid; int shm_mode; } ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct ucred*,int *) ;

int
FUNC_3(struct shmfd *VAR_6, struct ucred *VAR_7, int VAR_8)
{
 accmode_t VAR_9;
 int VAR_10;

 VAR_9 = 0;
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_2;
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_4;
 FUNC_0(&VAR_5);
 VAR_10 = FUNC_2(VAR_3, VAR_6->shm_mode, VAR_6->shm_uid, VAR_6->shm_gid,
     VAR_9, VAR_7, ((void*)0));
 FUNC_1(&VAR_5);
 return (VAR_10);
}
