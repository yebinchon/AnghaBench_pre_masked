
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef int vm_object_t ;
struct thread {int dummy; } ;
struct file_operations {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,struct file_operations const*,int *,int ,int *,int,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_5, vm_size_t VAR_6, vm_prot_t VAR_7,
    vm_prot_t *VAR_8, int *VAR_9, struct file *VAR_10,
    vm_ooffset_t *VAR_11, const struct file_operations *VAR_12, vm_object_t *VAR_13)
{




 if ((*VAR_8 & VAR_4) == 0 &&
     (VAR_7 & VAR_4) != 0)
  return (VAR_0);
 if ((*VAR_9 & (VAR_3 | VAR_2)) != 0)
  return (VAR_1);

 return (FUNC_0(VAR_10, VAR_12, VAR_11, VAR_6, VAR_13,
     (int)VAR_7, VAR_5));
}
