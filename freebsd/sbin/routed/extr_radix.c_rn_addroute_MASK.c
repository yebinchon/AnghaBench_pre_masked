
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_node_head {struct radix_node* rnh_treetop; } ;
struct radix_node {short rn_b; scalar_t__ rn_key; scalar_t__ rn_mask; int rn_flags; scalar_t__ rn_mklist; struct radix_node* rn_p; struct radix_node* rn_dupedkey; struct radix_node* rn_r; struct radix_node* rn_l; struct radix_node* rn_ybro; struct radix_node* rn_twin; scalar_t__ rn_info; int rn_off; } ;
struct radix_mask {short rm_b; int rm_flags; scalar_t__ rm_mask; int rm_refs; TYPE_1__* rm_leaf; struct radix_mask* rm_mklist; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ rn_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct radix_node* FUNC_1 (scalar_t__,int ,int ) ;
 struct radix_node* VAR_3 ;
 struct radix_node* FUNC_2 (scalar_t__,struct radix_node_head*,int*,struct radix_node*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 struct radix_mask* FUNC_4 (struct radix_node*,struct radix_mask*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct radix_node *
FUNC_6(void *VAR_5,
     void *VAR_6,
     struct radix_node_head *VAR_7,
     struct radix_node VAR_8[2])
{
 caddr_t VAR_9 = (caddr_t)VAR_5, VAR_10 = (caddr_t)VAR_6;
 struct radix_node *VAR_11, *VAR_12 = ((void*)0), *VAR_13;
 struct radix_node *VAR_14, *VAR_15 = VAR_7->rnh_treetop;
 short VAR_16 = 0, VAR_17 = 0;
 int VAR_18;
 caddr_t VAR_19;
 struct radix_mask *VAR_20, **VAR_21;
 if (VAR_10) {
  if ((VAR_12 = FUNC_1(VAR_10, 0, VAR_15->rn_off)) == ((void*)0))
   return (0);
  VAR_17 = VAR_12->rn_b;
  VAR_16 = -1 - VAR_12->rn_b;
  VAR_10 = VAR_12->rn_key;
 }



 VAR_14 = VAR_13 = FUNC_2(VAR_9, VAR_7, &VAR_18, VAR_8);
 if (VAR_18) {
  for (VAR_11 = VAR_13; VAR_13; VAR_11 = VAR_13, VAR_13 = VAR_13->rn_dupedkey) {
   if (VAR_13->rn_mask == VAR_10)
    return (0);
   if (VAR_10 == 0 ||
       (VAR_13->rn_mask &&
        ((VAR_17 < VAR_13->rn_b) ||
          FUNC_5(VAR_10, VAR_13->rn_mask) ||
          FUNC_3(VAR_10, VAR_13->rn_mask))))
    break;
  }
  if (VAR_13 == VAR_14) {
   struct radix_node *VAR_22 = VAR_12;

   (VAR_13 = VAR_8)->rn_dupedkey = VAR_11;
   VAR_13->rn_flags = VAR_11->rn_flags;
   VAR_13->rn_p = VAR_12 = VAR_11->rn_p;
   if (VAR_12->rn_l == VAR_11) VAR_12->rn_l = VAR_13; else VAR_12->rn_r = VAR_13;
   VAR_14 = VAR_13; VAR_12 = VAR_22;
  } else {
   (VAR_13 = VAR_8)->rn_dupedkey = VAR_11->rn_dupedkey;
   VAR_11->rn_dupedkey = VAR_13;
  }




  VAR_13->rn_key = (caddr_t) VAR_9;
  VAR_13->rn_b = -1;
  VAR_13->rn_flags = VAR_1;
 }



 if (VAR_10) {
  VAR_13->rn_mask = VAR_10;
  VAR_13->rn_b = VAR_12->rn_b;
  VAR_13->rn_flags |= VAR_12->rn_flags & VAR_2;
 }
 VAR_11 = VAR_14->rn_p;
 if (VAR_18)
  goto on2;
 VAR_17 = -1 - VAR_11->rn_b;
 if (VAR_11->rn_r == VAR_14) VAR_12 = VAR_11->rn_l; else VAR_12 = VAR_11->rn_r;

 if (VAR_12->rn_b < 0) {
     for (VAR_21 = &VAR_11->rn_mklist; VAR_12; VAR_12 = VAR_12->rn_dupedkey)
  if (VAR_12->rn_mask && (VAR_12->rn_b >= VAR_17) && VAR_12->rn_mklist == 0) {
   if ((*VAR_21 = VAR_20 = FUNC_4(VAR_12, 0)))
    VAR_21 = &VAR_20->rm_mklist;
  }
 } else if (VAR_12->rn_mklist) {



  for (VAR_21 = &VAR_12->rn_mklist; (VAR_20 = *VAR_21); VAR_21 = &VAR_20->rm_mklist)
   if (VAR_20->rm_b >= VAR_17)
    break;
  VAR_11->rn_mklist = VAR_20; *VAR_21 = ((void*)0);
 }
on2:

 if ((VAR_10 == 0) || (VAR_16 > VAR_11->rn_b ))
  return VAR_13;
 VAR_17 = VAR_13->rn_b;
 do {
  VAR_12 = VAR_11;
  VAR_11 = VAR_11->rn_p;
 } while (VAR_16 <= VAR_11->rn_b && VAR_12 != VAR_15);






 for (VAR_21 = &VAR_12->rn_mklist; (VAR_20 = *VAR_21); VAR_21 = &VAR_20->rm_mklist) {
  if (VAR_20->rm_b < VAR_17)
   continue;
  if (VAR_20->rm_b > VAR_17)
   break;
  if (VAR_20->rm_flags & VAR_2) {
   VAR_19 = VAR_20->rm_leaf->rn_mask;
   if (VAR_13->rn_flags & VAR_2) {
    FUNC_0(VAR_0,
       "Non-unique normal route, mask not entered");
    return VAR_13;
   }
  } else
   VAR_19 = VAR_20->rm_mask;
  if (VAR_19 == VAR_10) {
   VAR_20->rm_refs++;
   VAR_13->rn_mklist = VAR_20;
   return VAR_13;
  }
  if (FUNC_5(VAR_10, VAR_19) || FUNC_3(VAR_10, VAR_19))
   break;
 }
 *VAR_21 = FUNC_4(VAR_13, *VAR_21);
 return VAR_13;
}
