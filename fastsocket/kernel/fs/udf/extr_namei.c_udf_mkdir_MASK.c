
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_inode_info {int i_unique; int i_location; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct inode {int i_nlink; int i_mode; TYPE_1__* i_sb; int * i_fop; int * i_op; } ;
struct TYPE_4__ {scalar_t__ impUse; void* extLocation; void* extLength; } ;
struct fileIdentDesc {int fileCharacteristics; TYPE_2__ icb; } ;
struct dentry {int dummy; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_3__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct inode*) ;
 struct fileIdentDesc* FUNC_9 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_10 (struct inode*,int,int*) ;
 int FUNC_11 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_8, struct dentry *VAR_9, int VAR_10)
{
 struct inode *VAR_11;
 struct udf_fileident_bh VAR_12;
 struct fileIdentDesc VAR_13, *VAR_14;
 int VAR_15;
 struct udf_inode_info *VAR_16 = FUNC_0(VAR_8);
 struct udf_inode_info *VAR_17;

 FUNC_7();
 VAR_15 = -VAR_1;
 if (VAR_8->i_nlink >= (256 << sizeof(VAR_8->i_nlink)) - 1)
  goto out;

 VAR_15 = -VAR_0;
 VAR_11 = FUNC_10(VAR_8, VAR_4, &VAR_15);
 if (!VAR_11)
  goto out;

 VAR_17 = FUNC_0(VAR_11);
 VAR_11->i_op = &VAR_6;
 VAR_11->i_fop = &VAR_7;
 VAR_14 = FUNC_9(VAR_11, ((void*)0), &VAR_12, &VAR_13, &VAR_15);
 if (!VAR_14) {
  VAR_11->i_nlink--;
  FUNC_8(VAR_11);
  FUNC_6(VAR_11);
  goto out;
 }
 VAR_11->i_nlink = 2;
 VAR_13.icb.extLength = FUNC_2(VAR_11->i_sb->s_blocksize);
 VAR_13.icb.extLocation = FUNC_3(VAR_16->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_13.icb.impUse)->impUse =
  FUNC_2(VAR_16->i_unique & 0x00000000FFFFFFFFUL);
 VAR_13.fileCharacteristics =
   VAR_2 | VAR_3;
 FUNC_11(VAR_11, &VAR_13, VAR_14, &VAR_12, ((void*)0), ((void*)0));
 FUNC_1(VAR_12.sbh);
 VAR_11->i_mode = VAR_4 | VAR_10;
 if (VAR_8->i_mode & VAR_5)
  VAR_11->i_mode |= VAR_5;
 FUNC_8(VAR_11);

 VAR_14 = FUNC_9(VAR_8, VAR_9, &VAR_12, &VAR_13, &VAR_15);
 if (!VAR_14) {
  VAR_11->i_nlink = 0;
  FUNC_8(VAR_11);
  FUNC_6(VAR_11);
  goto out;
 }
 VAR_13.icb.extLength = FUNC_2(VAR_11->i_sb->s_blocksize);
 VAR_13.icb.extLocation = FUNC_3(VAR_17->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_13.icb.impUse)->impUse =
  FUNC_2(VAR_17->i_unique & 0x00000000FFFFFFFFUL);
 VAR_13.fileCharacteristics |= VAR_2;
 FUNC_11(VAR_8, &VAR_13, VAR_14, &VAR_12, ((void*)0), ((void*)0));
 FUNC_5(VAR_8);
 FUNC_8(VAR_8);
 FUNC_4(VAR_9, VAR_11);
 if (VAR_12.sbh != VAR_12.ebh)
  FUNC_1(VAR_12.ebh);
 FUNC_1(VAR_12.sbh);
 VAR_15 = 0;

out:
 FUNC_12();
 return VAR_15;
}
