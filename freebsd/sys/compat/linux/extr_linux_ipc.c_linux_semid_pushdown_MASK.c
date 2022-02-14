
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_semid_ds {scalar_t__ sem_otime; scalar_t__ sem_ctime; scalar_t__ sem_nsems; int sem_perm; } ;
struct l_semid64_ds {scalar_t__ sem_otime; scalar_t__ sem_ctime; scalar_t__ sem_nsems; int sem_perm; } ;
typedef int linux_semid ;
typedef scalar_t__ l_int ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct l_semid_ds*,int) ;
 int FUNC_2 (struct l_semid_ds*,int ,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(l_int VAR_3, struct l_semid64_ds *VAR_4, caddr_t VAR_5)
{
 struct l_semid_ds VAR_6;
 int VAR_7;

 if (VAR_3 == VAR_1 || FUNC_0(VAR_2))
  return (FUNC_2(VAR_4, VAR_5, sizeof(*VAR_4)));
 else {
  FUNC_1(&VAR_6, sizeof(VAR_6));

  VAR_7 = FUNC_3(&VAR_4->sem_perm,
      &VAR_6.sem_perm);
  if (VAR_7 != 0)
   return (VAR_7);

  VAR_6.sem_otime = VAR_4->sem_otime;
  VAR_6.sem_ctime = VAR_4->sem_ctime;
  VAR_6.sem_nsems = VAR_4->sem_nsems;


  if (VAR_6.sem_otime != VAR_4->sem_otime ||
      VAR_6.sem_ctime != VAR_4->sem_ctime ||
      VAR_6.sem_nsems != VAR_4->sem_nsems)
   return (VAR_0);

  return (FUNC_2(&VAR_6, VAR_5, sizeof(VAR_6)));
 }
}
