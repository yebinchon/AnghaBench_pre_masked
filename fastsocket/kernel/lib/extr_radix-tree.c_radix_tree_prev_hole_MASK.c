
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct radix_tree_root*,unsigned long) ;

unsigned long FUNC_1(struct radix_tree_root *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (!FUNC_0(VAR_1, VAR_2))
   break;
  VAR_2--;
  if (VAR_2 == VAR_0)
   break;
 }

 return VAR_2;
}
