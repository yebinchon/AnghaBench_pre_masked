
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct buf {int b_blkno; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vnode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*,int ,int ,int ,struct buf**) ;
 int FUNC_2 (struct inode*,int ,int,struct ucred*,int *,int*,int *) ;
 int FUNC_3 (struct m_ext2fs*,int ) ;
 struct buf* FUNC_4 (struct vnode*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct buf*) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, uint32_t VAR_4, int VAR_5,
    struct ucred *VAR_6, struct buf **VAR_7, int VAR_8)
{
 struct m_ext2fs *VAR_9;
 struct buf *VAR_10 = ((void*)0);
 struct vnode *VAR_11 = FUNC_0(VAR_3);
 daddr_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_9 = VAR_3->i_e2fs;
 VAR_13 = FUNC_5(VAR_5, VAR_9->e2fs_bsize);

 VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_13, VAR_6, ((void*)0), &VAR_15, &VAR_12);
 if (VAR_14)
  return (VAR_14);

 if (VAR_15) {
  VAR_10 = FUNC_4(VAR_11, VAR_4, VAR_9->e2fs_bsize, 0, 0, 0);
  if(!VAR_10)
   return (VAR_1);
 } else {
  VAR_14 = FUNC_1(VAR_11, VAR_4, VAR_9->e2fs_bsize, VAR_2, &VAR_10);
  if (VAR_14) {
   return (VAR_14);
  }
 }


 VAR_10->b_blkno = FUNC_3(VAR_9, VAR_12);
 if (VAR_8 & VAR_0)
  FUNC_6(VAR_10);

 *VAR_7 = VAR_10;

 return (VAR_14);
}
