
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct thread {int td_ucred; struct proc* td_proc; } ;
struct shmmap_state {int shmid; scalar_t__ va; } ;
struct proc {TYPE_2__* p_vmspace; } ;
struct TYPE_4__ {struct shmmap_state* vm_shm; } ;
struct TYPE_3__ {int shmseg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*,struct shmmap_state*) ;
 int * FUNC_5 (int ) ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_4, const void *VAR_5)
{
 struct proc *VAR_6 = VAR_4->td_proc;
 struct shmmap_state *VAR_7;



 int VAR_8;

 FUNC_2();
 if (FUNC_5(VAR_4->td_ucred) == ((void*)0))
  return (VAR_1);
 VAR_7 = VAR_6->p_vmspace->vm_shm;
  if (VAR_7 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_7->shmid);
 for (VAR_8 = 0; VAR_8 < VAR_2.shmseg; VAR_8++, VAR_7++) {
  if (VAR_7->shmid != -1 &&
      VAR_7->va == (vm_offset_t)VAR_5) {
   break;
  }
 }
 if (VAR_8 == VAR_2.shmseg)
  return (VAR_0);






 return (FUNC_4(VAR_6->p_vmspace, VAR_7));
}
