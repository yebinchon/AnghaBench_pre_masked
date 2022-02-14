
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct inode {int i_sb; int i_ino; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ntfs_inode ;
struct TYPE_11__ {TYPE_5__* attr; } ;
typedef TYPE_3__ ntfs_attr_search_ctx ;
struct TYPE_9__ {int value_length; int value_offset; } ;
struct TYPE_10__ {TYPE_1__ resident; } ;
struct TYPE_13__ {int non_resident; int length; TYPE_2__ data; } ;
struct TYPE_12__ {int parent_directory; } ;
typedef int MFT_RECORD ;
typedef TYPE_4__ FILE_NAME_ATTR ;
typedef TYPE_5__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 int * FUNC_3 (struct inode*) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int *,int ,int ,int ,int *,int ,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,unsigned long) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static struct dentry *FUNC_16(struct dentry *VAR_4)
{
 struct inode *VAR_5 = VAR_4->d_inode;
 ntfs_inode *VAR_6 = FUNC_3(VAR_5);
 MFT_RECORD *VAR_7;
 ntfs_attr_search_ctx *VAR_8;
 ATTR_RECORD *VAR_9;
 FILE_NAME_ATTR *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_11("Entering for inode 0x%lx.", VAR_5->i_ino);

 VAR_7 = FUNC_7(VAR_6);
 if (FUNC_1(VAR_7))
  return (struct dentry *)VAR_7;

 VAR_8 = FUNC_8(VAR_6, VAR_7);
 if (FUNC_14(!VAR_8)) {
  FUNC_15(VAR_6);
  return FUNC_0(-VAR_3);
 }
try_next:
 VAR_12 = FUNC_9(VAR_0, ((void*)0), 0, VAR_1, 0, ((void*)0),
   0, VAR_8);
 if (FUNC_14(VAR_12)) {
  FUNC_10(VAR_8);
  FUNC_15(VAR_6);
  if (VAR_12 == -VAR_2)
   FUNC_12(VAR_5->i_sb, "Inode 0x%lx does not have a "
     "file name attribute.  Run chkdsk.",
     VAR_5->i_ino);
  return FUNC_0(VAR_12);
 }
 VAR_9 = VAR_8->attr;
 if (FUNC_14(VAR_9->non_resident))
  goto try_next;
 VAR_10 = (FILE_NAME_ATTR *)((u8 *)VAR_9 +
   FUNC_5(VAR_9->data.resident.value_offset));
 if (FUNC_14((u8 *)VAR_10 + FUNC_6(VAR_9->data.resident.value_length) >
   (u8*)VAR_9 + FUNC_6(VAR_9->length)))
  goto try_next;

 VAR_11 = FUNC_2(VAR_10->parent_directory);

 FUNC_10(VAR_8);
 FUNC_15(VAR_6);

 return FUNC_4(FUNC_13(VAR_5->i_sb, VAR_11));
}
