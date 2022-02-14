
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; scalar_t__ seq; } ;
struct TYPE_4__ {TYPE_1__ shm_perm; } ;
struct shmid_kernel {TYPE_2__ u; } ;
struct prison {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct prison*,struct shmid_kernel*) ;
 int VAR_3 ;
 struct shmid_kernel* VAR_4 ;

__attribute__((used)) static struct shmid_kernel *
FUNC_3(struct prison *VAR_5, int VAR_6, bool VAR_7)
{
 struct shmid_kernel *VAR_8;
 int VAR_9;

 VAR_9 = VAR_7 ? FUNC_0(VAR_6) : VAR_6;
 if (VAR_9 < 0 || VAR_9 >= VAR_3)
  return (((void*)0));
 VAR_8 = &VAR_4[VAR_9];
 if ((VAR_8->u.shm_perm.mode & VAR_0) == 0 ||
     (!VAR_2 &&
     (VAR_8->u.shm_perm.mode & VAR_1) != 0) ||
     (VAR_7 && VAR_8->u.shm_perm.seq != FUNC_1(VAR_6)) ||
     FUNC_2(VAR_5, VAR_8) != 0)
  return (((void*)0));
 return (VAR_8);
}
