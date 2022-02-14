
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int height; struct radix_tree_node* rnode; } ;
struct radix_tree_node {scalar_t__ count; struct radix_tree_node** slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radix_tree_node*,int ) ;
 unsigned long FUNC_1 (struct radix_tree_root*) ;
 size_t FUNC_2 (unsigned long,int) ;

void *
FUNC_3(struct radix_tree_root *VAR_2, unsigned long VAR_3)
{
 struct radix_tree_node *VAR_4[VAR_1];
 struct radix_tree_node *VAR_5;
 void *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = ((void*)0);
 VAR_5 = VAR_2->rnode;
 VAR_7 = VAR_2->height - 1;
 if (VAR_3 > FUNC_1(VAR_2))
  goto out;



 while (VAR_7 && VAR_5) {
  VAR_4[VAR_7] = VAR_5;
  VAR_5 = VAR_5->slots[FUNC_2(VAR_3, VAR_7--)];
 }
 VAR_8 = FUNC_2(VAR_3, 0);
 if (VAR_5)
  VAR_6 = VAR_5->slots[VAR_8];



 if (VAR_6)
  for (;;) {
   VAR_5->slots[VAR_8] = ((void*)0);
   VAR_5->count--;
   if (VAR_5->count > 0)
    break;
   FUNC_0(VAR_5, VAR_0);
   if (VAR_5 == VAR_2->rnode) {
    VAR_2->rnode = ((void*)0);
    VAR_2->height = 0;
    break;
   }
   VAR_7++;
   VAR_5 = VAR_4[VAR_7];
   VAR_8 = FUNC_2(VAR_3, VAR_7);
  }
out:
 return (VAR_6);
}
