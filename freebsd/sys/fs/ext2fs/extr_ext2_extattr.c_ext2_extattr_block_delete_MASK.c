
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_vnode; int i_facl; int i_blocks; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_header {scalar_t__ h_magic; int h_blocks; int h_refcount; } ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct buf {scalar_t__ b_bufsize; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct buf*) ;
 struct ext2fs_extattr_header* FUNC_2 (struct buf*) ;
 scalar_t__ FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct inode*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,struct buf*) ;
 int FUNC_11 (struct inode*,struct buf**) ;
 int FUNC_12 (scalar_t__,struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,scalar_t__) ;
 char* FUNC_13 (int ,int ,int*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct m_ext2fs*,int ) ;
 int FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (char const*,char const*,int) ;

int
FUNC_18(struct inode *VAR_5, int VAR_6, const char *VAR_7)
{
 struct m_ext2fs *VAR_8;
 struct buf *VAR_9;
 struct ext2fs_extattr_header *VAR_10;
 struct ext2fs_extattr_entry *VAR_11;
 const char *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = VAR_5->i_e2fs;

 VAR_14 = FUNC_4(VAR_5->i_devvp, FUNC_15(VAR_8, VAR_5->i_facl),
     VAR_8->e2fs_bsize, VAR_4, &VAR_9);
 if (VAR_14) {
  return (VAR_14);
 }


 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10->h_magic != VAR_3 || VAR_10->h_blocks != 1) {
  FUNC_5(VAR_9);
  return (VAR_0);
 }

 VAR_14 = FUNC_10(VAR_5, VAR_9);
 if (VAR_14) {
  FUNC_5(VAR_9);
  return (VAR_14);
 }

 if (VAR_10->h_refcount > 1) {
  VAR_14 = FUNC_11(VAR_5, &VAR_9);
  if (VAR_14) {
   FUNC_5(VAR_9);
   return (VAR_14);
  }
 }


 VAR_11 = FUNC_1(VAR_9);
 if (FUNC_3(FUNC_0(VAR_11)) &&
     (FUNC_9(VAR_11->e_name_index) ==
     VAR_6)) {

  VAR_13 = VAR_11->e_name_len;
  VAR_12 = FUNC_13(VAR_11->e_name_index,
      VAR_11->e_name, &VAR_13);
  if (!VAR_12) {
   FUNC_5(VAR_9);
   return (VAR_2);
  }

  if (FUNC_16(VAR_7) == VAR_13 &&
      0 == FUNC_17(VAR_12, VAR_7, VAR_13)) {
   VAR_5->i_blocks -= FUNC_6(VAR_8->e2fs_bsize);
   FUNC_8(VAR_5, VAR_5->i_facl, VAR_8->e2fs_bsize);
   VAR_5->i_facl = 0;
   VAR_14 = FUNC_14(VAR_5->i_vnode, 1);

   FUNC_5(VAR_9);
   return (VAR_14);
  }
 }

 for (VAR_11 = FUNC_1(VAR_9); !FUNC_3(VAR_11);
     VAR_11 = FUNC_0(VAR_11)) {
  if (FUNC_9(VAR_11->e_name_index) !=
      VAR_6)
   continue;

  VAR_13 = VAR_11->e_name_len;
  VAR_12 = FUNC_13(VAR_11->e_name_index,
      VAR_11->e_name, &VAR_13);
  if (!VAR_12) {
   FUNC_5(VAR_9);
   return (VAR_2);
  }

  if (FUNC_16(VAR_7) == VAR_13 &&
      0 == FUNC_17(VAR_12, VAR_7, VAR_13)) {
   FUNC_12(VAR_9->b_data,
       FUNC_1(VAR_9), VAR_11,
       VAR_9->b_data + VAR_9->b_bufsize);

   return (FUNC_7(VAR_9));
  }
 }

 FUNC_5(VAR_9);

 return (VAR_1);
}
