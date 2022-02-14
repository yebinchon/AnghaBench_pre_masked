
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {unsigned int height; int rnode; } ;
struct radix_tree_path {int offset; struct radix_tree_node* node; } ;
struct radix_tree_node {struct radix_tree_node** slots; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 struct radix_tree_node* FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct radix_tree_root*,unsigned int) ;
 int FUNC_4 (struct radix_tree_root*,unsigned int) ;
 scalar_t__ FUNC_5 (struct radix_tree_node*,unsigned int,int) ;
 int FUNC_6 (struct radix_tree_node*,unsigned int,int) ;

unsigned long FUNC_7(struct radix_tree_root *VAR_2,
  unsigned long *VAR_3, unsigned long VAR_4,
  unsigned long VAR_5,
  unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_2->height;
 struct radix_tree_path VAR_9[VAR_8];
 struct radix_tree_path *VAR_10 = VAR_9;
 struct radix_tree_node *VAR_11;
 unsigned int VAR_12;
 unsigned long VAR_13 = 0;
 unsigned long VAR_14 = *VAR_3;

 VAR_4 = FUNC_1(VAR_4, FUNC_2(VAR_8));
 if (VAR_14 > VAR_4)
  return 0;
 if (!VAR_5)
  return 0;
 if (!FUNC_3(VAR_2, VAR_6)) {
  *VAR_3 = VAR_4 + 1;
  return 0;
 }
 if (VAR_8 == 0) {
  *VAR_3 = VAR_4 + 1;
  FUNC_4(VAR_2, VAR_7);
  return 1;
 }

 VAR_12 = (VAR_8 - 1) * VAR_1;
 VAR_11 = FUNC_0(VAR_2->rnode);






 VAR_9[VAR_8 - 1].node = ((void*)0);

 for (;;) {
  int VAR_15;

  VAR_15 = (VAR_14 >> VAR_12) & VAR_0;
  if (!VAR_11->slots[VAR_15])
   goto next;
  if (!FUNC_5(VAR_11, VAR_6, VAR_15))
   goto next;
  if (VAR_8 > 1) {

   VAR_8--;
   VAR_12 -= VAR_1;
   VAR_9[VAR_8 - 1].node = VAR_11;
   VAR_9[VAR_8 - 1].offset = VAR_15;
   VAR_11 = VAR_11->slots[VAR_15];
   continue;
  }


  VAR_13++;
  FUNC_6(VAR_11, VAR_7, VAR_15);


  VAR_10 = &VAR_9[0];
  while (VAR_10->node) {

   if (FUNC_5(VAR_10->node, VAR_7, VAR_10->offset))
    break;
   FUNC_6(VAR_10->node, VAR_7, VAR_10->offset);
   VAR_10++;
  }

next:

  VAR_14 = ((VAR_14 >> VAR_12) + 1) << VAR_12;

  if (VAR_14 > VAR_4 || !VAR_14)
   break;
  if (VAR_13 >= VAR_5)
   break;
  while (((VAR_14 >> VAR_12) & VAR_0) == 0) {





   VAR_11 = VAR_9[VAR_8 - 1].node;
   VAR_8++;
   VAR_12 += VAR_1;
  }
 }




 if (VAR_13 > 0)
  FUNC_4(VAR_2, VAR_7);
 *VAR_3 = VAR_14;

 return VAR_13;
}
