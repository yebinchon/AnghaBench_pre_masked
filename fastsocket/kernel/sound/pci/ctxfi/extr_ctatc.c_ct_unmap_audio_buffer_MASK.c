
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_vm {int (* unmap ) (struct ct_vm*,int *) ;} ;
struct ct_atc_pcm {int * vm_block; } ;
struct ct_atc {struct ct_vm* vm; } ;


 int FUNC_0 (struct ct_vm*,int *) ;

__attribute__((used)) static void FUNC_1(struct ct_atc *VAR_0, struct ct_atc_pcm *VAR_1)
{
 struct ct_vm *VAR_2;

 if (!VAR_1->vm_block)
  return;

 VAR_2 = VAR_0->vm;

 VAR_2->unmap(VAR_2, VAR_1->vm_block);

 VAR_1->vm_block = ((void*)0);
}
