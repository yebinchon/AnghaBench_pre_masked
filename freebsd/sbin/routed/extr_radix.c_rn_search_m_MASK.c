
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {scalar_t__ rn_b; int rn_bmask; size_t rn_off; struct radix_node* rn_l; struct radix_node* rn_r; } ;
typedef int* caddr_t ;



__attribute__((used)) static struct radix_node *
FUNC_0(void *VAR_0,
     struct radix_node *VAR_1,
     void *VAR_2)
{
 struct radix_node *VAR_3;
 caddr_t VAR_4 = VAR_0, VAR_5 = VAR_2;

 for (VAR_3 = VAR_1; VAR_3->rn_b >= 0;) {
  if ((VAR_3->rn_bmask & VAR_5[VAR_3->rn_off]) &&
      (VAR_3->rn_bmask & VAR_4[VAR_3->rn_off]))
   VAR_3 = VAR_3->rn_r;
  else
   VAR_3 = VAR_3->rn_l;
 }
 return VAR_3;
}
