
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int height; int * rnode; } ;
struct radix_tree_node {unsigned int height; int count; int * slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct radix_tree_node* FUNC_1 (struct radix_tree_node*) ;
 unsigned long FUNC_2 (unsigned int) ;
 struct radix_tree_node* FUNC_3 (struct radix_tree_root*) ;
 int FUNC_4 (int *,struct radix_tree_node*) ;
 scalar_t__ FUNC_5 (struct radix_tree_root*,int) ;
 int FUNC_6 (struct radix_tree_node*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct radix_tree_root *VAR_2, unsigned long VAR_3)
{
 struct radix_tree_node *VAR_4;
 unsigned int VAR_5;
 int VAR_6;


 VAR_5 = VAR_2->height + 1;
 while (VAR_3 > FUNC_2(VAR_5))
  VAR_5++;

 if (VAR_2->rnode == ((void*)0)) {
  VAR_2->height = VAR_5;
  goto out;
 }

 do {
  unsigned int VAR_7;
  if (!(VAR_4 = FUNC_3(VAR_2)))
   return -VAR_0;


  VAR_4->slots[0] = FUNC_0(VAR_2->rnode);


  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (FUNC_5(VAR_2, VAR_6))
    FUNC_6(VAR_4, VAR_6, 0);
  }

  VAR_7 = VAR_2->height+1;
  VAR_4->height = VAR_7;
  VAR_4->count = 1;
  VAR_4 = FUNC_1(VAR_4);
  FUNC_4(VAR_2->rnode, VAR_4);
  VAR_2->height = VAR_7;
 } while (VAR_5 > VAR_2->height);
out:
 return 0;
}
