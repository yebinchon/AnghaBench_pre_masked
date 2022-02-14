
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int gfp_mask; } ;
typedef int gfp_t ;


 int VAR_0 ;

__attribute__((used)) static inline gfp_t FUNC_0(struct radix_tree_root *VAR_1)
{
 return VAR_1->gfp_mask & VAR_0;
}
