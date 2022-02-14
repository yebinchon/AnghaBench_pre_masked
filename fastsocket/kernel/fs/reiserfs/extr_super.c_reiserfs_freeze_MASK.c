
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; scalar_t__ s_dirt; } ;
struct reiserfs_transaction_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_4 (struct reiserfs_transaction_handle*) ;
 int FUNC_5 (struct super_block*,int ,int) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_1)
{
 struct reiserfs_transaction_handle VAR_2;
 FUNC_6(VAR_1);
 if (!(VAR_1->s_flags & VAR_0)) {
  int VAR_3 = FUNC_1(&VAR_2, VAR_1, 1);
  if (VAR_3) {
   FUNC_4(&VAR_2);
  } else {
   FUNC_5(VAR_1, FUNC_0(VAR_1),
           1);
   FUNC_3(&VAR_2, VAR_1, FUNC_0(VAR_1));
   FUNC_4(&VAR_2);
   FUNC_2(&VAR_2, VAR_1, 1);
  }
 }
 VAR_1->s_dirt = 0;
 FUNC_7(VAR_1);
 return 0;
}
