
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {TYPE_1__* b_inode; } ;
struct inode {int dummy; } ;
typedef unsigned long __u64 ;
struct TYPE_2__ {unsigned long i_ino; } ;


 unsigned long VAR_0 ;
 struct inode* FUNC_0 (struct nilfs_bmap const*) ;
 unsigned long FUNC_1 (struct inode*) ;

__u64 FUNC_2(const struct nilfs_bmap *VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4 = VAR_1->b_inode->i_ino / VAR_3;

 return VAR_4 * VAR_3 +
  (VAR_1->b_inode->i_ino % VAR_0) *
  (VAR_3 / VAR_0);
}
