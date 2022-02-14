
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct m_ext2fs {scalar_t__ e2fs_bsize; } ;
struct inode {scalar_t__ i_facl; int i_number; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct ext2fs_extattr_dinode_header {scalar_t__ h_magic; } ;
struct ext2fs_dinode {int e2di_extra_isize; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct ext2fs_extattr_dinode_header*) ;
 int FUNC_2 (struct m_ext2fs*) ;
 int FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,int,char const*,int *,size_t*) ;
 int FUNC_9 (struct ext2fs_extattr_entry*,char*) ;
 size_t FUNC_10 (struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,int,int,int ) ;
 char* FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (char*,struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,char*,struct uio*) ;
 int FUNC_13 (char*,struct ext2fs_extattr_entry*,char const*,int,char*,struct uio*) ;
 int FUNC_14 (struct m_ext2fs*,int ) ;
 int FUNC_15 (struct m_ext2fs*,int ) ;
 int FUNC_16 (struct m_ext2fs*,int ) ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char const*,char const*,int) ;

int
FUNC_19(struct inode *VAR_6, int VAR_7,
    const char *VAR_8, struct uio *VAR_9)
{
 struct m_ext2fs *VAR_10;
 struct buf *VAR_11;
 struct ext2fs_extattr_dinode_header *VAR_12;
 struct ext2fs_extattr_entry *VAR_13;
 const char *VAR_14;
 int VAR_15;
 size_t VAR_16 = 0, VAR_17;
 int VAR_18;

 VAR_10 = VAR_6->i_e2fs;

 if ((VAR_18 = FUNC_4(VAR_6->i_devvp,
     FUNC_14(VAR_10, FUNC_15(VAR_10, VAR_6->i_number)),
     (int)VAR_10->e2fs_bsize, VAR_5, &VAR_11)) != 0) {
  FUNC_5(VAR_11);
  return (VAR_18);
 }

 struct ext2fs_dinode *VAR_19 = (struct ext2fs_dinode *)
     ((char *)VAR_11->b_data +
     FUNC_2(VAR_10) * FUNC_16(VAR_10, VAR_6->i_number));


 VAR_12 = (struct ext2fs_extattr_dinode_header *)((char *)VAR_19 +
     VAR_0 + VAR_19->e2di_extra_isize);

 if (VAR_12->h_magic != VAR_4) {
  FUNC_5(VAR_11);
  return (VAR_2);
 }

 VAR_18 = FUNC_9(FUNC_1(VAR_12), (char *)VAR_19 +
     FUNC_2(VAR_10));
 if (VAR_18) {
  FUNC_5(VAR_11);
  return (VAR_18);
 }


 for (VAR_13 = FUNC_1(VAR_12); !FUNC_3(VAR_13);
     VAR_13 = FUNC_0(VAR_13)) {
  if (FUNC_7(VAR_13->e_name_index) !=
      VAR_7)
   continue;

  VAR_15 = VAR_13->e_name_len;
  VAR_14 = FUNC_11(VAR_13->e_name_index,
      VAR_13->e_name, &VAR_15);
  if (!VAR_14) {
   FUNC_5(VAR_11);
   return (VAR_3);
  }

  if (FUNC_17(VAR_8) == VAR_15 &&
      0 == FUNC_18(VAR_14, VAR_8, VAR_15))
   break;
 }

 VAR_17 = FUNC_2(VAR_10) - VAR_0 -
     VAR_19->e2di_extra_isize;

 if (!FUNC_3(VAR_13)) {
  VAR_16 = FUNC_10(FUNC_1(VAR_12), VAR_13,
      sizeof(struct ext2fs_extattr_dinode_header),
      VAR_13->e_name_len, VAR_9->uio_resid);
  if (VAR_16 > VAR_17) {
   FUNC_5(VAR_11);
   return (VAR_2);
  }

  FUNC_12((char *)FUNC_1(VAR_12),
      FUNC_1(VAR_12), VAR_13, (char *)VAR_12 + VAR_17, VAR_9);
 } else {

  if (VAR_6->i_facl) {
   VAR_18 = FUNC_8(VAR_6, VAR_7, VAR_8,
       ((void*)0), &VAR_16);
   if (VAR_18 != VAR_1 || VAR_16 > 0) {
    FUNC_5(VAR_11);
    if (VAR_16 > 0)
     VAR_18 = VAR_2;

    return (VAR_18);
   }
  }

  VAR_16 = FUNC_10(FUNC_1(VAR_12), ((void*)0),
      sizeof(struct ext2fs_extattr_dinode_header),
      VAR_13->e_name_len, VAR_9->uio_resid);
  if (VAR_16 > VAR_17) {
   FUNC_5(VAR_11);
   return (VAR_2);
  }

  FUNC_13((char *)FUNC_1(VAR_12),
      FUNC_1(VAR_12), VAR_8, VAR_7,
      (char *)VAR_12 + VAR_17, VAR_9);
 }

 return (FUNC_6(VAR_11));
}
