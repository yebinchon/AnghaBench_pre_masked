
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct radix_node_head {struct radix_node* rnh_treetop; } ;
struct radix_node {int rn_off; int rn_b; int rn_bmask; scalar_t__ rn_mask; int* rn_key; int rn_flags; struct radix_node* rn_dupedkey; struct radix_mask* rn_mklist; struct radix_node* rn_p; struct radix_node* rn_l; struct radix_node* rn_r; } ;
struct radix_mask {int rm_flags; int rm_b; scalar_t__ rm_mask; struct radix_node* rm_leaf; struct radix_mask* rm_mklist; } ;
typedef int* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 (int*,struct radix_node*,int) ;
 struct radix_node* FUNC_2 (int*,struct radix_node*,scalar_t__) ;

__attribute__((used)) static struct radix_node *
FUNC_3(void *VAR_2,
  struct radix_node_head *VAR_3)
{
 caddr_t VAR_4 = VAR_2;
 struct radix_node *VAR_5 = VAR_3->rnh_treetop, *VAR_6;
 caddr_t VAR_7 = VAR_4, VAR_8;
 caddr_t VAR_9;
 struct radix_node *VAR_10, *VAR_11 = VAR_5;
 int VAR_12 = VAR_5->rn_off, VAR_13 = *(u_char *)VAR_7, VAR_14;
 int VAR_15, VAR_16, VAR_17;





 for (; VAR_5->rn_b >= 0; ) {
  if (VAR_5->rn_bmask & VAR_7[VAR_5->rn_off])
   VAR_5 = VAR_5->rn_r;
  else
   VAR_5 = VAR_5->rn_l;
 }
 if (VAR_5->rn_mask)
  VAR_13 = *(u_char *)VAR_5->rn_mask;
 VAR_7 += VAR_12; VAR_8 = VAR_5->rn_key + VAR_12; VAR_9 = VAR_4 + VAR_13;
 for (; VAR_7 < VAR_9; VAR_7++, VAR_8++)
  if (*VAR_7 != *VAR_8)
   goto on1;
 if (!(VAR_5->rn_flags & VAR_1))
  return VAR_5;
 if (VAR_5->rn_dupedkey) {
  VAR_5 = VAR_5->rn_dupedkey;
  return VAR_5;
 }
 if (*(VAR_7-1) == 0)
  return VAR_5;
 VAR_16 = 0;
 goto on2;
on1:
 VAR_15 = (*VAR_7 ^ *VAR_8) & 0xff;
 for (VAR_16 = 7; (VAR_15 >>= 1) > 0;)
  VAR_16--;
on2:
 VAR_14 = VAR_7 - VAR_4;
 VAR_16 += VAR_14 << 3;
 VAR_17 = -1 - VAR_16;



 if ((VAR_10 = VAR_5)->rn_mask == 0)
  VAR_5 = VAR_5->rn_dupedkey;
 for (; VAR_5; VAR_5 = VAR_5->rn_dupedkey) {





  if (VAR_5->rn_flags & VAR_0) {
   if (VAR_17 <= VAR_5->rn_b)
    return VAR_5;
  } else if (FUNC_1(VAR_4, VAR_5, VAR_14)) {
   return VAR_5;
  }
 }
 VAR_5 = VAR_10;

 do {
  struct radix_mask *VAR_18;
  VAR_5 = VAR_5->rn_p;
  if ((VAR_18 = VAR_5->rn_mklist)) {






   do {
    if (VAR_18->rm_flags & VAR_0) {
     if (VAR_17 <= VAR_18->rm_b)
      return (VAR_18->rm_leaf);
    } else {
     VAR_12 = FUNC_0(VAR_5->rn_off, VAR_14);
     VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_18->rm_mask);
     while (VAR_6 && VAR_6->rn_mask != VAR_18->rm_mask)
      VAR_6 = VAR_6->rn_dupedkey;
     if (VAR_6 && FUNC_1(VAR_4, VAR_6, VAR_12))
          return VAR_6;
    }
   } while ((VAR_18 = VAR_18->rm_mklist));
  }
 } while (VAR_5 != VAR_11);
 return 0;
}
