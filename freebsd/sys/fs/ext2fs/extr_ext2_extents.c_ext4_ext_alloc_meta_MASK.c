
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flag; int i_vnode; TYPE_1__* i_e2fs; int i_blocks; } ;
typedef scalar_t__ e4fs_daddr_t ;
struct TYPE_2__ {int e2fs_bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static e4fs_daddr_t
FUNC_3(struct inode *VAR_2)
{
 e4fs_daddr_t VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  VAR_2->i_blocks += FUNC_0(VAR_2->i_e2fs->e2fs_bsize);
  VAR_2->i_flag |= VAR_0 | VAR_1;
  FUNC_2(VAR_2->i_vnode, 1);
 }

 return (VAR_3);
}
