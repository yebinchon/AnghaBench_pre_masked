
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_fsnotify_mask; } ;
struct TYPE_2__ {int name; } ;
struct dentry {int d_flags; TYPE_1__ d_name; struct inode* d_inode; int d_lock; struct dentry* d_parent; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,int,struct inode*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct dentry *VAR_3, __u32 VAR_4)
{
 struct dentry *VAR_5;
 struct inode *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;

 if (!(VAR_3->d_flags & VAR_0))
  return;

 FUNC_5(&VAR_3->d_lock);
 VAR_5 = VAR_3->d_parent;
 VAR_6 = VAR_5->d_inode;

 if (FUNC_4(VAR_6)) {
  if (VAR_6->i_fsnotify_mask & VAR_4) {
   FUNC_1(VAR_5);
   VAR_7 = 1;
  }
 } else {






  FUNC_1(VAR_5);
  VAR_8 = 1;
 }

 FUNC_6(&VAR_3->d_lock);

 if (VAR_7) {


  VAR_4 |= VAR_2;

  FUNC_3(VAR_6, VAR_4, VAR_3->d_inode, VAR_1,
    VAR_3->d_name.name, 0);
  FUNC_2(VAR_5);
 }

 if (FUNC_7(VAR_8)) {
  FUNC_0(VAR_6);
  FUNC_2(VAR_5);
 }
}
