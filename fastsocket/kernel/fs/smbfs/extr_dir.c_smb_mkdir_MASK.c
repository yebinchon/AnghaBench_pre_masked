
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; } ;
struct smb_sb_info {TYPE_1__ opt; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct smb_sb_info* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,struct iattr*,int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct smb_sb_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 struct iattr VAR_7;

 FUNC_0();
 FUNC_3(VAR_2);
 VAR_6 = FUNC_4(VAR_3);
 if (!VAR_6) {
  if (VAR_5->opt.capabilities & VAR_1) {

   VAR_7.ia_valid = VAR_0;
   VAR_7.ia_mode = VAR_4;
   VAR_6 = FUNC_5(VAR_3, &VAR_7, 0, 0);
  }
  VAR_6 = FUNC_2(VAR_3, 0, 0);
 }
 FUNC_6();
 return VAR_6;
}
