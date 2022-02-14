
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omfs_sb_info {int s_block_shift; } ;
typedef int sector_t ;



__attribute__((used)) static inline sector_t FUNC_0(struct omfs_sb_info *VAR_0, sector_t VAR_1)
{
 return VAR_1 << VAR_0->s_block_shift;
}
