
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rtentry {scalar_t__ rt_weight; } ;
struct radix_node {scalar_t__ rn_mask; struct radix_node* rn_dupedkey; } ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct radix_node*) ;

__attribute__((used)) static struct rtentry *
FUNC_2(struct rtentry *VAR_1, uint32_t VAR_2)
{
 struct radix_node *VAR_3, *VAR_4;
 uint32_t VAR_5;
 struct rtentry *VAR_6;
 int64_t VAR_7;


 VAR_3 = VAR_4 = (struct radix_node *)VAR_1;
 VAR_6 = VAR_1;


 VAR_5 = FUNC_1(VAR_3);
 VAR_2 += VAR_0;
 VAR_2 %= VAR_5;
 for (VAR_7 = FUNC_0((int32_t)VAR_2);
      VAR_6 != ((void*)0) && VAR_7 >= VAR_6->rt_weight;
      VAR_7 -= (VAR_6 == ((void*)0)) ? 0 : VAR_6->rt_weight) {


  if (VAR_4->rn_dupedkey && VAR_4->rn_mask != VAR_4->rn_dupedkey->rn_mask)
   break;
  VAR_4 = VAR_4->rn_dupedkey;
  VAR_6 = (struct rtentry *)VAR_4;
 }

 return (VAR_6);
}
