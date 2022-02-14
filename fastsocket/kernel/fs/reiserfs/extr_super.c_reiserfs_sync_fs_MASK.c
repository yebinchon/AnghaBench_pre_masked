
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_dirt; } ;
struct reiserfs_transaction_handle {int dummy; } ;


 int FUNC_0 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, int VAR_1)
{
 struct reiserfs_transaction_handle VAR_2;

 FUNC_3(VAR_0);
 if (!FUNC_0(&VAR_2, VAR_0, 1))
  if (!FUNC_1(&VAR_2, VAR_0, 1))
   FUNC_2(VAR_0);
 VAR_0->s_dirt = 0;

 FUNC_4(VAR_0);
 return 0;
}
