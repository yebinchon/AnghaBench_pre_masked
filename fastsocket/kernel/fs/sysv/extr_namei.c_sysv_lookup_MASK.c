
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {TYPE_3__* i_sb; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct dentry {TYPE_2__ d_name; int d_op; } ;
typedef scalar_t__ ino_t ;
struct TYPE_6__ {TYPE_1__* s_root; } ;
struct TYPE_4__ {int d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct inode* FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct inode * VAR_2, struct dentry * VAR_3, struct nameidata *VAR_4)
{
 struct inode * VAR_5 = ((void*)0);
 ino_t VAR_6;

 VAR_3->d_op = VAR_2->i_sb->s_root->d_op;
 if (VAR_3->d_name.len > VAR_1)
  return FUNC_1(-VAR_0);
 VAR_6 = FUNC_5(VAR_3);

 if (VAR_6) {
  VAR_5 = FUNC_4(VAR_2->i_sb, VAR_6);
  if (FUNC_2(VAR_5))
   return FUNC_0(VAR_5);
 }
 FUNC_3(VAR_3, VAR_5);
 return ((void*)0);
}
