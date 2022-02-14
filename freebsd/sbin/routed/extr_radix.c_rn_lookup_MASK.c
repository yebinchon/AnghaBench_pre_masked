
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_node_head {TYPE_1__* rnh_treetop; } ;
struct radix_node {scalar_t__ rn_key; scalar_t__ rn_mask; struct radix_node* rn_dupedkey; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int rn_off; } ;


 struct radix_node* FUNC_0 (void*,int,int ) ;
 struct radix_node* FUNC_1 (void*,struct radix_node_head*) ;

__attribute__((used)) static struct radix_node *
FUNC_2(void *VAR_0, void *VAR_1, struct radix_node_head *VAR_2)
{
 struct radix_node *VAR_3;
 caddr_t VAR_4 = 0;

 if (VAR_1) {
  if ((VAR_3 = FUNC_0(VAR_1, 1,
      VAR_2->rnh_treetop->rn_off)) == ((void*)0))
   return (0);
  VAR_4 = VAR_3->rn_key;
 }
 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3 && VAR_4) {
  while (VAR_3 && VAR_3->rn_mask != VAR_4)
   VAR_3 = VAR_3->rn_dupedkey;
 }
 return VAR_3;
}
