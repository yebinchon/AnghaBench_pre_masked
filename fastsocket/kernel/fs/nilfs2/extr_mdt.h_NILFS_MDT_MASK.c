
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_mdt_info {int dummy; } ;
struct inode {struct nilfs_mdt_info* i_private; } ;



__attribute__((used)) static inline struct nilfs_mdt_info *FUNC_0(const struct inode *VAR_0)
{
 return VAR_0->i_private;
}
