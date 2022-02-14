
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {scalar_t__ len; int name; } ;
struct inode {int dummy; } ;
struct dlmfs_inode_private {struct dlm_ctxt* ip_dlm; } ;
struct dlm_protocol_version {int dummy; } ;
struct dlm_ctxt {int dummy; } ;
struct dentry {struct qstr d_name; } ;


 struct dlmfs_inode_private* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dlm_ctxt*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct dlm_ctxt*) ;
 int VAR_4 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (struct inode*,struct dentry*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int) ;
 struct dlm_ctxt* FUNC_10 (struct qstr*,struct dlm_protocol_version*) ;
 struct dlm_protocol_version VAR_5 ;

__attribute__((used)) static int FUNC_11(struct inode * VAR_6,
         struct dentry * VAR_7,
         int VAR_8)
{
 int VAR_9;
 struct inode *VAR_10 = ((void*)0);
 struct qstr *VAR_11 = &VAR_7->d_name;
 struct dlmfs_inode_private *VAR_12;
 struct dlm_ctxt *VAR_13;
 struct dlm_protocol_version VAR_14 = VAR_5;

 FUNC_8(0, "mkdir %.*s\n", VAR_11->len, VAR_11->name);


 if (VAR_11->len >= VAR_3) {
  VAR_9 = -VAR_0;
  FUNC_8(VAR_2, "invalid domain name for directory.\n");
  goto bail;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_8 | VAR_4);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  FUNC_9(VAR_9);
  goto bail;
 }

 VAR_12 = FUNC_0(VAR_10);

 VAR_13 = FUNC_10(VAR_11, &VAR_14);
 if (FUNC_1(VAR_13)) {
  VAR_9 = FUNC_2(VAR_13);
  FUNC_8(VAR_2, "Error %d could not register domain \"%.*s\"\n",
       VAR_9, VAR_11->len, VAR_11->name);
  goto bail;
 }
 VAR_12->ip_dlm = VAR_13;

 FUNC_6(VAR_6);
 FUNC_3(VAR_7, VAR_10);
 FUNC_4(VAR_7);

 VAR_9 = 0;
bail:
 if (VAR_9 < 0)
  FUNC_7(VAR_10);
 return VAR_9;
}
