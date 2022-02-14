
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_inode_info {scalar_t__ ip_blkno; int ip_lock; int ip_flags; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {int * d_op; TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 struct dentry* FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (int ,char*,scalar_t__,int ,unsigned long long) ;
 int FUNC_6 (char*,struct inode*,struct dentry*,scalar_t__,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*,struct inode*,scalar_t__) ;
 int VAR_6 ;
 struct inode* FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (struct inode*,int *,int ,int ) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct inode*,int ,scalar_t__,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static struct dentry *FUNC_16(struct inode *VAR_7, struct dentry *VAR_8,
       struct nameidata *VAR_9)
{
 int VAR_10;
 u64 VAR_11;
 struct inode *VAR_12 = ((void*)0);
 struct dentry *VAR_13;
 struct ocfs2_inode_info *VAR_14;

 FUNC_6("(0x%p, 0x%p, '%.*s')\n", VAR_7, VAR_8,
     VAR_8->d_name.len, VAR_8->d_name.name);

 if (VAR_8->d_name.len > VAR_4) {
  VAR_13 = FUNC_0(-VAR_1);
  goto bail;
 }

 FUNC_5(0, "find name %.*s in directory %llu\n", VAR_8->d_name.len,
      VAR_8->d_name.name, (unsigned long long)FUNC_2(VAR_7)->ip_blkno);

 VAR_10 = FUNC_11(VAR_7, ((void*)0), 0, VAR_5);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_2)
   FUNC_7(VAR_10);
  VAR_13 = FUNC_0(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_13(VAR_7, VAR_8->d_name.name,
         VAR_8->d_name.len, &VAR_11);
 if (VAR_10 < 0)
  goto bail_add;

 VAR_12 = FUNC_10(FUNC_3(VAR_7->i_sb), VAR_11, 0, 0);
 if (FUNC_1(VAR_12)) {
  VAR_13 = FUNC_0(-VAR_0);
  goto bail_unlock;
 }

 VAR_14 = FUNC_2(VAR_12);





 FUNC_14(&VAR_14->ip_lock);
 VAR_14->ip_flags &= ~VAR_3;
 FUNC_15(&VAR_14->ip_lock);

bail_add:
 VAR_8->d_op = &VAR_6;
 VAR_13 = FUNC_4(VAR_12, VAR_8);

 if (VAR_12) {
  if (VAR_13)
   VAR_8 = VAR_13;

  VAR_10 = FUNC_9(VAR_8, VAR_12,
        FUNC_2(VAR_7)->ip_blkno);
  if (VAR_10) {
   FUNC_7(VAR_10);
   VAR_13 = FUNC_0(VAR_10);
   goto bail_unlock;
  }
 }

bail_unlock:




 FUNC_12(VAR_7, 0);

bail:

 FUNC_8(VAR_13);

 return VAR_13;
}
