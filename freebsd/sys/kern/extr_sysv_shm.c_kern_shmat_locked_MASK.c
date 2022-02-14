
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_offset_t ;
struct thread {int* td_retval; int td_ucred; struct proc* td_proc; } ;
struct shmmap_state {int shmid; int va; } ;
struct TYPE_5__ {int shm_segsz; int shm_nattch; int shm_atime; int shm_lpid; int shm_perm; } ;
struct shmid_kernel {TYPE_2__ u; int object; } ;
struct proc {int p_pid; TYPE_1__* p_vmspace; } ;
struct prison {int dummy; } ;
struct TYPE_6__ {int shmseg; } ;
struct TYPE_4__ {int vm_map; scalar_t__ vm_daddr; struct shmmap_state* vm_shm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 () ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct thread*,int *,int) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 (int ,struct shmid_kernel*,int) ;
 struct shmmap_state* FUNC_7 (int,int ,int ) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 struct prison* FUNC_10 (int ) ;
 struct shmid_kernel* FUNC_11 (struct prison*,int,int) ;
 TYPE_3__ VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (int *,int ,int ,int*,void*,int ,int,int ,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_23, int VAR_24, const void *VAR_25,
    int VAR_26)
{
 struct prison *VAR_27;
 struct proc *VAR_28 = VAR_23->td_proc;
 struct shmid_kernel *VAR_29;
 struct shmmap_state *VAR_30;
 vm_offset_t VAR_31;
 vm_prot_t VAR_32;
 vm_size_t VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;

 FUNC_0(VAR_24);
 FUNC_1(VAR_26);

 FUNC_3();
 VAR_27 = FUNC_10(VAR_23->td_ucred);
 if (VAR_27 == ((void*)0))
  return (VAR_3);
 VAR_30 = VAR_28->p_vmspace->vm_shm;
 if (VAR_30 == ((void*)0)) {
  VAR_30 = FUNC_7(VAR_21.shmseg * sizeof(struct shmmap_state),
      VAR_10, VAR_11);
  for (VAR_37 = 0; VAR_37 < VAR_21.shmseg; VAR_37++)
   VAR_30[VAR_37].shmid = -1;
  FUNC_2(VAR_28->p_vmspace->vm_shm == ((void*)0), ("raced"));
  VAR_28->p_vmspace->vm_shm = VAR_30;
 }
 VAR_29 = FUNC_11(VAR_27, VAR_24, 1);
 if (VAR_29 == ((void*)0))
  return (VAR_0);
 VAR_35 = FUNC_4(VAR_23, &VAR_29->u.shm_perm,
     (VAR_26 & VAR_14) ? VAR_4 : VAR_4|VAR_5);
 if (VAR_35 != 0)
  return (VAR_35);





 for (VAR_37 = 0; VAR_37 < VAR_21.shmseg; VAR_37++) {
  if (VAR_30->shmid == -1)
   break;
  VAR_30++;
 }
 if (VAR_37 >= VAR_21.shmseg)
  return (VAR_1);
 VAR_33 = FUNC_8(VAR_29->u.shm_segsz);
 VAR_32 = VAR_19;
 VAR_34 = VAR_7 | VAR_8;
 if ((VAR_26 & VAR_14) == 0)
  VAR_32 |= VAR_20;
 if (VAR_25 != ((void*)0)) {
  if ((VAR_26 & VAR_16) != 0)
   VAR_31 = FUNC_9((vm_offset_t)VAR_25, VAR_13);
  else if (((vm_offset_t)VAR_25 & (VAR_13-1)) == 0)
   VAR_31 = (vm_offset_t)VAR_25;
  else
   return (VAR_0);
  if ((VAR_26 & VAR_15) != 0)
   VAR_34 |= VAR_9;
  VAR_36 = VAR_17;
 } else {




  VAR_31 = FUNC_8((vm_offset_t)VAR_28->p_vmspace->vm_daddr +
      FUNC_5(VAR_23, VAR_12));
  VAR_36 = VAR_18;
 }

 FUNC_14(VAR_29->object);
 VAR_38 = FUNC_12(&VAR_28->p_vmspace->vm_map, VAR_29->object, 0, &VAR_31,
     VAR_33, 0, VAR_36, VAR_32, VAR_32, VAR_34);
 if (VAR_38 != VAR_6) {
  FUNC_13(VAR_29->object);
  return (VAR_2);
 }

 VAR_30->va = VAR_31;
 VAR_30->shmid = VAR_24;
 VAR_29->u.shm_lpid = VAR_28->p_pid;
 VAR_29->u.shm_atime = VAR_22;
 VAR_29->u.shm_nattch++;
 VAR_23->td_retval[0] = VAR_31;
 return (VAR_35);
}
