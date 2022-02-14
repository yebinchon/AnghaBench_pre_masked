
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {struct notifier_block* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct notifier_block*,struct notifier_block*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block **VAR_1,
  struct notifier_block *VAR_2)
{
 while ((*VAR_1) != ((void*)0)) {
  if ((*VAR_1) == VAR_2) {
   FUNC_0(*VAR_1, VAR_2->next);
   return 0;
  }
  VAR_1 = &((*VAR_1)->next);
 }
 return -VAR_0;
}
