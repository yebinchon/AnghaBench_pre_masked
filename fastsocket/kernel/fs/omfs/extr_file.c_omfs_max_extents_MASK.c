
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omfs_sb_info {int s_sys_blocksize; } ;
struct omfs_extent_entry {int dummy; } ;
struct omfs_extent {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct omfs_sb_info *VAR_0, int VAR_1)
{
 return (VAR_0->s_sys_blocksize - VAR_1 -
  sizeof(struct omfs_extent)) /
  sizeof(struct omfs_extent_entry) + 1;
}
