
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {scalar_t__ addr; struct vm_struct* next; int flags; } ;


 int VAR_0 ;
 struct vm_struct* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vm_struct *VAR_3)
{
 struct vm_struct *VAR_4, **VAR_5;

 VAR_3->flags &= ~VAR_0;
 FUNC_0(&VAR_2);
 for (VAR_5 = &VAR_1; (VAR_4 = *VAR_5) != ((void*)0); VAR_5 = &VAR_4->next) {
  if (VAR_4->addr >= VAR_3->addr)
   break;
 }
 VAR_3->next = *VAR_5;
 *VAR_5 = VAR_3;
 FUNC_1(&VAR_2);
}
