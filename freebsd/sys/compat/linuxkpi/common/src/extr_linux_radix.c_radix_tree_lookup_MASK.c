
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int height; struct radix_tree_node* rnode; } ;
struct radix_tree_node {struct radix_tree_node** slots; } ;


 unsigned long FUNC_0 (struct radix_tree_root*) ;
 size_t FUNC_1 (unsigned long,int ) ;

void *
FUNC_2(struct radix_tree_root *VAR_0, unsigned long VAR_1)
{
 struct radix_tree_node *VAR_2;
 void *VAR_3;
 int VAR_4;

 VAR_3 = ((void*)0);
 VAR_2 = VAR_0->rnode;
 VAR_4 = VAR_0->height - 1;
 if (VAR_1 > FUNC_0(VAR_0))
  goto out;
 while (VAR_4 && VAR_2)
  VAR_2 = VAR_2->slots[FUNC_1(VAR_1, VAR_4--)];
 if (VAR_2)
  VAR_3 = VAR_2->slots[FUNC_1(VAR_1, 0)];

out:
 return (VAR_3);
}
