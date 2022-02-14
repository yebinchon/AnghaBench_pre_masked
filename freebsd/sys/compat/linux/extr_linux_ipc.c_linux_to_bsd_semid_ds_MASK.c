
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semid_ds {int sem_nsems; int sem_ctime; int sem_otime; int sem_perm; } ;
struct l_semid64_ds {int sem_nsems; int sem_ctime; int sem_otime; int sem_perm; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct l_semid64_ds *VAR_0, struct semid_ds *VAR_1)
{

 FUNC_0(&VAR_0->sem_perm, &VAR_1->sem_perm);
 VAR_1->sem_otime = VAR_0->sem_otime;
 VAR_1->sem_ctime = VAR_0->sem_ctime;
 VAR_1->sem_nsems = VAR_0->sem_nsems;
}
