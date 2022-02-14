
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {scalar_t__ len; char* name; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct qstr d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct inode*,struct dentry*,int) ;
 int FUNC_3 (int ,char*,scalar_t__,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5,
   struct dentry *VAR_6,
   int VAR_7,
   struct nameidata *VAR_8)
{
 int VAR_9 = 0;
 struct inode *VAR_10;
 struct qstr *VAR_11 = &VAR_6->d_name;

 FUNC_3(0, "create %.*s\n", VAR_11->len, VAR_11->name);



 if (VAR_11->len >= VAR_4 ||
     VAR_11->name[0] == '$') {
  VAR_9 = -VAR_0;
  FUNC_3(VAR_2, "invalid lock name, %.*s\n", VAR_11->len,
       VAR_11->name);
  goto bail;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7 | VAR_3);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  FUNC_4(VAR_9);
  goto bail;
 }

 FUNC_0(VAR_6, VAR_10);
 FUNC_1(VAR_6);
bail:
 return VAR_9;
}
