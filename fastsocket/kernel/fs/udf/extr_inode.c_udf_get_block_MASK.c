
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_inode_info {scalar_t__ i_next_alloc_block; int i_next_alloc_goal; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 struct buffer_head* FUNC_2 (struct inode*,scalar_t__,int*,scalar_t__*,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, sector_t VAR_2,
    struct buffer_head *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct buffer_head *VAR_7;
 sector_t VAR_8 = 0;
 struct udf_inode_info *VAR_9;

 if (!VAR_4) {
  VAR_8 = FUNC_6(VAR_1, VAR_2);
  if (VAR_8)
   FUNC_4(VAR_3, VAR_1->i_sb, VAR_8);
  return 0;
 }

 VAR_5 = -VAR_0;
 VAR_6 = 0;
 VAR_7 = ((void*)0);

 FUNC_3();

 VAR_9 = FUNC_1(VAR_1);
 if (VAR_2 == VAR_9->i_next_alloc_block + 1) {
  VAR_9->i_next_alloc_block++;
  VAR_9->i_next_alloc_goal++;
 }

 VAR_5 = 0;

 VAR_7 = FUNC_2(VAR_1, VAR_2, &VAR_5, &VAR_8, &VAR_6);
 FUNC_0(VAR_7);
 if (VAR_5)
  goto abort;
 FUNC_0(!VAR_8);

 if (VAR_6)
  FUNC_5(VAR_3);
 FUNC_4(VAR_3, VAR_1->i_sb, VAR_8);

abort:
 FUNC_7();
 return VAR_5;
}
