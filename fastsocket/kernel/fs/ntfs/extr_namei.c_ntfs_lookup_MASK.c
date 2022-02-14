
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct qstr {unsigned int len; TYPE_5__* name; int hash; } ;
struct nameidata {int dummy; } ;
struct TYPE_24__ {int len; int name; } ;
struct inode {TYPE_1__ d_name; int i_ino; int i_sb; } ;
struct dentry {TYPE_1__ d_name; int i_ino; int i_sb; } ;
typedef int ntfschar ;
struct TYPE_27__ {int sb; } ;
typedef TYPE_4__ ntfs_volume ;
struct TYPE_28__ {scalar_t__ type; int len; int name; } ;
typedef TYPE_5__ ntfs_name ;
struct TYPE_29__ {scalar_t__ seq_no; } ;
typedef TYPE_6__ ntfs_inode ;
struct TYPE_30__ {TYPE_9__* attr; } ;
typedef TYPE_7__ ntfs_attr_search_ctx ;
struct TYPE_25__ {int value_offset; int value_length; } ;
struct TYPE_26__ {TYPE_2__ resident; } ;
struct TYPE_32__ {TYPE_3__ data; int length; scalar_t__ flags; scalar_t__ non_resident; } ;
struct TYPE_31__ {scalar_t__ file_name_type; int file_name_length; int file_name; } ;
typedef int MFT_REF ;
typedef struct inode MFT_RECORD ;
typedef TYPE_8__ FILE_NAME_ATTR ;
typedef TYPE_9__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (int) ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 (struct inode*) ;
 TYPE_4__* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int *) ;
 struct inode* FUNC_10 (struct inode*,struct inode*,struct qstr*) ;
 struct inode* FUNC_11 (struct inode*,struct inode*) ;
 int FUNC_12 (TYPE_5__*,unsigned int) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int) ;
 struct inode* FUNC_20 (TYPE_6__*) ;
 TYPE_7__* FUNC_21 (TYPE_6__*,struct inode*) ;
 int FUNC_22 (int ,int *,int ,int ,int ,int *,int ,TYPE_7__*) ;
 int FUNC_23 (TYPE_7__*) ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (int ,char*,...) ;
 struct inode* FUNC_26 (int ,unsigned long) ;
 int FUNC_27 (TYPE_6__*,int *,int,TYPE_5__**) ;
 int VAR_8 ;
 int FUNC_28 (TYPE_4__*,int ,int ,int **) ;
 scalar_t__ FUNC_29 (TYPE_4__*,int *,int,unsigned char**,int ) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (TYPE_6__*) ;

__attribute__((used)) static struct dentry *FUNC_32(struct inode *VAR_9, struct dentry *VAR_10,
  struct nameidata *VAR_11)
{
 ntfs_volume *VAR_12 = FUNC_7(VAR_9->i_sb);
 struct inode *VAR_13;
 ntfschar *VAR_14;
 ntfs_name *VAR_15 = ((void*)0);
 MFT_REF VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 FUNC_24("Looking up %s in directory inode 0x%lx.",
   VAR_10->d_name.name, VAR_9->i_ino);

 VAR_18 = FUNC_28(VAR_12, VAR_10->d_name.name, VAR_10->d_name.len,
   &VAR_14);
 if (VAR_18 < 0) {
  if (VAR_18 != -VAR_2)
   FUNC_25(VAR_12->sb, "Failed to convert name to "
     "Unicode.");
  return FUNC_0(VAR_18);
 }
 VAR_16 = FUNC_27(FUNC_6(VAR_9), VAR_14, VAR_18,
   &VAR_15);
 FUNC_16(VAR_8, VAR_14);
 if (!FUNC_2(VAR_16)) {
  VAR_17 = FUNC_3(VAR_16);
  FUNC_24("Found inode 0x%lx. Calling ntfs_iget.", VAR_17);
  VAR_13 = FUNC_26(VAR_12->sb, VAR_17);
  if (FUNC_19(!FUNC_1(VAR_13))) {

   if (FUNC_14(VAR_13) || FUNC_5(VAR_16) ==
     FUNC_6(VAR_13)->seq_no ||
     VAR_17 == VAR_5) {

    if (!VAR_15) {
     FUNC_24("Done.  (Case 1.)");
     return FUNC_11(VAR_13, VAR_10);
    }




    goto handle_name;
   }
   FUNC_25(VAR_12->sb, "Found stale reference to inode "
     "0x%lx (reference sequence number = "
     "0x%x, inode sequence number = 0x%x), "
     "returning -EIO. Run chkdsk.",
     VAR_17, FUNC_5(VAR_16),
     FUNC_6(VAR_13)->seq_no);
   FUNC_13(VAR_13);
   VAR_13 = FUNC_0(-VAR_1);
  } else
   FUNC_25(VAR_12->sb, "ntfs_iget(0x%lx) failed with "
     "error code %li.", VAR_17,
     FUNC_8(VAR_13));
  FUNC_15(VAR_15);

  return (struct dentry *)VAR_13;
 }

 if (FUNC_4(VAR_16) == -VAR_3) {
  FUNC_24("Entry was not found, adding negative dentry.");

  FUNC_9(VAR_10, ((void*)0));
  FUNC_24("Done.");
  return ((void*)0);
 }
 FUNC_25(VAR_12->sb, "ntfs_lookup_ino_by_name() failed with error "
   "code %i.", -FUNC_4(VAR_16));
 return FUNC_0(FUNC_4(VAR_16));

handle_name:
   {
 MFT_RECORD *VAR_19;
 ntfs_attr_search_ctx *VAR_20;
 ntfs_inode *VAR_21 = FUNC_6(VAR_13);
 int VAR_22;
 struct qstr VAR_23;

 VAR_23.name = ((void*)0);
 if (VAR_15->type != VAR_6) {
  FUNC_24("Case 2.");
  VAR_23.len = (unsigned)FUNC_29(VAR_12,
    (ntfschar*)&VAR_15->name, VAR_15->len,
    (unsigned char**)&VAR_23.name, 0);
  FUNC_15(VAR_15);
 } else {
  FILE_NAME_ATTR *VAR_24;

  FUNC_24("Case 3.");
  FUNC_15(VAR_15);


  VAR_21 = FUNC_6(VAR_13);
  VAR_19 = FUNC_20(VAR_21);
  if (FUNC_1(VAR_19)) {
   VAR_22 = FUNC_8(VAR_19);
   VAR_19 = ((void*)0);
   VAR_20 = ((void*)0);
   goto err_out;
  }
  VAR_20 = FUNC_21(VAR_21, VAR_19);
  if (FUNC_30(!VAR_20)) {
   VAR_22 = -VAR_4;
   goto err_out;
  }
  do {
   ATTR_RECORD *VAR_25;
   u32 VAR_26;

   VAR_22 = FUNC_22(VAR_0, ((void*)0), 0, 0, 0,
     ((void*)0), 0, VAR_20);
   if (FUNC_30(VAR_22)) {
    FUNC_25(VAR_12->sb, "Inode corrupt: No WIN32 "
      "namespace counterpart to DOS "
      "file name. Run chkdsk.");
    if (VAR_22 == -VAR_3)
     VAR_22 = -VAR_1;
    goto err_out;
   }

   VAR_25 = VAR_20->attr;
   if (VAR_25->non_resident || VAR_25->flags)
    goto eio_err_out;
   VAR_26 = FUNC_18(VAR_25->data.resident.value_length);
   if (FUNC_17(VAR_25->data.resident.value_offset) +
     VAR_26 > FUNC_18(VAR_25->length))
    goto eio_err_out;
   VAR_24 = (FILE_NAME_ATTR*)((u8*)VAR_20->attr + FUNC_17(
     VAR_20->attr->data.resident.value_offset));
   if ((u32)(VAR_24->file_name_length * sizeof(ntfschar) +
     sizeof(FILE_NAME_ATTR)) > VAR_26)
    goto eio_err_out;
  } while (VAR_24->file_name_type != VAR_7);


  VAR_23.len = (unsigned)FUNC_29(VAR_12,
    (ntfschar*)&VAR_24->file_name, VAR_24->file_name_length,
    (unsigned char**)&VAR_23.name, 0);

  FUNC_23(VAR_20);
  FUNC_31(VAR_21);
 }
 VAR_19 = ((void*)0);
 VAR_20 = ((void*)0);


 if ((signed)VAR_23.len < 0) {
  VAR_22 = (signed)VAR_23.len;
  goto err_out;
 }
 VAR_23.hash = FUNC_12(VAR_23.name, VAR_23.len);

 VAR_10 = FUNC_10(VAR_10, VAR_13, &VAR_23);
 FUNC_15(VAR_23.name);
 return VAR_10;

eio_err_out:
 FUNC_25(VAR_12->sb, "Illegal file name attribute. Run chkdsk.");
 VAR_22 = -VAR_1;
err_out:
 if (VAR_20)
  FUNC_23(VAR_20);
 if (VAR_19)
  FUNC_31(VAR_21);
 FUNC_13(VAR_13);
 FUNC_25(VAR_12->sb, "Failed, returning error code %i.", VAR_22);
 return FUNC_0(VAR_22);
   }
}
