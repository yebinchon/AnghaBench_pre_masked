
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vnlock; struct inode* v_data; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_bsize; } ;
struct inode {int i_flag; scalar_t__* i_db; int i_size; int i_mode; scalar_t__ i_next_alloc_goal; scalar_t__ i_next_alloc_block; int i_block_group; int i_number; struct ext2mount* i_ump; struct m_ext2fs* i_e2fs; struct vnode* i_vnode; } ;
struct ext2mount {int um_devvp; struct m_ext2fs* um_e2fs; } ;
struct ext2fs_dinode {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
typedef int ino_t ;


 int FUNC_0 (struct m_ext2fs*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ext2mount* FUNC_3 (struct mount*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (int ,int ,int,int ,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 struct thread* VAR_7 ;
 int FUNC_7 (struct ext2fs_dinode*,struct inode*) ;
 int VAR_8 ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct mount*,int *,struct vnode**) ;
 int VAR_9 ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct m_ext2fs*,int ) ;
 int FUNC_13 (char*,struct mount*,int *,struct vnode**) ;
 unsigned int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (struct m_ext2fs*,int ) ;
 int FUNC_16 (struct m_ext2fs*,int ) ;
 int FUNC_17 (struct m_ext2fs*,int ) ;
 int FUNC_18 (struct vnode*,struct mount*) ;
 int FUNC_19 (int ,int ,int *) ;
 struct inode* FUNC_20 (int,int ,int) ;
 int FUNC_21 (struct mount*,int ,int,struct thread*,struct vnode**,int *,int *) ;
 int FUNC_22 (struct vnode*,int ,int,struct thread*,struct vnode**,int *,int *) ;
 int FUNC_23 (struct vnode*) ;

__attribute__((used)) static int
FUNC_24(struct mount *VAR_10, ino_t VAR_11, int VAR_12, struct vnode **VAR_13)
{
 struct m_ext2fs *VAR_14;
 struct inode *VAR_15;
 struct ext2mount *VAR_16;
 struct buf *VAR_17;
 struct vnode *VAR_18;
 struct thread *VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22;

 VAR_19 = VAR_7;
 VAR_22 = FUNC_21(VAR_10, VAR_11, VAR_12, VAR_19, VAR_13, ((void*)0), ((void*)0));
 if (VAR_22 || *VAR_13 != ((void*)0))
  return (VAR_22);

 VAR_16 = FUNC_3(VAR_10);
 VAR_15 = FUNC_20(sizeof(struct inode), VAR_3, VAR_4 | VAR_5);


 if ((VAR_22 = FUNC_13("ext2fs", VAR_10, &VAR_9, &VAR_18)) != 0) {
  *VAR_13 = ((void*)0);
  FUNC_11(VAR_15, VAR_3);
  return (VAR_22);
 }
 VAR_18->v_data = VAR_15;
 VAR_15->i_vnode = VAR_18;
 VAR_15->i_e2fs = VAR_14 = VAR_16->um_e2fs;
 VAR_15->i_ump = VAR_16;
 VAR_15->i_number = VAR_11;

 FUNC_19(VAR_18->v_vnlock, VAR_2, ((void*)0));
 VAR_22 = FUNC_18(VAR_18, VAR_10);
 if (VAR_22 != 0) {
  FUNC_11(VAR_15, VAR_3);
  *VAR_13 = ((void*)0);
  return (VAR_22);
 }
 VAR_22 = FUNC_22(VAR_18, VAR_11, VAR_12, VAR_19, VAR_13, ((void*)0), ((void*)0));
 if (VAR_22 || *VAR_13 != ((void*)0))
  return (VAR_22);


 if ((VAR_22 = FUNC_5(VAR_16->um_devvp, FUNC_12(VAR_14, FUNC_16(VAR_14, VAR_11)),
     (int)VAR_14->e2fs_bsize, VAR_6, &VAR_17)) != 0) {






  FUNC_6(VAR_17);
  FUNC_23(VAR_18);
  *VAR_13 = ((void*)0);
  return (VAR_22);
 }

 VAR_22 = FUNC_7((struct ext2fs_dinode *)((char *)VAR_17->b_data +
     FUNC_0(VAR_14) * FUNC_17(VAR_14, VAR_11)), VAR_15);
 if (VAR_22) {
  FUNC_6(VAR_17);
  FUNC_23(VAR_18);
  *VAR_13 = ((void*)0);
  return (VAR_22);
 }
 VAR_15->i_block_group = FUNC_15(VAR_14, VAR_11);
 VAR_15->i_next_alloc_block = 0;
 VAR_15->i_next_alloc_goal = 0;
 if (!(VAR_15->i_flag & VAR_1) &&
     (FUNC_1(VAR_15->i_mode) || FUNC_2(VAR_15->i_mode))) {
  VAR_21 = FUNC_14(VAR_15->i_size, VAR_14->e2fs_bsize);
  for (VAR_20 = VAR_21; VAR_20 < VAR_0; VAR_20++)
   VAR_15->i_db[VAR_20] = 0;
 }




 FUNC_4(VAR_17);





 if ((VAR_22 = FUNC_9(VAR_10, &VAR_8, &VAR_18)) != 0) {
  FUNC_23(VAR_18);
  *VAR_13 = ((void*)0);
  return (VAR_22);
 }





 *VAR_13 = VAR_18;
 return (0);
}
