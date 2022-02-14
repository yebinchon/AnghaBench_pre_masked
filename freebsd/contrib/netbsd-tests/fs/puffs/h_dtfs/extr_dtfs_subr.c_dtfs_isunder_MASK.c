
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_node {int dummy; } ;
struct dtfs_file {struct puffs_node* df_dotdot; } ;


 struct dtfs_file* FUNC_0 (struct puffs_node*) ;

bool
FUNC_1(struct puffs_node *VAR_0, struct puffs_node *VAR_1)
{
 struct dtfs_file *VAR_2;

 while (VAR_0) {
  if (VAR_0 == VAR_1)
   return 1;
  VAR_2 = FUNC_0(VAR_0);
  VAR_0 = VAR_2->df_dotdot;
 }

 return 0;
}
