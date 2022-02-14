
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2fs_htree_lookup_level {int dummy; } ;
struct ext2fs_htree_lookup_info {int h_levels_num; struct ext2fs_htree_lookup_level* h_levels; } ;


 int FUNC_0 (struct ext2fs_htree_lookup_level*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ext2fs_htree_lookup_info *VAR_0,
    uint32_t VAR_1, uint32_t VAR_2)
{
 struct ext2fs_htree_lookup_level *VAR_3;

 VAR_3 = &VAR_0->h_levels[VAR_0->h_levels_num - 1];
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
