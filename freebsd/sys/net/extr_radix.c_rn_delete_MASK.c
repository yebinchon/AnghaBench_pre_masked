
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {int rn_offset; int rn_flags; int rn_bit; int rn_info; struct radix_node* rn_right; struct radix_node* rn_left; struct radix_node* rn_parent; struct radix_mask* rn_mklist; struct radix_node* rn_dupedkey; struct radix_node* rn_ybro; void* rn_mask; void* rn_key; } ;
struct radix_mask {scalar_t__ rm_refs; struct radix_mask* rm_mklist; void* rm_mask; struct radix_node* rm_leaf; } ;
struct radix_head {int rnh_masks; struct radix_node* rnh_treetop; } ;
typedef void* caddr_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct radix_mask*) ;
 scalar_t__ FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ,char*,...) ;
 struct radix_node* FUNC_4 (void*,int ,int,int) ;
 struct radix_node* VAR_4 ;
 struct radix_node* FUNC_5 (void*,struct radix_node*) ;

struct radix_node *
FUNC_6(void *VAR_5, void *VAR_6, struct radix_head *VAR_7)
{
 struct radix_node *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 struct radix_mask *VAR_12, *VAR_13, **VAR_14;
 struct radix_node *VAR_15, *VAR_16, *VAR_17;
 caddr_t VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_18 = VAR_5;
 VAR_19 = VAR_6;
 VAR_10 = VAR_7->rnh_treetop;
 VAR_11 = FUNC_5(VAR_18, VAR_10);
 VAR_21 = VAR_10->rn_offset;
 VAR_22 = FUNC_0(VAR_18);
 VAR_16 = VAR_11;
 VAR_17 = VAR_10;
 if (VAR_11 == ((void*)0) ||
     FUNC_2(VAR_18 + VAR_21, VAR_11->rn_key + VAR_21, VAR_22 - VAR_21))
  return (0);



 if (VAR_19) {
  VAR_10 = FUNC_4(VAR_19, VAR_7->rnh_masks, 1, VAR_21);
  if (VAR_10 == ((void*)0))
   return (0);
  VAR_19 = VAR_10->rn_key;
  while (VAR_11->rn_mask != VAR_19)
   if ((VAR_11 = VAR_11->rn_dupedkey) == ((void*)0))
    return (0);
 }
 if (VAR_11->rn_mask == 0 || (VAR_13 = VAR_12 = VAR_11->rn_mklist) == ((void*)0))
  goto on1;
 if (VAR_11->rn_flags & VAR_2) {
  if (VAR_12->rm_leaf != VAR_11 || VAR_12->rm_refs > 0) {
   FUNC_3(VAR_0, "rn_delete: inconsistent annotation\n");
   return (0);
  }
 } else {
  if (VAR_12->rm_mask != VAR_11->rn_mask) {
   FUNC_3(VAR_0, "rn_delete: inconsistent annotation\n");
   goto on1;
  }
  if (--VAR_12->rm_refs >= 0)
   goto on1;
 }
 VAR_20 = -1 - VAR_11->rn_bit;
 VAR_8 = VAR_16->rn_parent;
 if (VAR_20 > VAR_8->rn_bit)
  goto on1;
 do {
  VAR_10 = VAR_8;
  VAR_8 = VAR_8->rn_parent;
 } while (VAR_20 <= VAR_8->rn_bit && VAR_10 != VAR_17);
 for (VAR_14 = &VAR_10->rn_mklist; (VAR_12 = *VAR_14); VAR_14 = &VAR_12->rm_mklist)
  if (VAR_12 == VAR_13) {
   *VAR_14 = VAR_12->rm_mklist;
   FUNC_1(VAR_12);
   break;
  }
 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_0, "rn_delete: couldn't find our annotation\n");
  if (VAR_11->rn_flags & VAR_2)
   return (0);
 }
on1:



 if (VAR_11->rn_flags & VAR_3)
  return (0);





 VAR_8 = VAR_11->rn_parent;
 VAR_15 = VAR_16->rn_dupedkey;
 if (VAR_15) {




  if (VAR_11 == VAR_16) {

   VAR_10 = VAR_15; VAR_10->rn_parent = VAR_8;
   if (VAR_8->rn_left == VAR_11)
    VAR_8->rn_left = VAR_10;
   else
    VAR_8->rn_right = VAR_10;
  } else {

   for (VAR_10 = VAR_9 = VAR_16; VAR_9 && VAR_9->rn_dupedkey != VAR_11;)
    VAR_9 = VAR_9->rn_dupedkey;
   if (VAR_9) {
    VAR_9->rn_dupedkey = VAR_11->rn_dupedkey;
    if (VAR_11->rn_dupedkey)
     VAR_11->rn_dupedkey->rn_parent = VAR_9;

   } else FUNC_3(VAR_0, "rn_delete: couldn't find us\n");
  }
  VAR_8 = VAR_11 + 1;
  if (VAR_8->rn_flags & VAR_1) {

   *++VAR_10 = *VAR_8;
   VAR_9 = VAR_8->rn_parent;






   if (VAR_9->rn_left == VAR_8)
    VAR_9->rn_left = VAR_10;
   else
    VAR_9->rn_right = VAR_10;
   VAR_10->rn_left->rn_parent = VAR_10;
   VAR_10->rn_right->rn_parent = VAR_10;
  }
  goto out;
 }
 if (VAR_8->rn_left == VAR_11)
  VAR_10 = VAR_8->rn_right;
 else
  VAR_10 = VAR_8->rn_left;
 VAR_9 = VAR_8->rn_parent;
 if (VAR_9->rn_right == VAR_8)
  VAR_9->rn_right = VAR_10;
 else
  VAR_9->rn_left = VAR_10;
 VAR_10->rn_parent = VAR_9;



 if (VAR_8->rn_mklist) {
  if (VAR_10->rn_bit >= 0) {
   for (VAR_14 = &VAR_10->rn_mklist; (VAR_12 = *VAR_14);)
    VAR_14 = &VAR_12->rm_mklist;
   *VAR_14 = VAR_8->rn_mklist;
  } else {



   for (VAR_12 = VAR_8->rn_mklist; VAR_12 && VAR_10; VAR_10 = VAR_10->rn_dupedkey)
    if (VAR_12 == VAR_10->rn_mklist) {
     struct radix_mask *VAR_23 = VAR_12->rm_mklist;
     VAR_10->rn_mklist = 0;
     if (--(VAR_12->rm_refs) < 0)
      FUNC_1(VAR_12);
     VAR_12 = VAR_23;
    }
   if (VAR_12)
    FUNC_3(VAR_0,
        "rn_delete: Orphaned Mask %p at %p\n",
        VAR_12, VAR_10);
  }
 }



 VAR_10 = VAR_11 + 1;
 if (VAR_8 != VAR_10) {

  *VAR_8 = *VAR_10;





  VAR_8->rn_left->rn_parent = VAR_8;
  VAR_8->rn_right->rn_parent = VAR_8;
  VAR_9 = VAR_10->rn_parent;
  if (VAR_9->rn_left == VAR_10)
   VAR_9->rn_left = VAR_8;
  else
   VAR_9->rn_right = VAR_8;
 }
out:
 VAR_11->rn_flags &= ~VAR_1;
 VAR_11[1].rn_flags &= ~VAR_1;
 return (VAR_11);
}
