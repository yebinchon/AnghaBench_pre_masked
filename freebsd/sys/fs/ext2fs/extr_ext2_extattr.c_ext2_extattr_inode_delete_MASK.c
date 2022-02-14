
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {scalar_t__ e2fs_bsize; } ;
struct inode {int i_number; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct ext2fs_extattr_dinode_header {scalar_t__ h_magic; } ;
struct ext2fs_dinode {int e2di_extra_isize; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct ext2fs_extattr_dinode_header*) ;
 int FUNC_2 (struct m_ext2fs*) ;
 scalar_t__ FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ext2fs_extattr_entry*,char*) ;
 int FUNC_9 (char*,struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,char*) ;
 char* FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (struct m_ext2fs*,int ) ;
 int FUNC_12 (struct m_ext2fs*,int ) ;
 int FUNC_13 (struct m_ext2fs*,int ) ;
 int FUNC_14 (struct ext2fs_extattr_dinode_header*,int ,int) ;
 int FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char const*,char const*,int) ;

int
FUNC_17(struct inode *VAR_5, int VAR_6, const char *VAR_7)
{
 struct m_ext2fs *VAR_8;
 struct buf *VAR_9;
 struct ext2fs_extattr_dinode_header *VAR_10;
 struct ext2fs_extattr_entry *VAR_11;
 const char *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = VAR_5->i_e2fs;

 if ((VAR_14 = FUNC_4(VAR_5->i_devvp,
     FUNC_11(VAR_8, FUNC_12(VAR_8, VAR_5->i_number)),
     (int)VAR_8->e2fs_bsize, VAR_4, &VAR_9)) != 0) {
  FUNC_5(VAR_9);
  return (VAR_14);
 }

 struct ext2fs_dinode *VAR_15 = (struct ext2fs_dinode *)
     ((char *)VAR_9->b_data +
     FUNC_2(VAR_8) * FUNC_13(VAR_8, VAR_5->i_number));


 VAR_10 = (struct ext2fs_extattr_dinode_header *)((char *)VAR_15 +
     VAR_0 + VAR_15->e2di_extra_isize);

 if (VAR_10->h_magic != VAR_3) {
  FUNC_5(VAR_9);
  return (VAR_1);
 }

 VAR_14 = FUNC_8(FUNC_1(VAR_10),
     (char *)VAR_15 + FUNC_2(VAR_8));
 if (VAR_14) {
  FUNC_5(VAR_9);
  return (VAR_14);
 }


 VAR_11 = FUNC_1(VAR_10);
 if ((FUNC_3(FUNC_0(VAR_11))) &&
     (FUNC_7(VAR_11->e_name_index) ==
     VAR_6)) {

  VAR_13 = VAR_11->e_name_len;
  VAR_12 = FUNC_10(VAR_11->e_name_index,
      VAR_11->e_name, &VAR_13);
  if (!VAR_12) {
   FUNC_5(VAR_9);
   return (VAR_2);
  }

  if (FUNC_15(VAR_7) == VAR_13 &&
      0 == FUNC_16(VAR_12, VAR_7, VAR_13)) {
   FUNC_14(VAR_10, 0, sizeof(struct ext2fs_extattr_dinode_header));

   return (FUNC_6(VAR_9));
  }
 }

 for (VAR_11 = FUNC_1(VAR_10); !FUNC_3(VAR_11);
     VAR_11 = FUNC_0(VAR_11)) {
  if (FUNC_7(VAR_11->e_name_index) !=
      VAR_6)
   continue;

  VAR_13 = VAR_11->e_name_len;
  VAR_12 = FUNC_10(VAR_11->e_name_index,
      VAR_11->e_name, &VAR_13);
  if (!VAR_12) {
   FUNC_5(VAR_9);
   return (VAR_2);
  }

  if (FUNC_15(VAR_7) == VAR_13 &&
      0 == FUNC_16(VAR_12, VAR_7, VAR_13)) {
   FUNC_9((char *)FUNC_1(VAR_10),
       FUNC_1(VAR_10), VAR_11,
       (char *)VAR_15 + FUNC_2(VAR_8));

   return (FUNC_6(VAR_9));
  }
 }

 FUNC_5(VAR_9);

 return (VAR_1);
}
