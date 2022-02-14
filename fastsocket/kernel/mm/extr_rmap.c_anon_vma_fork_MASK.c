
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct anon_vma* anon_vma; } ;
struct anon_vma_chain {int dummy; } ;
struct anon_vma {int root; } ;


 int VAR_0 ;
 struct anon_vma* FUNC_0 () ;
 struct anon_vma_chain* FUNC_1 () ;
 int FUNC_2 (struct vm_area_struct*,struct anon_vma_chain*,struct anon_vma*) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_4 (struct anon_vma*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vm_area_struct*) ;

int FUNC_7(struct vm_area_struct *VAR_1, struct vm_area_struct *VAR_2)
{
 struct anon_vma_chain *VAR_3;
 struct anon_vma *VAR_4;


 if (!VAR_2->anon_vma)
  return 0;





 if (FUNC_3(VAR_1, VAR_2))
  return -VAR_0;


 VAR_4 = FUNC_0();
 if (!VAR_4)
  goto out_error;
 VAR_3 = FUNC_1();
 if (!VAR_3)
  goto out_error_free_anon_vma;

 VAR_4->root = VAR_2->anon_vma->root;





 FUNC_5(VAR_4->root);

 VAR_1->anon_vma = VAR_4;
 FUNC_2(VAR_1, VAR_3, VAR_4);

 return 0;

 out_error_free_anon_vma:
 FUNC_4(VAR_4);
 out_error:
 FUNC_6(VAR_1);
 return -VAR_0;
}
