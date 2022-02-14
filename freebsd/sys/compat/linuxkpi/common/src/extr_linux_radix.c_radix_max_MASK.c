
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {unsigned long height; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long
FUNC_0(struct radix_tree_root *VAR_1)
{
 return ((1UL << (VAR_1->height * VAR_0)) - 1UL);
}
