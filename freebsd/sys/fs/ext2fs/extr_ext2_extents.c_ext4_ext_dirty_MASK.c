
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_flag; int i_vnode; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext4_extent_path {int ep_blk; scalar_t__ ep_data; } ;
struct buf {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ext4_extent_path*,struct buf*) ;
 int FUNC_4 (struct m_ext2fs*,int ) ;
 struct buf* FUNC_5 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_4, struct ext4_extent_path *VAR_5)
{
 struct m_ext2fs *VAR_6;
 struct buf *VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 VAR_6 = VAR_4->i_e2fs;

 if (!VAR_5)
  return (VAR_0);

 if (VAR_5->ep_data) {
  VAR_8 = VAR_5->ep_blk;
  VAR_7 = FUNC_5(VAR_4->i_devvp, FUNC_4(VAR_6, VAR_8),
      VAR_6->e2fs_bsize, 0, 0, 0);
  if (!VAR_7)
   return (VAR_1);
  FUNC_3(VAR_5, VAR_7);
  FUNC_1(VAR_4, VAR_7->b_data);
  VAR_9 = FUNC_0(VAR_7);
 } else {
  VAR_4->i_flag |= VAR_2 | VAR_3;
  VAR_9 = FUNC_2(VAR_4->i_vnode, 1);
 }

 return (VAR_9);
}
