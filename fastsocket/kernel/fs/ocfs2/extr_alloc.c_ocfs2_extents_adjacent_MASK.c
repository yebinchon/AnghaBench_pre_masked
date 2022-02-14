
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {int e_cpos; int e_leaf_clusters; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_extent_rec *VAR_0,
      struct ocfs2_extent_rec *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0->e_cpos) +
  FUNC_0(VAR_0->e_leaf_clusters);

 return (VAR_2 == FUNC_1(VAR_1->e_cpos));
}
