
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int * td_retval; int td_ucred; } ;
struct TYPE_2__ {scalar_t__ shm_segsz; int shm_perm; } ;
struct shmid_kernel {TYPE_1__ u; } ;
struct shmget_args {int shmflg; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct shmid_kernel*,int) ;
 int VAR_4 ;
 struct shmid_kernel* VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_6, struct shmget_args *VAR_7, int VAR_8,
    int VAR_9)
{
 struct shmid_kernel *VAR_10;




 FUNC_2();
 FUNC_1(VAR_9 >= 0 && VAR_9 < VAR_4,
     ("segnum %d shmalloced %d", VAR_9, VAR_4));
 VAR_10 = &VAR_5[VAR_9];
 if ((VAR_7->shmflg & (VAR_2 | VAR_3)) == (VAR_2 | VAR_3))
  return (VAR_0);





 if (VAR_7->size != 0 && VAR_7->size > VAR_10->u.shm_segsz)
  return (VAR_1);
 VAR_6->td_retval[0] = FUNC_0(VAR_9, VAR_10->u.shm_perm);
 return (0);
}
