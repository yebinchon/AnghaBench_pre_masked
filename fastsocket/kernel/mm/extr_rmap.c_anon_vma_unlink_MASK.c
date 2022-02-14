
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anon_vma_chain {int same_anon_vma; struct anon_vma* anon_vma; } ;
struct anon_vma {struct anon_vma* root; int head; } ;


 int FUNC_0 (struct anon_vma*) ;
 int FUNC_1 (struct anon_vma*) ;
 int FUNC_2 (struct anon_vma*) ;
 int FUNC_3 (struct anon_vma*) ;
 int FUNC_4 (struct anon_vma*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct anon_vma_chain *VAR_0)
{
 struct anon_vma *VAR_1 = VAR_0->anon_vma;
 int VAR_2;


 if (!VAR_1)
  return;

 FUNC_1(VAR_1);
 FUNC_5(&VAR_0->same_anon_vma);


 VAR_2 = FUNC_6(&VAR_1->head) && !FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 if (VAR_2) {

  if (VAR_1->root != VAR_1)
   FUNC_4(VAR_1->root);
  FUNC_0(VAR_1);
 }
}
