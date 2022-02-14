
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
typedef int vm_map_t ;
struct vnode {struct mount* v_mount; } ;
struct thread {struct file* td_fpop; } ;
struct mount {int mnt_flag; } ;
struct file {int f_flag; struct vnode* f_vnode; } ;
struct cdevsw {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cdev*,int) ;
 int FUNC_1 (struct file*,struct cdev**,struct cdevsw**,int*) ;
 int FUNC_2 (struct thread*,int ,int,int*,int*,struct cdev*,struct cdevsw*,int *,int *) ;
 int FUNC_3 (int ,int *,int ,int,int,int,int ,int ,int ,struct thread*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_10, vm_map_t VAR_11, vm_offset_t *VAR_12, vm_size_t VAR_13,
    vm_prot_t VAR_14, vm_prot_t VAR_15, int VAR_16, vm_ooffset_t VAR_17,
    struct thread *VAR_18)
{
 struct cdev *VAR_19;
 struct cdevsw *VAR_20;
 struct mount *VAR_21;
 struct vnode *VAR_22;
 struct file *VAR_23;
 vm_object_t VAR_24;
 vm_prot_t VAR_25;
 int VAR_26, VAR_27;

 VAR_22 = VAR_10->f_vnode;





 VAR_21 = VAR_22->v_mount;
 if (VAR_21 != ((void*)0) && (VAR_21->mnt_flag & VAR_5) != 0) {
  VAR_25 = VAR_7;
  if ((VAR_14 & VAR_6) != 0)
   return (VAR_0);
 } else
  VAR_25 = VAR_6;
 if ((VAR_10->f_flag & VAR_2) != 0)
  VAR_25 |= VAR_8;
 else if ((VAR_14 & VAR_8) != 0)
  return (VAR_0);
 if ((VAR_16 & VAR_4) != 0) {
  if ((VAR_10->f_flag & VAR_3) != 0)
   VAR_25 |= VAR_9;
  else if ((VAR_14 & VAR_9) != 0)
   return (VAR_0);
 }
 VAR_25 &= VAR_15;

 VAR_23 = VAR_18->td_fpop;
 VAR_26 = FUNC_1(VAR_10, &VAR_19, &VAR_20, &VAR_27);
 if (VAR_26 != 0)
  return (VAR_26);

 VAR_26 = FUNC_2(VAR_18, VAR_13, VAR_14, &VAR_25, &VAR_16, VAR_19, VAR_20, &VAR_17,
     &VAR_24);
 VAR_18->td_fpop = VAR_23;
 FUNC_0(VAR_19, VAR_27);
 if (VAR_26 != 0)
  return (VAR_26);

 VAR_26 = FUNC_3(VAR_11, VAR_12, VAR_13, VAR_14, VAR_25, VAR_16, VAR_24,
     VAR_17, VAR_1, VAR_18);
 if (VAR_26 != 0)
  FUNC_4(VAR_24);
 return (VAR_26);
}
