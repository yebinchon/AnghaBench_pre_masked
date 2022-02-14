
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_facl; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_header {scalar_t__ h_magic; int h_blocks; } ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct buf*) ;
 struct ext2fs_extattr_header* FUNC_2 (struct buf*) ;
 int FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct buf*) ;
 char* FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct m_ext2fs*,int ) ;
 char* FUNC_11 (int,int ,int ) ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (char*,int,struct uio*) ;

int
FUNC_14(struct inode *VAR_6, int VAR_7,
    struct uio *VAR_8, size_t *VAR_9)
{
 struct m_ext2fs *VAR_10;
 struct buf *VAR_11;
 struct ext2fs_extattr_header *VAR_12;
 struct ext2fs_extattr_entry *VAR_13;
 const char *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_10 = VAR_6->i_e2fs;

 VAR_16 = FUNC_4(VAR_6->i_devvp, FUNC_10(VAR_10, VAR_6->i_facl),
     VAR_10->e2fs_bsize, VAR_5, &VAR_11);
 if (VAR_16) {
  return (VAR_16);
 }


 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12->h_magic != VAR_2 || VAR_12->h_blocks != 1) {
  FUNC_5(VAR_11);
  return (VAR_0);
 }

 VAR_16 = FUNC_7(VAR_6, VAR_11);
 if (VAR_16) {
  FUNC_5(VAR_11);
  return (VAR_16);
 }

 for (VAR_13 = FUNC_1(VAR_11); !FUNC_3(VAR_13);
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
   char *VAR_17 = FUNC_11(VAR_15 + 1, VAR_3, VAR_4);
   VAR_17[0] = VAR_15;
   FUNC_12(&VAR_17[1], VAR_14, VAR_15);
   VAR_16 = FUNC_13(VAR_17, VAR_15 + 1, VAR_8);
   FUNC_9(VAR_17, VAR_3);
   if (VAR_16)
    break;
  }
 }

 FUNC_5(VAR_11);

 return (VAR_16);
}
