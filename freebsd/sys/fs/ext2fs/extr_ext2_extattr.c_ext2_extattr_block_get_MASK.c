
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_facl; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_header {scalar_t__ h_magic; int h_blocks; } ;
struct ext2fs_extattr_entry {int e_name_len; size_t e_value_size; scalar_t__ e_value_offs; int e_name; int e_name_index; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct buf*) ;
 struct ext2fs_extattr_header* FUNC_2 (struct buf*) ;
 int FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct buf*) ;
 char* FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (struct m_ext2fs*,int ) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char const*,int) ;
 int FUNC_12 (scalar_t__,size_t,struct uio*) ;

int
FUNC_13(struct inode *VAR_5, int VAR_6,
    const char *VAR_7, struct uio *VAR_8, size_t *VAR_9)
{
 struct m_ext2fs *VAR_10;
 struct buf *VAR_11;
 struct ext2fs_extattr_header *VAR_12;
 struct ext2fs_extattr_entry *VAR_13;
 const char *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_10 = VAR_5->i_e2fs;

 VAR_16 = FUNC_4(VAR_5->i_devvp, FUNC_9(VAR_10, VAR_5->i_facl),
     VAR_10->e2fs_bsize, VAR_4, &VAR_11);
 if (VAR_16) {
  return (VAR_16);
 }


 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12->h_magic != VAR_3 || VAR_12->h_blocks != 1) {
  FUNC_5(VAR_11);
  return (VAR_0);
 }

 VAR_16 = FUNC_7(VAR_5, VAR_11);
 if (VAR_16) {
  FUNC_5(VAR_11);
  return (VAR_16);
 }

 for (VAR_13 = FUNC_1(VAR_11); !FUNC_3(VAR_13);
     VAR_13 = FUNC_0(VAR_13)) {
  if (FUNC_6(VAR_13->e_name_index) !=
      VAR_6)
   continue;

  VAR_15 = VAR_13->e_name_len;
  VAR_14 = FUNC_8(VAR_13->e_name_index,
      VAR_13->e_name, &VAR_15);
  if (!VAR_14) {
   FUNC_5(VAR_11);
   return (VAR_2);
  }

  if (FUNC_10(VAR_7) == VAR_15 &&
      0 == FUNC_11(VAR_14, VAR_7, VAR_15)) {
   if (VAR_9 != ((void*)0))
    *VAR_9 += VAR_13->e_value_size;

   if (VAR_8 != ((void*)0))
    VAR_16 = FUNC_12(VAR_11->b_data + VAR_13->e_value_offs,
        VAR_13->e_value_size, VAR_8);

   FUNC_5(VAR_11);
   return (VAR_16);
  }
  }

 FUNC_5(VAR_11);

 return (VAR_1);
}
