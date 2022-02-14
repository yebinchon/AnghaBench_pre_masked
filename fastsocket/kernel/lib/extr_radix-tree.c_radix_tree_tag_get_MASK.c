
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int rnode; } ;
struct radix_tree_node {unsigned int height; int * slots; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 struct radix_tree_node* FUNC_1 (struct radix_tree_node*) ;
 int FUNC_2 (struct radix_tree_node*) ;
 unsigned long FUNC_3 (unsigned int) ;
 struct radix_tree_node* FUNC_4 (int ) ;
 int FUNC_5 (struct radix_tree_root*,unsigned int) ;
 int FUNC_6 (struct radix_tree_node*,unsigned int,int) ;

int FUNC_7(struct radix_tree_root *VAR_2,
   unsigned long VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 struct radix_tree_node *VAR_7;
 int VAR_8 = 0;


 if (!FUNC_5(VAR_2, VAR_4))
  return 0;

 VAR_7 = FUNC_4(VAR_2->rnode);
 if (VAR_7 == ((void*)0))
  return 0;

 if (!FUNC_2(VAR_7))
  return (VAR_3 == 0);
 VAR_7 = FUNC_1(VAR_7);

 VAR_5 = VAR_7->height;
 if (VAR_3 > FUNC_3(VAR_5))
  return 0;

 VAR_6 = (VAR_5 - 1) * VAR_1;

 for ( ; ; ) {
  int VAR_9;

  if (VAR_7 == ((void*)0))
   return 0;

  VAR_9 = (VAR_3 >> VAR_6) & VAR_0;





  if (!FUNC_6(VAR_7, VAR_4, VAR_9))
   VAR_8 = 1;
  if (VAR_5 == 1) {
   int VAR_10 = FUNC_6(VAR_7, VAR_4, VAR_9);

   FUNC_0(VAR_10 && VAR_8);
   return !!VAR_10;
  }
  VAR_7 = FUNC_4(VAR_7->slots[VAR_9]);
  VAR_6 -= VAR_1;
  VAR_5--;
 }
}
