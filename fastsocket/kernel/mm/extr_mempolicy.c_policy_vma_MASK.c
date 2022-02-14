
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mempolicy* vm_policy; TYPE_1__* vm_ops; int vm_file; int vm_pgoff; int vm_end; int vm_start; } ;
struct mempolicy {int dummy; } ;
struct TYPE_2__ {int (* set_policy ) (struct vm_area_struct*,struct mempolicy*) ;} ;


 int FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (struct mempolicy*) ;
 int FUNC_2 (char*,int ,int ,int ,TYPE_1__*,int ,int (*) (struct vm_area_struct*,struct mempolicy*)) ;
 int FUNC_3 (struct vm_area_struct*,struct mempolicy*) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_0, struct mempolicy *VAR_1)
{
 int VAR_2 = 0;
 struct mempolicy *VAR_3 = VAR_0->vm_policy;

 FUNC_2("vma %lx-%lx/%lx vm_ops %p vm_file %p set_policy %p\n",
   VAR_0->vm_start, VAR_0->vm_end, VAR_0->vm_pgoff,
   VAR_0->vm_ops, VAR_0->vm_file,
   VAR_0->vm_ops ? VAR_0->vm_ops->set_policy : ((void*)0));

 if (VAR_0->vm_ops && VAR_0->vm_ops->set_policy)
  VAR_2 = VAR_0->vm_ops->set_policy(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_0(VAR_1);
  VAR_0->vm_policy = VAR_1;
  FUNC_1(VAR_3);
 }
 return VAR_2;
}
