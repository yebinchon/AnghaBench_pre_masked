
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node {int rn_flags; struct radix_mask* rn_mklist; int rn_mask; int rn_b; } ;
struct radix_mask {int rm_flags; struct radix_mask* rm_mklist; int rm_mask; struct radix_node* rm_leaf; int rm_b; } ;


 int FUNC_0 (struct radix_mask*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct radix_mask*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct radix_mask *
FUNC_3(struct radix_node *VAR_2,
    struct radix_mask *VAR_3)
{
 struct radix_mask *VAR_4;

 FUNC_1(VAR_4);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_0, "Mask for route not entered\n");
  return (0);
 }
 FUNC_0(VAR_4, sizeof *VAR_4);
 VAR_4->rm_b = VAR_2->rn_b;
 VAR_4->rm_flags = VAR_2->rn_flags;
 if (VAR_2->rn_flags & VAR_1)
  VAR_4->rm_leaf = VAR_2;
 else
  VAR_4->rm_mask = VAR_2->rn_mask;
 VAR_4->rm_mklist = VAR_3;
 VAR_2->rn_mklist = VAR_4;
 return VAR_4;
}
