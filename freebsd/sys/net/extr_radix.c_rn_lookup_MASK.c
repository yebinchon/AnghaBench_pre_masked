
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_node {void* rn_key; void* rn_mask; struct radix_node* rn_dupedkey; } ;
struct radix_head {TYPE_1__* rnh_treetop; int rnh_masks; } ;
typedef void* caddr_t ;
struct TYPE_2__ {int rn_offset; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,void*,scalar_t__) ;
 struct radix_node* FUNC_2 (void*,int ,int,int ) ;
 struct radix_node* FUNC_3 (void*,struct radix_head*) ;

struct radix_node *
FUNC_4(void *VAR_0, void *VAR_1, struct radix_head *VAR_2)
{
 struct radix_node *VAR_3;
 caddr_t VAR_4;

 if (VAR_1 != ((void*)0)) {



  VAR_3 = FUNC_2(VAR_1, VAR_2->rnh_masks, 1,
      VAR_2->rnh_treetop->rn_offset);
  if (VAR_3 == ((void*)0))
   return (((void*)0));
  VAR_4 = VAR_3->rn_key;

  VAR_3 = FUNC_3(VAR_0, VAR_2);

  while (VAR_3 != ((void*)0) && VAR_3->rn_mask != VAR_4)
   VAR_3 = VAR_3->rn_dupedkey;

  return (VAR_3);
 }




 if ((VAR_3 = FUNC_3(VAR_0, VAR_2)) == ((void*)0))
  return (((void*)0));


 if (FUNC_0(VAR_3->rn_key) != FUNC_0(VAR_0) || FUNC_1(VAR_3->rn_key, VAR_0, FUNC_0(VAR_0)))
  return (((void*)0));


 if (VAR_3->rn_mask != ((void*)0))
  return (((void*)0));

 return (VAR_3);
}
