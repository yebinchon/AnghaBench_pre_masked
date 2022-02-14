
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {TYPE_1__* e2fs; } ;
struct inode {int i_block_group; struct m_ext2fs* i_e2fs; } ;
struct ext4_extent_path {int ep_depth; scalar_t__ ep_blk; scalar_t__ ep_data; struct ext4_extent* ep_ext; } ;
struct ext4_extent {scalar_t__ e_blk; } ;
typedef scalar_t__ e4fs_daddr_t ;
typedef scalar_t__ e2fs_daddr_t ;
struct TYPE_2__ {scalar_t__ e2fs_first_dblock; } ;


 int FUNC_0 (struct m_ext2fs*) ;
 scalar_t__ FUNC_1 (struct ext4_extent*) ;

__attribute__((used)) static e4fs_daddr_t
FUNC_2(struct inode *VAR_0, struct ext4_extent_path *VAR_1,
    e4fs_daddr_t VAR_2)
{
 struct m_ext2fs *VAR_3;
 struct ext4_extent *VAR_4;
 e4fs_daddr_t VAR_5;
 int VAR_6;

 VAR_3 = VAR_0->i_e2fs;

 if (VAR_1) {
  VAR_6 = VAR_1->ep_depth;
  VAR_4 = VAR_1[VAR_6].ep_ext;
  if (VAR_4) {
   e4fs_daddr_t VAR_7 = FUNC_1(VAR_4);
   e2fs_daddr_t VAR_8 = VAR_4->e_blk;

   if (VAR_2 > VAR_8)
    return (VAR_7 + (VAR_2 - VAR_8));
   else
    return (VAR_7 - (VAR_8 - VAR_2));
  }


  if (VAR_1[VAR_6].ep_data)
   return (VAR_1[VAR_6].ep_blk);
 }


 VAR_5 = (VAR_0->i_block_group * FUNC_0(VAR_0->i_e2fs)) +
     VAR_3->e2fs->e2fs_first_dblock;

 return (VAR_5 + VAR_2);
}
