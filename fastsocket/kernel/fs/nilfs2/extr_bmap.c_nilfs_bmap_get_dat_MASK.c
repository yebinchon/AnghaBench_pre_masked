
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int b_inode; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (int ) ;

struct inode *FUNC_2(const struct nilfs_bmap *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0->b_inode));
}
