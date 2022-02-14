
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {int j_async_throttle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_3)
{
 FUNC_0(VAR_2);
 struct reiserfs_journal *VAR_4 = FUNC_1(VAR_3);
 if (FUNC_2(&VAR_4->j_async_throttle))
  FUNC_3(VAR_0, VAR_1 / 10);
 return 0;
}
