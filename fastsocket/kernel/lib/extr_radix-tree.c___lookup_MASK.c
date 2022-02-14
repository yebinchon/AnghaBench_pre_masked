
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {unsigned int height; void** slots; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 struct radix_tree_node* FUNC_0 (void*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct radix_tree_node *VAR_3, void ***VAR_4, unsigned long *VAR_5,
 unsigned long VAR_6, unsigned int VAR_7, unsigned long *VAR_8)
{
 unsigned int VAR_9 = 0;
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12;

 VAR_11 = VAR_3->height;
 if (VAR_11 == 0)
  goto out;
 VAR_10 = (VAR_11-1) * VAR_1;

 for ( ; VAR_11 > 1; VAR_11--) {
  VAR_12 = (VAR_6 >> VAR_10) & VAR_0;
  for (;;) {
   if (VAR_3->slots[VAR_12] != ((void*)0))
    break;
   VAR_6 &= ~((1UL << VAR_10) - 1);
   VAR_6 += 1UL << VAR_10;
   if (VAR_6 == 0)
    goto out;
   VAR_12++;
   if (VAR_12 == VAR_2)
    goto out;
  }

  VAR_10 -= VAR_1;
  VAR_3 = FUNC_0(VAR_3->slots[VAR_12]);
  if (VAR_3 == ((void*)0))
   goto out;
 }


 for (VAR_12 = VAR_6 & VAR_0; VAR_12 < VAR_2; VAR_12++) {
  if (VAR_3->slots[VAR_12]) {
   VAR_4[VAR_9] = &(VAR_3->slots[VAR_12]);
   if (VAR_5)
    VAR_5[VAR_9] = VAR_6;
   if (++VAR_9 == VAR_7) {
    VAR_6++;
    goto out;
   }
  }
  VAR_6++;
 }
out:
 *VAR_8 = VAR_6;
 return VAR_9;
}
