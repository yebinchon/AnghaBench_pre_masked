
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_vnode; scalar_t__ i_facl; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_header {scalar_t__ h_magic; int h_refcount; } ;
struct buf {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext2fs_extattr_header* FUNC_0 (struct buf*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct buf*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct m_ext2fs*,scalar_t__) ;
 struct buf* FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_4, struct buf **VAR_5)
{
 struct m_ext2fs *VAR_6;
 struct buf *VAR_7;
 struct buf *VAR_8;
 struct ext2fs_extattr_header *VAR_9;
 uint64_t VAR_10;

 VAR_6 = VAR_4->i_e2fs;
 VAR_7 = *VAR_5;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9->h_magic != VAR_3 || VAR_9->h_refcount == 1)
  return (VAR_0);

 VAR_10 = FUNC_2(VAR_4);
 if (!VAR_10)
  return (VAR_2);

 VAR_8 = FUNC_6(VAR_4->i_devvp, FUNC_5(VAR_6, VAR_10), VAR_6->e2fs_bsize, 0, 0, 0);
 if (!VAR_8) {
  FUNC_3(VAR_4, VAR_10, VAR_6->e2fs_bsize);
  return (VAR_1);
 }

 FUNC_7(VAR_8->b_data, VAR_7->b_data, VAR_6->e2fs_bsize);
 VAR_9->h_refcount--;
 FUNC_1(VAR_7);

 VAR_4->i_facl = VAR_10;
 FUNC_4(VAR_4->i_vnode, 1);

 VAR_9 = FUNC_0(VAR_8);
 VAR_9->h_refcount = 1;

 *VAR_5 = VAR_8;

 return (0);
}
