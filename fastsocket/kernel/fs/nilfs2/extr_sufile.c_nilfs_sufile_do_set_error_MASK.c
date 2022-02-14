
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segment_usage {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct nilfs_segment_usage*) ;
 scalar_t__ FUNC_5 (struct nilfs_segment_usage*) ;
 int FUNC_6 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_7 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_8 (struct buffer_head*,int,int ) ;

void FUNC_9(struct inode *VAR_1, __u64 VAR_2,
          struct buffer_head *VAR_3,
          struct buffer_head *VAR_4)
{
 struct nilfs_segment_usage *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4->b_page, VAR_0);
 VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_4, VAR_6);
 if (FUNC_5(VAR_5)) {
  FUNC_1(VAR_6, VAR_0);
  return;
 }
 VAR_7 = FUNC_4(VAR_5);
 FUNC_6(VAR_5);
 FUNC_1(VAR_6, VAR_0);

 if (VAR_7)
  FUNC_8(VAR_3, -1, 0);
 FUNC_2(VAR_4);
 FUNC_3(VAR_1);
}
