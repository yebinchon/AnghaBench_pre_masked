
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_ctime; int i_mtime; int i_gid; int i_sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5, dev_t VAR_6)
{
 struct inode * VAR_7 = FUNC_3(VAR_3->i_sb, VAR_5, VAR_6);
 int VAR_8 = -VAR_1;

 if (VAR_7) {
  if (VAR_3->i_mode & VAR_2) {
   VAR_7->i_gid = VAR_3->i_gid;
   if (FUNC_0(VAR_5))
    VAR_7->i_mode |= VAR_2;
  }
  FUNC_1(VAR_4, VAR_7);
  FUNC_2(VAR_4);
  VAR_8 = 0;
  VAR_3->i_mtime = VAR_3->i_ctime = VAR_0;
 }
 return VAR_8;
}
