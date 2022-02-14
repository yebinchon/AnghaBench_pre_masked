
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; } ;
struct smb_sb_info {TYPE_1__ opt; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct dentry {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct smb_sb_info* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,int ,int ,int *) ;
 int FUNC_9 (struct dentry*,struct iattr*,int ,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_2, struct dentry *VAR_3, int VAR_4,
  struct nameidata *VAR_5)
{
 struct smb_sb_info *VAR_6 = FUNC_5(VAR_3);
 __u16 VAR_7;
 int VAR_8;
 struct iattr VAR_9;

 FUNC_2("creating %s/%s, mode=%d\n", FUNC_0(VAR_3), VAR_4);

 FUNC_4();
 FUNC_7(VAR_2);
 VAR_8 = FUNC_8(VAR_3, 0, FUNC_3(), &VAR_7);
 if (!VAR_8) {
  if (VAR_6->opt.capabilities & VAR_1) {

   VAR_9.ia_valid = VAR_0;
   VAR_9.ia_mode = VAR_4;
   VAR_8 = FUNC_9(VAR_3, &VAR_9, 0, 0);
  }
  VAR_8 = FUNC_6(VAR_3, VAR_7, 1);
 } else {
  FUNC_1("%s/%s failed, error=%d\n",
    FUNC_0(VAR_3), VAR_8);
 }
 FUNC_10();
 return VAR_8;
}
