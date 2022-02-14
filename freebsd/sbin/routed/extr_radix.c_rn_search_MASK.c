
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {scalar_t__ rn_b; int rn_bmask; size_t rn_off; struct radix_node* rn_l; struct radix_node* rn_r; } ;
typedef int* caddr_t ;



__attribute__((used)) static struct radix_node *
FUNC_0(void *VAR_0,
   struct radix_node *VAR_1)
{
 struct radix_node *VAR_2;
 caddr_t VAR_3;

 for (VAR_2 = VAR_1, VAR_3 = VAR_0; VAR_2->rn_b >= 0;) {
  if (VAR_2->rn_bmask & VAR_3[VAR_2->rn_off])
   VAR_2 = VAR_2->rn_r;
  else
   VAR_2 = VAR_2->rn_l;
 }
 return (VAR_2);
}
