
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;


 int FUNC_0 (struct radix_tree_root*,unsigned long) ;

unsigned long FUNC_1(struct radix_tree_root *VAR_0,
    unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (!FUNC_0(VAR_0, VAR_1))
   break;
  VAR_1++;
  if (VAR_1 == 0)
   break;
 }

 return VAR_1;
}
