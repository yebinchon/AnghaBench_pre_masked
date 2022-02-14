
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_group_desc {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head const*) ;
 unsigned long FUNC_1 (struct inode const*) ;

__attribute__((used)) static struct nilfs_palloc_group_desc *
FUNC_2(const struct inode *VAR_0,
      unsigned long VAR_1,
      const struct buffer_head *VAR_2, void *VAR_3)
{
 return (struct nilfs_palloc_group_desc *)(VAR_3 + FUNC_0(VAR_2)) +
  VAR_1 % FUNC_1(VAR_0);
}
