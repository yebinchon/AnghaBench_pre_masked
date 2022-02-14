
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uio {int uio_resid; } ;
struct m_ext2fs {size_t e2fs_bsize; } ;
struct inode {int i_vnode; int i_facl; int i_blocks; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_header {scalar_t__ h_magic; int h_blocks; int h_refcount; struct ext2fs_extattr_entry* h_reserved; scalar_t__ h_hash; } ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct buf {size_t b_bufsize; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct buf*) ;
 struct ext2fs_extattr_header* FUNC_2 (struct buf*) ;
 int FUNC_3 (struct ext2fs_extattr_entry*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,size_t,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ,size_t) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,struct buf*) ;
 int FUNC_12 (struct inode*,struct buf*) ;
 int FUNC_13 (struct inode*,struct buf**) ;
 size_t FUNC_14 (struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,int,int,int ) ;
 int FUNC_15 (struct inode*,int,char const*) ;
 char* FUNC_16 (int ,int ,int*) ;
 char const* FUNC_17 (int,char const*) ;
 int FUNC_18 (struct ext2fs_extattr_header*,struct ext2fs_extattr_entry*) ;
 int FUNC_19 (scalar_t__,struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,scalar_t__,struct uio*) ;
 struct ext2fs_extattr_entry* FUNC_20 (scalar_t__,struct ext2fs_extattr_entry*,char const*,int,scalar_t__,struct uio*) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (struct m_ext2fs*,int ) ;
 struct buf* FUNC_23 (int ,int ,size_t,int ,int ,int ) ;
 int FUNC_24 (scalar_t__,struct ext2fs_extattr_header*,int) ;
 int FUNC_25 (struct ext2fs_extattr_entry*,int ,int) ;
 int FUNC_26 (char const*) ;
 scalar_t__ FUNC_27 (char const*,char const*,int) ;

int
FUNC_28(struct inode *VAR_7, int VAR_8,
    const char *VAR_9, struct uio *VAR_10)
{
 struct m_ext2fs *VAR_11;
 struct buf *VAR_12;
 struct ext2fs_extattr_header *VAR_13;
 struct ext2fs_extattr_entry *VAR_14;
 const char *VAR_15;
 int VAR_16;
 size_t VAR_17;
 int VAR_18;

 VAR_11 = VAR_7->i_e2fs;

 if (VAR_7->i_facl) {
  VAR_18 = FUNC_4(VAR_7->i_devvp, FUNC_22(VAR_11, VAR_7->i_facl),
      VAR_11->e2fs_bsize, VAR_6, &VAR_12);
  if (VAR_18) {
   return (VAR_18);
  }


  VAR_13 = FUNC_2(VAR_12);
  if (VAR_13->h_magic != VAR_5 || VAR_13->h_blocks != 1) {
   FUNC_5(VAR_12);
   return (VAR_0);
  }

  VAR_18 = FUNC_12(VAR_7, VAR_12);
  if (VAR_18) {
   FUNC_5(VAR_12);
   return (VAR_18);
  }

  if (VAR_13->h_refcount > 1) {
   VAR_18 = FUNC_13(VAR_7, &VAR_12);
   if (VAR_18) {
    FUNC_5(VAR_12);
    return (VAR_18);
   }

   VAR_13 = FUNC_2(VAR_12);
  }


  for (VAR_14 = FUNC_1(VAR_12); !FUNC_3(VAR_14);
      VAR_14 = FUNC_0(VAR_14)) {
   if (FUNC_10(VAR_14->e_name_index) !=
       VAR_8)
    continue;

   VAR_16 = VAR_14->e_name_len;
   VAR_15 = FUNC_16(VAR_14->e_name_index,
       VAR_14->e_name, &VAR_16);
   if (!VAR_15) {
    FUNC_5(VAR_12);
    return (VAR_4);
   }

   if (FUNC_26(VAR_9) == VAR_16 &&
       0 == FUNC_27(VAR_15, VAR_9, VAR_16))
    break;
  }

  if (!FUNC_3(VAR_14)) {
   VAR_17 = FUNC_14(FUNC_1(VAR_12), VAR_14,
       sizeof(struct ext2fs_extattr_header),
       VAR_14->e_name_len, VAR_10->uio_resid);
   if (VAR_17 > VAR_12->b_bufsize) {
    FUNC_5(VAR_12);
    return (VAR_3);
   }

   FUNC_19(VAR_12->b_data, FUNC_1(VAR_12),
       VAR_14, VAR_12->b_data + VAR_12->b_bufsize, VAR_10);
  } else {
   VAR_17 = FUNC_14(FUNC_1(VAR_12), ((void*)0),
       sizeof(struct ext2fs_extattr_header),
       FUNC_26(VAR_9), VAR_10->uio_resid);
   if (VAR_17 > VAR_12->b_bufsize) {
    FUNC_5(VAR_12);
    return (VAR_3);
   }

   VAR_14 = FUNC_20(VAR_12->b_data, FUNC_1(VAR_12),
       VAR_9, VAR_8, VAR_12->b_data + VAR_12->b_bufsize, VAR_10);


   VAR_18 = FUNC_15(VAR_7, VAR_8, VAR_9);
   if (VAR_18 && VAR_18 != VAR_2) {
    FUNC_5(VAR_12);
    return (VAR_18);
   }
  }

  FUNC_18(VAR_13, VAR_14);
  FUNC_11(VAR_7, VAR_12);

  return (FUNC_7(VAR_12));
 }

 VAR_17 = FUNC_14(((void*)0), ((void*)0),
     sizeof(struct ext2fs_extattr_header),
     FUNC_26(FUNC_17(VAR_8, VAR_9)), VAR_10->uio_resid);
 if (VAR_17 > VAR_11->e2fs_bsize)
  return (VAR_3);


 VAR_7->i_facl = FUNC_8(VAR_7);
 if (0 == VAR_7->i_facl)
  return (VAR_3);

 VAR_7->i_blocks += FUNC_6(VAR_11->e2fs_bsize);
 FUNC_21(VAR_7->i_vnode, 1);

 VAR_12 = FUNC_23(VAR_7->i_devvp, FUNC_22(VAR_11, VAR_7->i_facl), VAR_11->e2fs_bsize, 0, 0, 0);
 if (!VAR_12) {
  FUNC_9(VAR_7, VAR_7->i_facl, VAR_11->e2fs_bsize);
  VAR_7->i_blocks -= FUNC_6(VAR_11->e2fs_bsize);
  VAR_7->i_facl = 0;
  FUNC_21(VAR_7->i_vnode, 1);
  return (VAR_1);
 }

 VAR_13 = FUNC_2(VAR_12);
 VAR_13->h_magic = VAR_5;
 VAR_13->h_refcount = 1;
 VAR_13->h_blocks = 1;
 VAR_13->h_hash = 0;
 FUNC_25(VAR_13->h_reserved, 0, sizeof(VAR_13->h_reserved));
 FUNC_24(VAR_12->b_data, VAR_13, sizeof(struct ext2fs_extattr_header));
 FUNC_25(FUNC_1(VAR_12), 0, sizeof(uint32_t));

 VAR_14 = FUNC_20(VAR_12->b_data, FUNC_1(VAR_12),
     VAR_9, VAR_8, VAR_12->b_data + VAR_12->b_bufsize, VAR_10);


 VAR_18 = FUNC_15(VAR_7, VAR_8, VAR_9);
 if (VAR_18 && VAR_18 != VAR_2) {
  FUNC_5(VAR_12);
  return (VAR_18);
 }

 FUNC_18(VAR_13, VAR_14);
 FUNC_11(VAR_7, VAR_12);

 return (FUNC_7(VAR_12));
}
