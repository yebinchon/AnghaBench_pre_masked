
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct anon_vma {TYPE_2__* root; } ;
struct TYPE_3__ {int next; } ;
struct TYPE_4__ {TYPE_1__ head; int lock; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_0, struct anon_vma *VAR_1)
{
 if (!FUNC_3(0, (unsigned long *) &VAR_1->root->head.next)) {




  FUNC_2(&VAR_1->root->lock, &VAR_0->mmap_sem);
  if (FUNC_1(0, (unsigned long *)
           &VAR_1->root->head.next))
   FUNC_0();
 }
}
