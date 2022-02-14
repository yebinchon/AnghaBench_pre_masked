
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct logicalVolIntegrityDesc {scalar_t__ logicalVolContentsUse; } ;
struct logicalVolHeaderDesc {int uniqueID; } ;
struct inode {int i_nlink; int i_count; TYPE_2__* i_sb; int i_ctime; } ;
struct TYPE_6__ {scalar_t__ impUse; int extLocation; void* extLength; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct dentry {struct inode* d_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_9__ {scalar_t__ i_alloc_type; int i_location; } ;
struct TYPE_8__ {struct buffer_head* s_lvid_bh; } ;
struct TYPE_7__ {int s_blocksize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct inode*) ;
 struct fileIdentDesc* FUNC_14 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int FUNC_15 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct dentry *VAR_2, struct inode *VAR_3,
      struct dentry *VAR_4)
{
 struct inode *VAR_5 = VAR_2->d_inode;
 struct udf_fileident_bh VAR_6;
 struct fileIdentDesc VAR_7, *VAR_8;
 int VAR_9;
 struct buffer_head *VAR_10;

 FUNC_11();
 if (VAR_5->i_nlink >= (256 << sizeof(VAR_5->i_nlink)) - 1) {
  FUNC_16();
  return -VAR_0;
 }

 VAR_8 = FUNC_14(VAR_3, VAR_4, &VAR_6, &VAR_7, &VAR_9);
 if (!VAR_8) {
  FUNC_16();
  return VAR_9;
 }
 VAR_7.icb.extLength = FUNC_4(VAR_5->i_sb->s_blocksize);
 VAR_7.icb.extLocation = FUNC_6(FUNC_0(VAR_5)->i_location);
 VAR_10 = FUNC_1(VAR_5->i_sb)->s_lvid_bh;
 if (VAR_10) {
  struct logicalVolIntegrityDesc *VAR_11 =
    (struct logicalVolIntegrityDesc *)VAR_10->b_data;
  struct logicalVolHeaderDesc *VAR_12;
  uint64_t VAR_13;
  VAR_12 = (struct logicalVolHeaderDesc *)
    (VAR_11->logicalVolContentsUse);
  VAR_13 = FUNC_10(VAR_12->uniqueID);
  *(__le32 *)((struct allocDescImpUse *)VAR_7.icb.impUse)->impUse =
   FUNC_4(VAR_13 & 0x00000000FFFFFFFFUL);
  if (!(++VAR_13 & 0x00000000FFFFFFFFUL))
   VAR_13 += 16;
  VAR_12->uniqueID = FUNC_5(VAR_13);
  FUNC_12(VAR_10);
 }
 FUNC_15(VAR_3, &VAR_7, VAR_8, &VAR_6, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_3)->i_alloc_type == VAR_1)
  FUNC_13(VAR_3);

 if (VAR_6.sbh != VAR_6.ebh)
  FUNC_3(VAR_6.ebh);
 FUNC_3(VAR_6.sbh);
 FUNC_9(VAR_5);
 VAR_5->i_ctime = FUNC_7(VAR_5->i_sb);
 FUNC_13(VAR_5);
 FUNC_2(&VAR_5->i_count);
 FUNC_8(VAR_4, VAR_5);
 FUNC_16();

 return 0;
}
