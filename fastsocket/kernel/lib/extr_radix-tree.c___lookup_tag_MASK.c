
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {unsigned int height; void** slots; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 struct radix_tree_node* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct radix_tree_node*,unsigned int,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_2(struct radix_tree_node *VAR_3, void ***VAR_4, unsigned long VAR_5,
 unsigned int VAR_6, unsigned long *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9 = 0;
 unsigned int VAR_10, VAR_11;

 VAR_11 = VAR_3->height;
 if (VAR_11 == 0)
  goto out;
 VAR_10 = (VAR_11-1) * VAR_1;

 while (VAR_11 > 0) {
  unsigned long VAR_12 = (VAR_5 >> VAR_10) & VAR_0 ;

  for (;;) {
   if (FUNC_1(VAR_3, VAR_8, VAR_12))
    break;
   VAR_5 &= ~((1UL << VAR_10) - 1);
   VAR_5 += 1UL << VAR_10;
   if (VAR_5 == 0)
    goto out;
   VAR_12++;
   if (VAR_12 == VAR_2)
    goto out;
  }
  VAR_11--;
  if (VAR_11 == 0) {
   unsigned long VAR_13 = VAR_5 & VAR_0;

   for ( ; VAR_13 < VAR_2; VAR_13++) {
    VAR_5++;
    if (!FUNC_1(VAR_3, VAR_8, VAR_13))
     continue;
    if (VAR_3->slots[VAR_13]) {
     VAR_4[VAR_9++] = &(VAR_3->slots[VAR_13]);
     if (VAR_9 == VAR_6)
      goto out;
    }
   }
  }
  VAR_10 -= VAR_1;
  VAR_3 = FUNC_0(VAR_3->slots[VAR_12]);
  if (VAR_3 == ((void*)0))
   break;
 }
out:
 *VAR_7 = VAR_5;
 return VAR_9;
}
