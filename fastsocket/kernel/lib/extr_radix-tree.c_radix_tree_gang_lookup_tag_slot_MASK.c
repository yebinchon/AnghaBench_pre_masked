
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int rnode; } ;
struct radix_tree_node {int height; } ;


 unsigned int FUNC_0 (struct radix_tree_node*,void***,unsigned long,unsigned int,unsigned long*,unsigned int) ;
 struct radix_tree_node* FUNC_1 (struct radix_tree_node*) ;
 int FUNC_2 (struct radix_tree_node*) ;
 unsigned long FUNC_3 (int ) ;
 struct radix_tree_node* FUNC_4 (int ) ;
 int FUNC_5 (struct radix_tree_root*,unsigned int) ;

unsigned int
FUNC_6(struct radix_tree_root *VAR_0, void ***VAR_1,
  unsigned long VAR_2, unsigned int VAR_3,
  unsigned int VAR_4)
{
 struct radix_tree_node *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_2;
 unsigned int VAR_8;


 if (!FUNC_5(VAR_0, VAR_4))
  return 0;

 VAR_5 = FUNC_4(VAR_0->rnode);
 if (!VAR_5)
  return 0;

 if (!FUNC_2(VAR_5)) {
  if (VAR_2 > 0)
   return 0;
  VAR_1[0] = (void **)&VAR_0->rnode;
  return 1;
 }
 VAR_5 = FUNC_1(VAR_5);

 VAR_6 = FUNC_3(VAR_5->height);

 VAR_8 = 0;
 while (VAR_8 < VAR_3) {
  unsigned int VAR_9;
  unsigned long VAR_10;

  if (VAR_7 > VAR_6)
   break;
  VAR_9 = FUNC_0(VAR_5, VAR_1 + VAR_8,
    VAR_7, VAR_3 - VAR_8, &VAR_10, VAR_4);
  VAR_8 += VAR_9;
  if (VAR_10 == 0)
   break;
  VAR_7 = VAR_10;
 }

 return VAR_8;
}
