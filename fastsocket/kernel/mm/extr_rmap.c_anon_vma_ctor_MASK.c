
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anon_vma {int head; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct anon_vma*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct anon_vma *VAR_1 = VAR_0;

 FUNC_2(&VAR_1->lock);
 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->head);
}
