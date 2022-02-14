
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_vnode; int i_facl; struct m_ext2fs* i_e2fs; int i_blocks; int i_devvp; } ;
struct ext2fs_extattr_header {scalar_t__ h_magic; int h_blocks; int h_refcount; } ;
struct buf {scalar_t__ b_bufsize; scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*) ;
 struct ext2fs_extattr_header* FUNC_1 (struct buf*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ,struct buf**) ;
 int FUNC_3 (struct buf*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct inode*,int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct m_ext2fs*,int ) ;

int FUNC_10(struct inode *VAR_3)
{
 struct m_ext2fs *VAR_4;
 struct buf *VAR_5;
 struct ext2fs_extattr_header *VAR_6;
 int VAR_7;

 VAR_4 = VAR_3->i_e2fs;

 if (!VAR_3->i_facl)
  return (0);

 VAR_7 = FUNC_2(VAR_3->i_devvp, FUNC_9(VAR_4, VAR_3->i_facl),
     VAR_4->e2fs_bsize, VAR_2, &VAR_5);
 if (VAR_7) {
  return (VAR_7);
 }


 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6->h_magic != VAR_1 || VAR_6->h_blocks != 1) {
  FUNC_3(VAR_5);
  return (VAR_0);
 }

 VAR_7 = FUNC_7(FUNC_0(VAR_5),
     VAR_5->b_data + VAR_5->b_bufsize);
 if (VAR_7) {
  FUNC_3(VAR_5);
  return (VAR_7);
 }

 if (VAR_6->h_refcount > 1) {
  VAR_6->h_refcount--;
  FUNC_5(VAR_5);
 } else {
  FUNC_6(VAR_3, VAR_3->i_facl, VAR_3->i_e2fs->e2fs_bsize);
  FUNC_3(VAR_5);
 }

 VAR_3->i_blocks -= FUNC_4(VAR_3->i_e2fs->e2fs_bsize);
 VAR_3->i_facl = 0;
 FUNC_8(VAR_3->i_vnode, 1);

 return (0);
}
