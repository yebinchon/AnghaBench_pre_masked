
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int height; struct radix_tree_node* rnode; } ;
struct radix_tree_node {int count; void** slots; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 struct radix_tree_node* FUNC_1 (struct radix_tree_node*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct radix_tree_node*) ;
 int FUNC_4 (struct radix_tree_node*) ;

__attribute__((used)) static inline void FUNC_5(struct radix_tree_root *VAR_1)
{

 while (VAR_1->height > 0) {
  struct radix_tree_node *VAR_2 = VAR_1->rnode;
  void *VAR_3;

  FUNC_0(!FUNC_3(VAR_2));
  VAR_2 = FUNC_1(VAR_2);





  if (VAR_2->count != 1)
   break;
  if (!VAR_2->slots[0])
   break;
  VAR_3 = VAR_2->slots[0];
  if (VAR_1->height > 1)
   VAR_3 = FUNC_2(VAR_3);
  VAR_1->rnode = VAR_3;
  VAR_1->height--;
  if (VAR_1->height == 0)
   *((unsigned long *)&VAR_2->slots[0]) |=
      VAR_0;

  FUNC_4(VAR_2);
 }
}
