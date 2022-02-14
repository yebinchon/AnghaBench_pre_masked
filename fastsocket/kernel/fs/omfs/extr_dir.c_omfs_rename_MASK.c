
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ctime; int i_mode; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct buffer_head* FUNC_7 (struct inode*,int ,int ) ;
 int FUNC_8 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3, struct dentry *VAR_4,
  struct inode *VAR_5, struct dentry *VAR_6)
{
 struct inode *VAR_7 = VAR_6->d_inode;
 struct inode *VAR_8 = VAR_4->d_inode;
 struct buffer_head *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_8->i_mode);

 if (VAR_7) {

  VAR_11 = -VAR_2;
  if (VAR_10 && !FUNC_6(VAR_7))
   goto out;

  VAR_11 = -VAR_1;
  VAR_9 = FUNC_7(VAR_5, VAR_6->d_name.name,
   VAR_6->d_name.len);
  if (FUNC_0(VAR_9))
   goto out;
  FUNC_2(VAR_9);

  VAR_11 = FUNC_8(VAR_5, VAR_6);
  if (VAR_11)
   goto out;
 }



 FUNC_4(VAR_8);
 VAR_11 = FUNC_8(VAR_3, VAR_4);
 if (VAR_11) {
  FUNC_3(VAR_8);
  goto out;
 }

 VAR_11 = FUNC_5(VAR_6, VAR_8);
 if (VAR_11)
  goto out;

 VAR_8->i_ctime = VAR_0;
out:
 return VAR_11;
}
