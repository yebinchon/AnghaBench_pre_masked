
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_inode_info {int i_unique; scalar_t__ i_alloc_type; int i_location; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct inode {TYPE_1__* i_sb; int i_nlink; int i_uid; } ;
struct TYPE_4__ {scalar_t__ impUse; int extLocation; void* extLength; } ;
struct fileIdentDesc {TYPE_2__ icb; } ;
struct dentry {int dummy; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef int dev_t ;
typedef void* __le32 ;
struct TYPE_3__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*,int,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;
 struct fileIdentDesc* FUNC_11 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 struct inode* FUNC_12 (struct inode*,int,int*) ;
 int FUNC_13 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
       dev_t VAR_6)
{
 struct inode *VAR_7;
 struct udf_fileident_bh VAR_8;
 struct fileIdentDesc VAR_9, *VAR_10;
 int VAR_11;
 struct udf_inode_info *VAR_12;

 if (!FUNC_10(VAR_6))
  return -VAR_0;

 FUNC_8();
 VAR_11 = -VAR_1;
 VAR_7 = FUNC_12(VAR_3, VAR_5, &VAR_11);
 if (!VAR_7)
  goto out;

 VAR_12 = FUNC_0(VAR_7);
 VAR_7->i_uid = FUNC_4();
 FUNC_6(VAR_7, VAR_5, VAR_6);
 VAR_10 = FUNC_11(VAR_3, VAR_4, &VAR_8, &VAR_9, &VAR_11);
 if (!VAR_10) {
  VAR_7->i_nlink--;
  FUNC_9(VAR_7);
  FUNC_7(VAR_7);
  FUNC_14();
  return VAR_11;
 }
 VAR_9.icb.extLength = FUNC_2(VAR_7->i_sb->s_blocksize);
 VAR_9.icb.extLocation = FUNC_3(VAR_12->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_9.icb.impUse)->impUse =
  FUNC_2(VAR_12->i_unique & 0x00000000FFFFFFFFUL);
 FUNC_13(VAR_3, &VAR_9, VAR_10, &VAR_8, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_3)->i_alloc_type == VAR_2)
  FUNC_9(VAR_3);
 FUNC_9(VAR_7);

 if (VAR_8.sbh != VAR_8.ebh)
  FUNC_1(VAR_8.ebh);
 FUNC_1(VAR_8.sbh);
 FUNC_5(VAR_4, VAR_7);
 VAR_11 = 0;

out:
 FUNC_14();
 return VAR_11;
}
