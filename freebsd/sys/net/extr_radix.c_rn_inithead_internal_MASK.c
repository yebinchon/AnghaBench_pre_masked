
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {int rn_flags; int rn_bit; int rn_key; struct radix_node* rn_left; struct radix_node* rn_parent; struct radix_node* rn_right; } ;
struct radix_head {struct radix_node* rnh_treetop; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct radix_node* FUNC_0 (int ,int,struct radix_node*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1(struct radix_head *VAR_4, struct radix_node *VAR_5, int VAR_6)
{
 struct radix_node *VAR_7, *VAR_8, *VAR_9;

 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);
 VAR_9 = VAR_5 + 2;
 VAR_7->rn_right = VAR_9;
 VAR_7->rn_parent = VAR_7;
 VAR_8 = VAR_7->rn_left;
 VAR_8->rn_flags = VAR_7->rn_flags = VAR_1 | VAR_0;
 VAR_8->rn_bit = -1 - VAR_6;
 *VAR_9 = *VAR_8;
 VAR_9->rn_key = VAR_2;

 VAR_4->rnh_treetop = VAR_7;
}
