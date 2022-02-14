
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_0 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_1 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct inode *VAR_5, struct writeback_control *VAR_6)
{
 struct reiserfs_transaction_handle VAR_7;
 int VAR_8 = 1;

 if (VAR_5->i_sb->s_flags & VAR_1)
  return -VAR_0;





 if (VAR_6->sync_mode == VAR_3 && !(VAR_4->flags & VAR_2)) {
  FUNC_3(VAR_5->i_sb);
  if (!FUNC_0(&VAR_7, VAR_5->i_sb, VAR_8)) {
   FUNC_2(&VAR_7, VAR_5);
   FUNC_1(&VAR_7, VAR_5->i_sb, VAR_8);
  }
  FUNC_4(VAR_5->i_sb);
 }
 return 0;
}
