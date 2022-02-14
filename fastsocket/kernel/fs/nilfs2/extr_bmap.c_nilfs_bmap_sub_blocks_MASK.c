
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_bmap {TYPE_1__* b_inode; } ;
struct TYPE_5__ {int i_blkbits; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(const struct nilfs_bmap *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->b_inode, (1 << VAR_0->b_inode->i_blkbits) * VAR_1);
 if (FUNC_0(VAR_0->b_inode))
  FUNC_3(VAR_0->b_inode);
 else
  FUNC_2(VAR_0->b_inode);
}
