
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct TYPE_6__ {int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_1 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_3 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_1)
{
 struct reiserfs_transaction_handle VAR_2;

 int VAR_3 = 0;
 if (VAR_1->i_sb->s_flags & VAR_0) {
  FUNC_3(VAR_1->i_sb, "clm-6006",
     "writing inode %lu on readonly FS",
     VAR_1->i_ino);
  return;
 }
 FUNC_4(VAR_1->i_sb);




 VAR_3 = FUNC_0(&VAR_2, VAR_1->i_sb, 1);
 if (VAR_3) {
  FUNC_5(VAR_1->i_sb);
  return;
 }
 FUNC_2(&VAR_2, VAR_1);
 FUNC_1(&VAR_2, VAR_1->i_sb, 1);
 FUNC_5(VAR_1->i_sb);
}
