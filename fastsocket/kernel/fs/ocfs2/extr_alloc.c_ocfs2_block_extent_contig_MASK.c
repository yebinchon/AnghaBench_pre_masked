
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_blkno; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0,
         struct ocfs2_extent_rec *VAR_1,
         u64 VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_1->e_blkno);

 VAR_3 += FUNC_2(VAR_0,
        FUNC_0(VAR_1->e_leaf_clusters));

 return VAR_2 == VAR_3;
}
