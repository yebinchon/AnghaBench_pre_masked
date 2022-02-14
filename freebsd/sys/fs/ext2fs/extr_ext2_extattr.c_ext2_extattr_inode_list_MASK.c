
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_bsize; } ;
struct inode {int i_number; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct ext2fs_extattr_dinode_header {scalar_t__ h_magic; } ;
struct ext2fs_dinode {int e2di_extra_isize; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct ext2fs_extattr_dinode_header*) ;
 int FUNC_2 (struct m_ext2fs*) ;
 int FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ext2fs_extattr_entry*,char*) ;
 char* FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct m_ext2fs*,int ) ;
 int FUNC_11 (struct m_ext2fs*,int ) ;
 int FUNC_12 (struct m_ext2fs*,int ) ;
 char* FUNC_13 (int,int ,int ) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (char*,int,struct uio*) ;

int
FUNC_16(struct inode *VAR_6, int VAR_7,
    struct uio *VAR_8, size_t *VAR_9)
{
 struct m_ext2fs *VAR_10;
 struct buf *VAR_11;
 struct ext2fs_extattr_dinode_header *VAR_12;
 struct ext2fs_extattr_entry *VAR_13;
 const char *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_10 = VAR_6->i_e2fs;

 if ((VAR_16 = FUNC_4(VAR_6->i_devvp,
     FUNC_10(VAR_10, FUNC_11(VAR_10, VAR_6->i_number)),
     (int)VAR_10->e2fs_bsize, VAR_5, &VAR_11)) != 0) {
  FUNC_5(VAR_11);
  return (VAR_16);
 }

 struct ext2fs_dinode *VAR_17 = (struct ext2fs_dinode *)
     ((char *)VAR_11->b_data +
     FUNC_2(VAR_10) * FUNC_12(VAR_10, VAR_6->i_number));


 VAR_12 = (struct ext2fs_extattr_dinode_header *)((char *)VAR_17 +
     VAR_0 + VAR_17->e2di_extra_isize);

 if (VAR_12->h_magic != VAR_2) {
  FUNC_5(VAR_11);
  return (0);
 }

 VAR_16 = FUNC_7(FUNC_1(VAR_12),
     (char *)VAR_17 + FUNC_2(VAR_10));
 if (VAR_16) {
  FUNC_5(VAR_11);
  return (VAR_16);
 }

 for (VAR_13 = FUNC_1(VAR_12); !FUNC_3(VAR_13);
     VAR_13 = FUNC_0(VAR_13)) {
  if (FUNC_6(VAR_13->e_name_index) !=
      VAR_7)
   continue;

  VAR_15 = VAR_13->e_name_len;
  VAR_14 = FUNC_8(VAR_13->e_name_index,
      VAR_13->e_name, &VAR_15);
  if (!VAR_14) {
   FUNC_5(VAR_11);
   return (VAR_1);
  }

  if (VAR_9 != ((void*)0))
   *VAR_9 += VAR_15 + 1;

  if (VAR_8 != ((void*)0)) {
   char *VAR_18 = FUNC_13(VAR_15 + 1, VAR_3, VAR_4);
   VAR_18[0] = VAR_15;
   FUNC_14(&VAR_18[1], VAR_14, VAR_15);
   VAR_16 = FUNC_15(VAR_18, VAR_15 + 1, VAR_8);
   FUNC_9(VAR_18, VAR_3);
   if (VAR_16)
    break;
  }
 }

 FUNC_5(VAR_11);

 return (VAR_16);
}
