
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int gfp_mask; int height; struct radix_tree_node* rnode; } ;
struct radix_tree_node {scalar_t__ count; struct radix_tree_node** slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct radix_tree_node*,int ) ;
 struct radix_tree_node* FUNC_1 (int,int ,int) ;
 unsigned long FUNC_2 (struct radix_tree_root*) ;
 int FUNC_3 (unsigned long,int) ;

int
FUNC_4(struct radix_tree_root *VAR_7, unsigned long VAR_8, void *VAR_9)
{
 struct radix_tree_node *VAR_10;
 struct radix_tree_node *VAR_11[VAR_6 - 1];
 int VAR_12;
 int VAR_13;


 if (VAR_9 == ((void*)0))
  return (-VAR_2);


 VAR_10 = VAR_7->rnode;


 if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_4, VAR_7->gfp_mask | VAR_5);
  if (VAR_10 == ((void*)0))
   return (-VAR_3);
  VAR_7->rnode = VAR_10;
  VAR_7->height++;
 }


 while (FUNC_2(VAR_7) < VAR_8) {


  if (VAR_7->height == VAR_6)
   return (-VAR_0);





  if (VAR_10->count != 0) {
   VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_4, VAR_7->gfp_mask | VAR_5);
   if (VAR_10 == ((void*)0))
    return (-VAR_3);
   VAR_10->slots[0] = VAR_7->rnode;
   VAR_10->count++;
   VAR_7->rnode = VAR_10;
  }
  VAR_7->height++;
 }


 VAR_12 = VAR_7->height - 1;


 for ( ; VAR_12 != 0; VAR_12--) {
  VAR_13 = FUNC_3(VAR_8, VAR_12);
  if (VAR_10->slots[VAR_13] == ((void*)0))
   break;
  VAR_10 = VAR_10->slots[VAR_13];
 }


 for (VAR_13 = 0; VAR_13 != VAR_12; VAR_13++) {
  VAR_11[VAR_13] = FUNC_1(sizeof(*VAR_10), VAR_4,
      VAR_7->gfp_mask | VAR_5);
  if (VAR_11[VAR_13] == ((void*)0)) {
   while(VAR_13--)
    FUNC_0(VAR_11[VAR_13], VAR_4);

   if (VAR_7->rnode->count == 0) {
    FUNC_0(VAR_7->rnode, VAR_4);
    VAR_7->rnode = ((void*)0);
    VAR_7->height = 0;
   }
   return (-VAR_3);
  }
 }


 for ( ; VAR_12 != 0; VAR_12--) {
  VAR_13 = FUNC_3(VAR_8, VAR_12);
  VAR_10->slots[VAR_13] = VAR_11[VAR_12 - 1];
  VAR_10->count++;
  VAR_10 = VAR_10->slots[VAR_13];
 }




 VAR_13 = FUNC_3(VAR_8, 0);
 if (VAR_10->slots[VAR_13])
  return (-VAR_1);
 VAR_10->slots[VAR_13] = VAR_9;
 VAR_10->count++;

 return (0);
}
