
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_ctime; int i_mtime; int i_gid; int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,char const*,int) ;
 struct inode* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct inode * VAR_5, struct dentry *VAR_6, const char * VAR_7)
{
 struct inode *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_4(VAR_5->i_sb, VAR_2|VAR_3, 0);
 if (VAR_8) {
  int VAR_10 = FUNC_5(VAR_7)+1;
  VAR_9 = FUNC_3(VAR_8, VAR_7, VAR_10);
  if (!VAR_9) {
   if (VAR_5->i_mode & VAR_4)
    VAR_8->i_gid = VAR_5->i_gid;
   FUNC_0(VAR_6, VAR_8);
   FUNC_1(VAR_6);
   VAR_5->i_mtime = VAR_5->i_ctime = VAR_0;
  } else
   FUNC_2(VAR_8);
 }
 return VAR_9;
}
