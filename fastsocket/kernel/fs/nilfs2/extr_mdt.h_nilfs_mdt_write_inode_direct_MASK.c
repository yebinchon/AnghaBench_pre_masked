
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {unsigned int b_data; } ;


 int FUNC_0 (struct inode*,struct nilfs_inode*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct inode *VAR_0, struct buffer_head *VAR_1,
        unsigned VAR_2)
{
 FUNC_0(
  VAR_0, (struct nilfs_inode *)(VAR_1->b_data + VAR_2), 1);
}
