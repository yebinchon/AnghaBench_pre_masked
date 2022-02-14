
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,int ,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,struct dentry*,struct dentry*) ;
 int FUNC_6 (struct dentry*) ;

__attribute__((used)) static int
FUNC_7(struct dentry *VAR_0, struct inode *VAR_1, struct dentry *VAR_2)
{
 int VAR_3;

 FUNC_0("smb_link old=%s/%s new=%s/%s\n",
        FUNC_1(VAR_0), FUNC_1(VAR_2));
 FUNC_4(VAR_1);
 VAR_3 = FUNC_5(FUNC_2(VAR_0), VAR_0, VAR_2);
 if (!VAR_3) {
  FUNC_6(VAR_0);
  VAR_3 = FUNC_3(VAR_2, 0, 0);
 }
 return VAR_3;
}
