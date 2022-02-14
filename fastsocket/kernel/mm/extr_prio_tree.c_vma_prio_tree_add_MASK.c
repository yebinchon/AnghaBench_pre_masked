
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct vm_area_struct* head; int list; int * parent; } ;
struct TYPE_4__ {TYPE_1__ vm_set; } ;
struct vm_area_struct {TYPE_2__ shared; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(struct vm_area_struct *VAR_0, struct vm_area_struct *VAR_1)
{

 FUNC_0(FUNC_3(VAR_0) != FUNC_3(VAR_1));
 FUNC_0(FUNC_1(VAR_0) != FUNC_1(VAR_1));

 VAR_0->shared.vm_set.head = ((void*)0);
 VAR_0->shared.vm_set.parent = ((void*)0);

 if (!VAR_1->shared.vm_set.parent)
  FUNC_4(&VAR_0->shared.vm_set.list,
    &VAR_1->shared.vm_set.list);
 else if (VAR_1->shared.vm_set.head)
  FUNC_5(&VAR_0->shared.vm_set.list,
    &VAR_1->shared.vm_set.head->shared.vm_set.list);
 else {
  FUNC_2(&VAR_0->shared.vm_set.list);
  VAR_0->shared.vm_set.head = VAR_1;
  VAR_1->shared.vm_set.head = VAR_0;
 }
}
