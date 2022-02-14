
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtentry {scalar_t__ rt_weight; } ;
struct radix_node {int dummy; } ;


 struct radix_node* FUNC_0 (struct radix_node*) ;

uint32_t
FUNC_1(struct radix_node *VAR_0)
{
 uint32_t VAR_1 = 0;
 struct rtentry *VAR_2;

 while (VAR_0 != ((void*)0)) {
  VAR_2 = (struct rtentry *)VAR_0;
  VAR_1 += VAR_2->rt_weight;
  VAR_0 = FUNC_0(VAR_0);
 }
 return (VAR_1);
}
