
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; int i_count; int i_ctime; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,struct inode*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_5, struct inode *VAR_6,
    struct dentry *VAR_7)
{
 int VAR_8;
 struct inode *VAR_9 = VAR_5->d_inode;
 struct reiserfs_transaction_handle VAR_10;

 int VAR_11 =
     VAR_3 * 3 +
     2 * FUNC_0(VAR_6->i_sb);

 FUNC_9(VAR_6->i_sb);
 if (VAR_9->i_nlink >= VAR_4) {

  FUNC_10(VAR_6->i_sb);
  return -VAR_1;
 }
 if (VAR_9->i_nlink == 0) {
  FUNC_10(VAR_6->i_sb);
  return -VAR_2;
 }


 FUNC_3(VAR_9);

 VAR_8 = FUNC_4(&VAR_10, VAR_6->i_sb, VAR_11);
 if (VAR_8) {
  VAR_9->i_nlink--;
  FUNC_10(VAR_6->i_sb);
  return VAR_8;
 }


 VAR_8 =
     FUNC_6(&VAR_10, VAR_6, VAR_7->d_name.name,
          VAR_7->d_name.len, VAR_9, 1 );

 FUNC_7(VAR_9);
 FUNC_7(VAR_6);

 if (VAR_8) {
  int VAR_12;
  VAR_9->i_nlink--;
  VAR_12 = FUNC_5(&VAR_10, VAR_6->i_sb, VAR_11);
  FUNC_10(VAR_6->i_sb);
  return VAR_12 ? VAR_12 : VAR_8;
 }

 VAR_9->i_ctime = VAR_0;
 FUNC_8(&VAR_10, VAR_9);

 FUNC_1(&VAR_9->i_count);
 FUNC_2(VAR_7, VAR_9);
 VAR_8 = FUNC_5(&VAR_10, VAR_6->i_sb, VAR_11);
 FUNC_10(VAR_6->i_sb);
 return VAR_8;
}
