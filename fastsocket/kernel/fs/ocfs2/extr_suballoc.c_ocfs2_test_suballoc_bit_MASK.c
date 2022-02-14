
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_group_desc {scalar_t__ bg_bitmap; } ;
struct TYPE_2__ {int i_chain; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ,char*,unsigned long long,int) ;
 int FUNC_2 (char*,unsigned long long,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_6 (scalar_t__,unsigned long*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_super *VAR_2,
       struct inode *VAR_3,
       struct buffer_head *VAR_4, u64 VAR_5,
       u16 VAR_6, int *VAR_7)
{
 struct ocfs2_dinode *VAR_8;
 struct ocfs2_group_desc *VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);
 u64 VAR_11;
 int VAR_12;

 FUNC_2("blkno: %llu bit: %u\n", (unsigned long long)VAR_5,
     (unsigned int)VAR_6);

 VAR_8 = (struct ocfs2_dinode *)VAR_4->b_data;
 if ((VAR_6 + 1) > FUNC_4(&VAR_8->id2.i_chain)) {
  FUNC_1(VAR_1, "suballoc bit %u out of range of %u\n",
       (unsigned int)VAR_6,
       FUNC_4(&VAR_8->id2.i_chain));
  VAR_12 = -VAR_0;
  goto bail;
 }

 VAR_11 = FUNC_7(VAR_5, VAR_6);
 VAR_12 = FUNC_5(VAR_3, VAR_8, VAR_11,
          &VAR_10);
 if (VAR_12 < 0) {
  FUNC_1(VAR_1, "read group %llu failed %d\n",
       (unsigned long long)VAR_11, VAR_12);
  goto bail;
 }

 VAR_9 = (struct ocfs2_group_desc *) VAR_10->b_data;
 *VAR_7 = FUNC_6(VAR_6, (unsigned long *)VAR_9->bg_bitmap);

bail:
 FUNC_0(VAR_10);

 FUNC_3(VAR_12);
 return VAR_12;
}
