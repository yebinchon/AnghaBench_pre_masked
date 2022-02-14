
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ufs_sb_private_info {scalar_t__ fs_magic; } ;
struct ufs_buffer_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct ufs_buffer_head*,int ) ;
 void* FUNC_1 (struct ufs_buffer_head*,int ) ;

__attribute__((used)) static inline void *FUNC_2(struct ufs_sb_private_info *VAR_1,
         struct ufs_buffer_head *VAR_2,
         u64 VAR_3)
{
 if (VAR_1->fs_magic == VAR_0)
  return FUNC_1(VAR_2, VAR_3);
 else
  return FUNC_0(VAR_2, VAR_3);
}
