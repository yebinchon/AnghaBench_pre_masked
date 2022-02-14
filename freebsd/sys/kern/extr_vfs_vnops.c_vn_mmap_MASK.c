
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
typedef int vm_map_t ;
struct vnode {struct mount* v_mount; } ;
struct thread {int dummy; } ;
struct pmckern_map_in {uintptr_t pm_address; struct vnode* pm_file; } ;
struct mount {int mnt_flag; } ;
struct file {int f_flag; struct vnode* f_vnode; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct thread*,int ,void*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__,int,int,int,int ,scalar_t__,scalar_t__,struct thread*) ;
 int FUNC_3 (struct thread*,scalar_t__,int,int*,int*,struct vnode*,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

int
FUNC_6(struct file *VAR_15, vm_map_t VAR_16, vm_offset_t *VAR_17, vm_size_t VAR_18,
    vm_prot_t VAR_19, vm_prot_t VAR_20, int VAR_21, vm_ooffset_t VAR_22,
    struct thread *VAR_23)
{



 struct mount *VAR_24;
 struct vnode *VAR_25;
 vm_object_t VAR_26;
 vm_prot_t VAR_27;
 boolean_t VAR_28;
 int VAR_29;
 VAR_25 = VAR_15->f_vnode;
 VAR_24 = VAR_25->v_mount;
 if (VAR_24 != ((void*)0) && (VAR_24->mnt_flag & VAR_8) != 0) {
  VAR_27 = VAR_12;
  if ((VAR_19 & VAR_11) != 0)
   return (VAR_0);
 } else
  VAR_27 = VAR_11;
 if ((VAR_15->f_flag & VAR_4) != 0)
  VAR_27 |= VAR_13;
 else if ((VAR_19 & VAR_13) != 0)
  return (VAR_0);






 if ((VAR_21 & VAR_7) != 0) {
  if ((VAR_15->f_flag & VAR_5) != 0)
   VAR_27 |= VAR_14;
  else if ((VAR_19 & VAR_14) != 0)
   return (VAR_0);
 } else {
  VAR_27 |= VAR_14;
  VAR_20 |= VAR_14;
 }
 VAR_27 &= VAR_20;
 if (

     VAR_18 > VAR_9 ||

     VAR_22 < 0 || VAR_22 > VAR_9 - VAR_18)
  return (VAR_1);

 VAR_28 = VAR_2;
 VAR_29 = FUNC_3(VAR_23, VAR_18, VAR_19, &VAR_27, &VAR_21, VAR_25,
     &VAR_22, &VAR_26, &VAR_28);
 if (VAR_29 != 0)
  return (VAR_29);
 VAR_29 = FUNC_2(VAR_16, VAR_17, VAR_18, VAR_19, VAR_27, VAR_21, VAR_26,
     VAR_22, VAR_28, VAR_23);
 if (VAR_29 != 0) {




  if (VAR_28)
   FUNC_5(VAR_26, 0, VAR_18);
  FUNC_4(VAR_26);
 }
 return (VAR_29);
}
