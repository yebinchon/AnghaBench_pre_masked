
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_fattr {int f_mode; } ;
struct inode {int i_ino; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct smb_fattr*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*,struct smb_fattr*) ;

__attribute__((used)) static int
FUNC_10(struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 int VAR_4;
 struct smb_fattr VAR_5;

 VAR_4 = FUNC_7(VAR_2, &VAR_5);
 if (!VAR_4) {
  FUNC_8(VAR_2);






  if (VAR_3->i_ino == 2)
   return VAR_4;
  if (FUNC_3(VAR_3->i_mode))
   return VAR_4;

  if ((VAR_3->i_mode & VAR_1) == (VAR_5.f_mode & VAR_1)) {
   FUNC_9(VAR_3, &VAR_5);
  } else {







   FUNC_1("%s/%s changed mode, %07o to %07o\n",
     FUNC_0(VAR_2),
     VAR_3->i_mode, VAR_5.f_mode);

   VAR_5.f_mode = VAR_3->i_mode;
   FUNC_5(VAR_3);
   VAR_3->i_mode = VAR_5.f_mode;





   if (!FUNC_2(VAR_3->i_mode))
    FUNC_4(VAR_3);
   else
    FUNC_6(VAR_3);
   VAR_4 = -VAR_0;
  }
 }
 return VAR_4;
}
