
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nilfs_sb_info {int s_super; } ;
struct nilfs_recovery_block {int blocknr; } ;
struct buffer_head {int b_size; int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct page*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int ,int ) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct nilfs_sb_info *VAR_2,
         struct nilfs_recovery_block *VAR_3,
         struct page *VAR_4)
{
 struct buffer_head *VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_5(VAR_2->s_super, VAR_3->blocknr);
 if (FUNC_6(!VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_1);
 FUNC_4(VAR_6 + FUNC_0(VAR_5), VAR_5->b_data, VAR_5->b_size);
 FUNC_3(VAR_6, VAR_1);
 FUNC_1(VAR_5);
 return 0;
}
