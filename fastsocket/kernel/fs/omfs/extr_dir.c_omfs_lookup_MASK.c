
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_self; } ;
struct omfs_inode {TYPE_1__ i_head; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; scalar_t__ b_data; } ;
struct TYPE_4__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct buffer_head {int i_sb; scalar_t__ b_data; } ;
typedef int ino_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 struct inode* FUNC_6 (struct inode*,int ,scalar_t__) ;
 struct inode* FUNC_7 (int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_2, struct dentry *VAR_3,
      struct nameidata *VAR_4)
{
 struct buffer_head *VAR_5;
 struct inode *VAR_6 = ((void*)0);

 if (VAR_3->d_name.len > VAR_1)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_6(VAR_2, VAR_3->d_name.name, VAR_3->d_name.len);
 if (!FUNC_2(VAR_5)) {
  struct omfs_inode *VAR_7 = (struct omfs_inode *)VAR_5->b_data;
  ino_t VAR_8 = FUNC_3(VAR_7->i_head.h_self);
  FUNC_4(VAR_5);
  VAR_6 = FUNC_7(VAR_2->i_sb, VAR_8);
  if (FUNC_2(VAR_6))
   return FUNC_0(VAR_6);
 }
 FUNC_5(VAR_3, VAR_6);
 return ((void*)0);
}
