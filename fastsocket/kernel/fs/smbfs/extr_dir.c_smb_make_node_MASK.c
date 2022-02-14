
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; int ia_mode; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,int ,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct iattr*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_4, struct dentry *VAR_5, int VAR_6, dev_t VAR_7)
{
 int VAR_8;
 struct iattr VAR_9;

 VAR_9.ia_valid = VAR_1 | VAR_2 | VAR_0;
 VAR_9.ia_mode = VAR_6;
 FUNC_2(&VAR_9.ia_uid, &VAR_9.ia_gid);

 if (!FUNC_3(VAR_7))
  return -VAR_3;

 FUNC_5(VAR_4);
 VAR_8 = FUNC_6(VAR_5, &VAR_9, FUNC_0(VAR_7), FUNC_1(VAR_7));
 if (!VAR_8) {
  VAR_8 = FUNC_4(VAR_5, 0, 0);
 }
 return VAR_8;
}
