
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma_chain; int anon_vma; } ;
struct anon_vma {int dummy; } ;


 struct anon_vma* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,struct vm_area_struct*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static struct anon_vma *FUNC_3(struct vm_area_struct *VAR_0, struct vm_area_struct *VAR_1, struct vm_area_struct *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2)) {
  struct anon_vma *VAR_3 = FUNC_0(VAR_0->anon_vma);

  if (VAR_3 && FUNC_2(&VAR_0->anon_vma_chain))
   return VAR_3;
 }
 return ((void*)0);
}
