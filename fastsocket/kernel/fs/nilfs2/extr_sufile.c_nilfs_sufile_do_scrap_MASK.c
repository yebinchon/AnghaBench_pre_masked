
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nilfs_segment_usage {scalar_t__ su_flags; scalar_t__ su_nblocks; int su_lastmod; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct nilfs_segment_usage*) ;
 int FUNC_7 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_8 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_9 (struct buffer_head*,int ,int) ;

void FUNC_10(struct inode *VAR_2, __u64 VAR_3,
      struct buffer_head *VAR_4,
      struct buffer_head *VAR_5)
{
 struct nilfs_segment_usage *VAR_6;
 void *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(VAR_5->b_page, VAR_0);
 VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_5, VAR_7);
 if (VAR_6->su_flags == FUNC_0(1UL << VAR_1) &&
     VAR_6->su_nblocks == FUNC_0(0)) {
  FUNC_3(VAR_7, VAR_0);
  return;
 }
 VAR_8 = FUNC_6(VAR_6);
 VAR_9 = FUNC_7(VAR_6);


 VAR_6->su_lastmod = FUNC_1(0);
 VAR_6->su_nblocks = FUNC_0(0);
 VAR_6->su_flags = FUNC_0(1UL << VAR_1);
 FUNC_3(VAR_7, VAR_0);

 FUNC_9(VAR_4, VAR_8 ? (u64)-1 : 0, VAR_9 ? 0 : 1);
 FUNC_4(VAR_5);
 FUNC_5(VAR_2);
}
