
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udf_inode_info {scalar_t__ i_alloc_type; int i_unique; int i_location; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct nameidata {int dummy; } ;
struct TYPE_4__ {int * a_ops; } ;
struct inode {int i_mode; TYPE_2__* i_sb; int i_nlink; int * i_fop; int * i_op; TYPE_1__ i_data; } ;
struct TYPE_6__ {scalar_t__ impUse; int extLocation; void* extLength; } ;
struct fileIdentDesc {TYPE_3__ icb; } ;
struct dentry {int dummy; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_5__ {int s_blocksize; } ;


 scalar_t__ VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*) ;
 struct fileIdentDesc* FUNC_8 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_9 (struct inode*,int,int*) ;
 int FUNC_10 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_5, struct dentry *VAR_6, int VAR_7,
        struct nameidata *VAR_8)
{
 struct udf_fileident_bh VAR_9;
 struct inode *VAR_10;
 struct fileIdentDesc VAR_11, *VAR_12;
 int VAR_13;
 struct udf_inode_info *VAR_14;

 FUNC_6();
 VAR_10 = FUNC_9(VAR_5, VAR_7, &VAR_13);
 if (!VAR_10) {
  FUNC_11();
  return VAR_13;
 }

 VAR_14 = FUNC_0(VAR_10);
 if (VAR_14->i_alloc_type == VAR_0)
  VAR_10->i_data.a_ops = &VAR_1;
 else
  VAR_10->i_data.a_ops = &VAR_2;
 VAR_10->i_op = &VAR_3;
 VAR_10->i_fop = &VAR_4;
 VAR_10->i_mode = VAR_7;
 FUNC_7(VAR_10);

 VAR_12 = FUNC_8(VAR_5, VAR_6, &VAR_9, &VAR_11, &VAR_13);
 if (!VAR_12) {
  VAR_10->i_nlink--;
  FUNC_7(VAR_10);
  FUNC_5(VAR_10);
  FUNC_11();
  return VAR_13;
 }
 VAR_11.icb.extLength = FUNC_2(VAR_10->i_sb->s_blocksize);
 VAR_11.icb.extLocation = FUNC_3(VAR_14->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_11.icb.impUse)->impUse =
  FUNC_2(VAR_14->i_unique & 0x00000000FFFFFFFFUL);
 FUNC_10(VAR_5, &VAR_11, VAR_12, &VAR_9, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_5)->i_alloc_type == VAR_0)
  FUNC_7(VAR_5);
 if (VAR_9.sbh != VAR_9.ebh)
  FUNC_1(VAR_9.ebh);
 FUNC_1(VAR_9.sbh);
 FUNC_11();
 FUNC_4(VAR_6, VAR_10);

 return 0;
}
