
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {scalar_t__ rn_mask; struct radix_node* rn_dupedkey; } ;



struct radix_node *
FUNC_0(struct radix_node *VAR_0)
{
 struct radix_node *VAR_1;

 if (!VAR_0->rn_dupedkey)
  return ((void*)0);
 VAR_1 = VAR_0->rn_dupedkey;
 if (VAR_0->rn_mask == VAR_1->rn_mask)
  return VAR_1;
 else
  return ((void*)0);
}
