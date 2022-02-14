
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_location; scalar_t__ i_efe; TYPE_1__ i_ext; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_nlink; TYPE_2__* i_sb; void* i_mtime; void* i_ctime; int i_mode; } ;
struct TYPE_8__ {int extLocation; } ;
struct fileIdentDesc {int lengthOfImpUse; TYPE_3__ icb; int fileCharacteristics; int fileVersionNum; } ;
struct fileEntry {int dummy; } ;
struct extendedFileEntry {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_7__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ) ;
 struct kernel_lb_addr FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct buffer_head*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (TYPE_3__*,TYPE_3__*,int) ;
 struct fileIdentDesc* FUNC_14 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 struct buffer_head* FUNC_15 (struct inode*,int ,int ,int*) ;
 int FUNC_16 (struct inode*,struct fileIdentDesc*,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 int FUNC_17 (struct inode*) ;
 struct fileIdentDesc* FUNC_18 (struct inode*,int *,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 struct fileIdentDesc* FUNC_19 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,struct kernel_lb_addr*,int ) ;
 int FUNC_21 (char*,int) ;
 int FUNC_22 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 int FUNC_23 () ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_5, struct dentry *VAR_6,
        struct inode *VAR_7, struct dentry *VAR_8)
{
 struct inode *VAR_9 = VAR_6->d_inode;
 struct inode *VAR_10 = VAR_8->d_inode;
 struct udf_fileident_bh VAR_11, VAR_12;
 struct fileIdentDesc *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct fileIdentDesc VAR_16, VAR_17;
 struct buffer_head *VAR_18 = ((void*)0);
 int VAR_19 = -VAR_2;
 struct kernel_lb_addr VAR_20;
 struct udf_inode_info *VAR_21 = FUNC_1(VAR_9);

 FUNC_10();
 VAR_13 = FUNC_18(VAR_5, &VAR_6->d_name, &VAR_11, &VAR_16);
 if (VAR_13) {
  if (VAR_11.sbh != VAR_11.ebh)
   FUNC_2(VAR_11.ebh);
  FUNC_2(VAR_11.sbh);
 }
 VAR_20 = FUNC_9(VAR_16.icb.extLocation);
 if (!VAR_13 || FUNC_20(VAR_5->i_sb, &VAR_20, 0)
     != VAR_9->i_ino)
  goto end_rename;

 VAR_14 = FUNC_18(VAR_7, &VAR_8->d_name, &VAR_12, &VAR_17);
 if (VAR_14) {
  if (!VAR_10) {
   if (VAR_12.sbh != VAR_12.ebh)
    FUNC_2(VAR_12.ebh);
   FUNC_2(VAR_12.sbh);
   VAR_14 = ((void*)0);
  }
 }
 if (FUNC_0(VAR_9->i_mode)) {
  int VAR_22 = FUNC_17(VAR_9);

  if (VAR_10) {
   VAR_19 = -VAR_3;
   if (!FUNC_5(VAR_10))
    goto end_rename;
  }
  VAR_19 = -VAR_0;
  if (VAR_21->i_alloc_type == VAR_4) {
   VAR_15 = FUNC_19(
     VAR_21->i_ext.i_data -
       (VAR_21->i_efe ?
        sizeof(struct extendedFileEntry) :
        sizeof(struct fileEntry)),
     VAR_9->i_sb->s_blocksize, &VAR_22);
  } else {
   VAR_18 = FUNC_15(VAR_9, 0, 0, &VAR_19);
   if (!VAR_18)
    goto end_rename;
   VAR_15 = FUNC_19(VAR_18->b_data,
     VAR_9->i_sb->s_blocksize, &VAR_22);
  }
  if (!VAR_15)
   goto end_rename;
  VAR_20 = FUNC_9(VAR_15->icb.extLocation);
  if (FUNC_20(VAR_9->i_sb, &VAR_20, 0) !=
    VAR_5->i_ino)
   goto end_rename;

  VAR_19 = -VAR_1;
  if (!VAR_10 &&
   VAR_7->i_nlink >=
    (256 << sizeof(VAR_7->i_nlink)) - 1)
   goto end_rename;
 }
 if (!VAR_14) {
  VAR_14 = FUNC_14(VAR_7, VAR_8, &VAR_12, &VAR_17,
        &VAR_19);
  if (!VAR_14)
   goto end_rename;
 }





 VAR_9->i_ctime = FUNC_4(VAR_9->i_sb);
 FUNC_12(VAR_9);




 VAR_17.fileVersionNum = VAR_16.fileVersionNum;
 VAR_17.fileCharacteristics = VAR_16.fileCharacteristics;
 FUNC_13(&(VAR_17.icb), &(VAR_16.icb), sizeof(struct long_ad));
 FUNC_22(VAR_7, &VAR_17, VAR_14, &VAR_12, ((void*)0), ((void*)0));


 VAR_13 = FUNC_18(VAR_5, &VAR_6->d_name, &VAR_11, &VAR_16);
 FUNC_16(VAR_5, VAR_13, &VAR_11, &VAR_16);

 if (VAR_10) {
  VAR_10->i_ctime = FUNC_4(VAR_10->i_sb);
  FUNC_7(VAR_10);
 }
 VAR_5->i_ctime = VAR_5->i_mtime = FUNC_4(VAR_5->i_sb);
 FUNC_12(VAR_5);

 if (VAR_15) {
  VAR_15->icb.extLocation = FUNC_3(FUNC_1(VAR_7)->i_location);
  FUNC_21((char *)VAR_15,
    (sizeof(struct fileIdentDesc) +
    FUNC_8(VAR_15->lengthOfImpUse) + 3) & ~3);
  if (VAR_21->i_alloc_type == VAR_4)
   FUNC_12(VAR_9);
  else
   FUNC_11(VAR_18, VAR_9);

  FUNC_7(VAR_5);
  if (VAR_10)
   FUNC_7(VAR_10);
  else {
   FUNC_6(VAR_7);
   FUNC_12(VAR_7);
  }
 }

 if (VAR_13) {
  if (VAR_11.sbh != VAR_11.ebh)
   FUNC_2(VAR_11.ebh);
  FUNC_2(VAR_11.sbh);
 }

 VAR_19 = 0;

end_rename:
 FUNC_2(VAR_18);
 if (VAR_14) {
  if (VAR_12.sbh != VAR_12.ebh)
   FUNC_2(VAR_12.ebh);
  FUNC_2(VAR_12.sbh);
 }
 FUNC_23();

 return VAR_19;
}
