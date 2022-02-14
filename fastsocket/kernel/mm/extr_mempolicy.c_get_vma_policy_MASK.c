
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mempolicy* vm_policy; TYPE_1__* vm_ops; } ;
struct task_struct {struct mempolicy* mempolicy; } ;
struct mempolicy {int dummy; } ;
struct TYPE_2__ {struct mempolicy* (* get_policy ) (struct vm_area_struct*,unsigned long) ;} ;


 struct mempolicy VAR_0 ;
 struct mempolicy* FUNC_0 (struct vm_area_struct*,unsigned long) ;

struct mempolicy *FUNC_1(struct task_struct *VAR_1,
  struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 struct mempolicy *VAR_4 = VAR_1->mempolicy;

 if (VAR_2) {
  if (VAR_2->vm_ops && VAR_2->vm_ops->get_policy) {
   struct mempolicy *VAR_5 = VAR_2->vm_ops->get_policy(VAR_2,
         VAR_3);
   if (VAR_5)
    VAR_4 = VAR_5;
  } else if (VAR_2->vm_policy)
   VAR_4 = VAR_2->vm_policy;
 }
 if (!VAR_4)
  VAR_4 = &VAR_0;
 return VAR_4;
}
