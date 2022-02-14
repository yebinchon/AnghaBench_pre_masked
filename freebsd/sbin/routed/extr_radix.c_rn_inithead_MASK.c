
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {struct radix_node* rnh_treetop; int rnh_walktree; int rnh_lookup; int rnh_matchaddr; int rnh_deladdr; int rnh_addaddr; struct radix_node* rnh_nodes; } ;
struct radix_node {int rn_flags; int rn_b; int rn_key; struct radix_node* rn_l; struct radix_node* rn_p; struct radix_node* rn_r; } ;


 int FUNC_0 (struct radix_node_head*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct radix_node* FUNC_1 (int ,int,struct radix_node*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,char*) ;

int
FUNC_3(struct radix_node_head **VAR_9, int VAR_10)
{
 struct radix_node_head *VAR_11;
 struct radix_node *VAR_12, *VAR_13, *VAR_14;
 if (*VAR_9)
  return (1);
 VAR_11 = (struct radix_node_head *)FUNC_2(sizeof(*VAR_11), "rn_inithead");
 FUNC_0(VAR_11, sizeof (*VAR_11));
 *VAR_9 = VAR_11;
 VAR_12 = FUNC_1(VAR_8, VAR_10, VAR_11->rnh_nodes);
 VAR_14 = VAR_11->rnh_nodes + 2;
 VAR_12->rn_r = VAR_14;
 VAR_12->rn_p = VAR_12;
 VAR_13 = VAR_12->rn_l;
 VAR_13->rn_flags = VAR_12->rn_flags = VAR_1 | VAR_0;
 VAR_13->rn_b = -1 - VAR_10;
 *VAR_14 = *VAR_13;
 VAR_14->rn_key = VAR_6;
 VAR_11->rnh_addaddr = VAR_2;
 VAR_11->rnh_deladdr = VAR_3;
 VAR_11->rnh_matchaddr = VAR_5;
 VAR_11->rnh_lookup = VAR_4;
 VAR_11->rnh_walktree = VAR_7;
 VAR_11->rnh_treetop = VAR_12;
 return (1);
}
