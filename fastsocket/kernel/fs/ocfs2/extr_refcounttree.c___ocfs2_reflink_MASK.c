
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; int i_mutex; } ;
struct dentry {struct inode* d_inode; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct buffer_head*) ;
 int FUNC_8 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*,int) ;
 int FUNC_9 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*,int) ;
 int FUNC_10 (struct inode*,struct buffer_head**,int) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_1,
      struct buffer_head *VAR_2,
      struct inode *VAR_3,
      bool VAR_4)
{
 int VAR_5;
 struct inode *VAR_6 = VAR_1->d_inode;
 struct buffer_head *VAR_7 = ((void*)0);

 VAR_5 = FUNC_3(VAR_6->i_mapping);
 if (VAR_5) {
  FUNC_4(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_7(VAR_6, VAR_2);
 if (VAR_5) {
  FUNC_4(VAR_5);
  goto out;
 }

 FUNC_5(&VAR_3->i_mutex);
 VAR_5 = FUNC_10(VAR_3, &VAR_7, 1);
 if (VAR_5) {
  FUNC_4(VAR_5);
  goto out_unlock;
 }

 VAR_5 = FUNC_9(VAR_6, VAR_2,
     VAR_3, VAR_7, VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_5);
  goto inode_unlock;
 }

 if (FUNC_0(VAR_6)->ip_dyn_features & VAR_0) {
  VAR_5 = FUNC_12(VAR_6, VAR_2,
        VAR_3, VAR_7,
        VAR_4);
  if (VAR_5) {
   FUNC_4(VAR_5);
   goto inode_unlock;
  }
 }

 VAR_5 = FUNC_8(VAR_6, VAR_2,
         VAR_3, VAR_7, VAR_4);
 if (VAR_5)
  FUNC_4(VAR_5);

inode_unlock:
 FUNC_11(VAR_3, 1);
 FUNC_1(VAR_7);
out_unlock:
 FUNC_6(&VAR_3->i_mutex);
out:
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_6->i_mapping);
  if (VAR_5)
   FUNC_4(VAR_5);
 }
 return VAR_5;
}
