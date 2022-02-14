
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nilfs_super_block {int s_log_block_size; int s_blocks_per_segment; int s_nsegments; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nilfs_super_block *VAR_0, u64 VAR_1)
{
 return VAR_1 < ((FUNC_1(VAR_0->s_nsegments) *
     FUNC_0(VAR_0->s_blocks_per_segment)) <<
    (FUNC_0(VAR_0->s_log_block_size) + 10));
}
