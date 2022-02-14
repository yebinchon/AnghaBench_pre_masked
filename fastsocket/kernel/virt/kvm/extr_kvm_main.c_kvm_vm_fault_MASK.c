
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_fault {struct page* page; int pgoff; } ;
struct vm_area_struct {TYPE_1__* vm_file; } ;
struct page {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;
struct TYPE_5__ {int mm; } ;
struct TYPE_4__ {struct kvm* private_data; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,unsigned long,int,int,int ,struct page**,int *) ;
 unsigned long FUNC_1 (struct kvm*,int ) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_2, struct vm_fault *VAR_3)
{
 struct page *VAR_4[1];
 unsigned long VAR_5;
 int VAR_6;
 gfn_t VAR_7 = VAR_3->pgoff;
 struct kvm *VAR_8 = VAR_2->vm_file->private_data;

 VAR_5 = FUNC_1(VAR_8, VAR_7);
 if (FUNC_2(VAR_5))
  return VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_1->mm, VAR_5, 1, 1, 0, VAR_4,
    ((void*)0));
 if (FUNC_3(VAR_6 != 1))
  return VAR_0;

 VAR_3->page = VAR_4[0];
 return 0;
}
