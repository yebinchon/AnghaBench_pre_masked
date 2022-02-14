
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {int rn_bit; int rn_bmask; int rn_offset; struct radix_node* rn_ybro; struct radix_node* rn_twin; scalar_t__ rn_info; scalar_t__ rn_mklist; int rn_flags; struct radix_node* rn_parent; scalar_t__ rn_key; int * rn_dupedkey; int * rn_mask; int * rn_right; struct radix_node* rn_left; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 struct radix_node* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct radix_node *
FUNC_0(void *VAR_3, int VAR_4, struct radix_node VAR_5[2])
{
 struct radix_node *VAR_6 = VAR_5, *VAR_7 = VAR_6 + 1;
 VAR_7->rn_bit = VAR_4;
 VAR_7->rn_bmask = 0x80 >> (VAR_4 & 7);
 VAR_7->rn_left = VAR_6;
 VAR_7->rn_offset = VAR_4 >> 3;
 VAR_6->rn_bit = -1;
 VAR_6->rn_key = (caddr_t)VAR_3;
 VAR_6->rn_parent = VAR_7;
 VAR_6->rn_flags = VAR_7->rn_flags = VAR_0;
 VAR_6->rn_mklist = VAR_7->rn_mklist = 0;






 return (VAR_7);
}
