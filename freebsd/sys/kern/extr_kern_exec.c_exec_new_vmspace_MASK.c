
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ u_long ;
struct TYPE_11__ {int flags; } ;
struct vmspace {int vm_refcnt; int vm_ssize; char* vm_maxsaddr; TYPE_1__ vm_map; } ;
struct sysentvec {scalar_t__ sv_minuser; scalar_t__ sv_maxuser; scalar_t__* sv_maxssiz; scalar_t__ sv_usrstack; scalar_t__ sv_stackprot; int sv_shared_page_len; int sv_shared_page_base; int * sv_shared_page_obj; } ;
struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;
struct proc {struct vmspace* p_vmspace; } ;
struct image_params {int vmspace_destroyed; scalar_t__ stack_sz; scalar_t__ eff_stack_sz; scalar_t__ stack_prot; int map_flags; struct sysentvec* sysent; struct proc* proc; } ;


 int FUNC_0 (int ,struct proc*,struct image_params*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct proc*,TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_5 (int ,int ,struct rlimit*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct proc*,int ,struct rlimit*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (struct vmspace*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int *,int ,int ,int ,int,int,int) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (TYPE_1__*,scalar_t__,int ,scalar_t__,int ,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct proc*,scalar_t__,scalar_t__) ;
 int FUNC_23 (struct vmspace*) ;

int
FUNC_24(struct image_params *VAR_18, struct sysentvec *VAR_19)
{
 int VAR_20;
 struct proc *VAR_21 = VAR_18->proc;
 struct vmspace *VAR_22 = VAR_21->p_vmspace;
 vm_object_t VAR_23;
 struct rlimit VAR_24;
 vm_offset_t VAR_25, VAR_26;
 vm_map_t VAR_27;
 u_long VAR_28;

 VAR_18->vmspace_destroyed = 1;
 VAR_18->sysent = VAR_19;


 FUNC_0(VAR_16, VAR_21, VAR_18);






 VAR_27 = &VAR_22->vm_map;
 if (VAR_14)
  VAR_25 = VAR_19->sv_minuser;
 else
  VAR_25 = FUNC_1(VAR_19->sv_minuser, VAR_8);
 if (VAR_22->vm_refcnt == 1 && FUNC_14(VAR_27) == VAR_25 &&
     FUNC_13(VAR_27) == VAR_19->sv_maxuser &&
     FUNC_4(VAR_21, VAR_27)) {
  FUNC_9(VAR_22);
  FUNC_8(FUNC_23(VAR_22));
  FUNC_16(VAR_27, FUNC_14(VAR_27), FUNC_13(VAR_27));




  FUNC_12(VAR_27);
  FUNC_15(VAR_27, 0, VAR_6 | VAR_2 |
      VAR_3);
  FUNC_18(VAR_27);
 } else {
  VAR_20 = FUNC_22(VAR_21, VAR_25, VAR_19->sv_maxuser);
  if (VAR_20)
   return (VAR_20);
  VAR_22 = VAR_21->p_vmspace;
  VAR_27 = &VAR_22->vm_map;
 }
 VAR_27->flags |= VAR_18->map_flags;


 VAR_23 = VAR_19->sv_shared_page_obj;
 if (VAR_23 != ((void*)0)) {
  FUNC_21(VAR_23);
  VAR_20 = FUNC_11(VAR_27, VAR_23, 0,
      VAR_19->sv_shared_page_base, VAR_19->sv_shared_page_len,
      VAR_12 | VAR_11,
      VAR_12 | VAR_11,
      VAR_4 | VAR_1);
  if (VAR_20 != VAR_0) {
   FUNC_20(VAR_23);
   return (FUNC_19(VAR_20));
  }
 }


 if (VAR_18->stack_sz != 0) {
  VAR_28 = FUNC_10(VAR_18->stack_sz);
  FUNC_2(VAR_21);
  FUNC_7(VAR_21, VAR_9, &VAR_24);
  FUNC_3(VAR_21);
  if (VAR_28 > VAR_24.rlim_max)
   VAR_28 = VAR_24.rlim_max;
  if (VAR_28 > VAR_24.rlim_cur) {
   VAR_24.rlim_cur = VAR_28;
   FUNC_5(VAR_13, VAR_9, &VAR_24);
  }
 } else if (VAR_19->sv_maxssiz != ((void*)0)) {
  VAR_28 = *VAR_19->sv_maxssiz;
 } else {
  VAR_28 = VAR_15;
 }
 VAR_18->eff_stack_sz = FUNC_6(VAR_13, VAR_9);
 if (VAR_28 < VAR_18->eff_stack_sz)
  VAR_18->eff_stack_sz = VAR_28;
 VAR_26 = VAR_19->sv_usrstack - VAR_28;
 VAR_20 = FUNC_17(VAR_27, VAR_26, (vm_size_t)VAR_28,
     VAR_23 != ((void*)0) && VAR_18->stack_prot != 0 ? VAR_18->stack_prot :
     VAR_19->sv_stackprot, VAR_10, VAR_5);
 if (VAR_20 != VAR_0)
  return (FUNC_19(VAR_20));





 VAR_22->vm_ssize = VAR_17 >> VAR_7;
 VAR_22->vm_maxsaddr = (char *)VAR_26;

 return (0);
}
