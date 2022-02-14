
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_inode_info {int ip_blkno; } ;
struct ocfs2_caching_info {int dummy; } ;


 struct ocfs2_inode_info* FUNC_0 (struct ocfs2_caching_info*) ;

__attribute__((used)) static u64 FUNC_1(struct ocfs2_caching_info *VAR_0)
{
 struct ocfs2_inode_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ip_blkno;
}
