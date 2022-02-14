
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
struct thread {int dummy; } ;
struct mount {int mnt_flag; } ;
struct linux_file {struct vnode* f_vnode; } ;
struct linux_cdev {int dummy; } ;
struct file_operations {int dummy; } ;
struct file {int f_flag; scalar_t__ f_data; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct linux_cdev*) ;
 int FUNC_1 (struct thread*,int ,int,int*,int*,struct file*,int *,struct file_operations const*,int *) ;
 int FUNC_2 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_3 (int ,int *,int ,int,int,int,int ,int ,int ,struct thread*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_11, vm_map_t VAR_12, vm_offset_t *VAR_13, vm_size_t VAR_14,
    vm_prot_t VAR_15, vm_prot_t VAR_16, int VAR_17, vm_ooffset_t VAR_18,
    struct thread *VAR_19)
{
 struct linux_file *VAR_20;
 const struct file_operations *VAR_21;
 struct linux_cdev *VAR_22;
 struct mount *VAR_23;
 struct vnode *VAR_24;
 vm_object_t VAR_25;
 vm_prot_t VAR_26;
 int VAR_27;

 VAR_20 = (struct linux_file *)VAR_11->f_data;

 VAR_24 = VAR_20->f_vnode;
 if (VAR_24 == ((void*)0))
  return (VAR_1);





 VAR_23 = VAR_24->v_mount;
 if (VAR_23 != ((void*)0) && (VAR_23->mnt_flag & VAR_6) != 0) {
  VAR_26 = VAR_8;
  if ((VAR_15 & VAR_7) != 0)
   return (VAR_0);
 } else
  VAR_26 = VAR_7;
 if ((VAR_11->f_flag & VAR_3) != 0)
  VAR_26 |= VAR_9;
 else if ((VAR_15 & VAR_9) != 0)
  return (VAR_0);
 if ((VAR_17 & VAR_5) != 0) {
  if ((VAR_11->f_flag & VAR_4) != 0)
   VAR_26 |= VAR_10;
  else if ((VAR_15 & VAR_10) != 0)
   return (VAR_0);
 }
 VAR_26 &= VAR_16;

 FUNC_2(VAR_20, &VAR_21, &VAR_22);
 VAR_27 = FUNC_1(VAR_19, VAR_14, VAR_15, &VAR_26, &VAR_17, VAR_11,
     &VAR_18, VAR_21, &VAR_25);
 if (VAR_27 != 0)
  goto out;

 VAR_27 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15, VAR_26, VAR_17, VAR_25,
     VAR_18, VAR_2, VAR_19);
 if (VAR_27 != 0)
  FUNC_4(VAR_25);
out:
 FUNC_0(VAR_22);
 return (VAR_27);
}
