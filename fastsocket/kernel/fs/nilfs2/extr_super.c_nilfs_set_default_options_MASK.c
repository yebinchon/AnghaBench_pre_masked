
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_super_block {int dummy; } ;
struct nilfs_sb_info {int s_mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct nilfs_sb_info *VAR_2,
     struct nilfs_super_block *VAR_3)
{
 VAR_2->s_mount_opt =
  VAR_1 | VAR_0;
}
