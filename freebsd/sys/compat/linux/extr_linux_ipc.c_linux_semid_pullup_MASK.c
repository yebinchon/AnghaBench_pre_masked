
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int gid; int uid; } ;
struct l_semid_ds {TYPE_1__ sem_perm; } ;
struct l_semid64_ds {TYPE_1__ sem_perm; } ;
typedef int linux_semid ;
typedef scalar_t__ l_int ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct l_semid_ds*,int) ;
 int FUNC_2 (int ,struct l_semid_ds*,int) ;

__attribute__((used)) static int
FUNC_3(l_int VAR_2, struct l_semid64_ds *VAR_3, caddr_t VAR_4)
{
 struct l_semid_ds VAR_5;
 int VAR_6;

 if (VAR_2 == VAR_0 || FUNC_0(VAR_1))
  return (FUNC_2(VAR_4, VAR_3, sizeof(*VAR_3)));
 else {
  VAR_6 = FUNC_2(VAR_4, &VAR_5, sizeof(VAR_5));
  if (VAR_6 != 0)
   return (VAR_6);

  FUNC_1(VAR_3, sizeof(*VAR_3));

  VAR_3->sem_perm.uid = VAR_5.sem_perm.uid;
  VAR_3->sem_perm.gid = VAR_5.sem_perm.gid;
  VAR_3->sem_perm.mode = VAR_5.sem_perm.mode;
  return (0);
 }
}
