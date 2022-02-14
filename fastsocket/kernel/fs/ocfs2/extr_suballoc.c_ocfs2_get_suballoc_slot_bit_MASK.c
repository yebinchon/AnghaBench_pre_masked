
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {int max_slots; } ;
struct ocfs2_dinode {int i_suballoc_bit; int i_suballoc_slot; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ocfs2_dinode*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,...) ;
 int FUNC_4 (char*,unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,scalar_t__,int,struct buffer_head**) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_super *VAR_3, u64 VAR_4,
           u16 *VAR_5, u16 *VAR_6)
{
 int VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_dinode *VAR_9;

 FUNC_4("blkno: %llu\n", (unsigned long long)VAR_4);


 VAR_7 = FUNC_6(VAR_3, VAR_4, 1, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_3(VAR_1, "read block %llu failed %d\n",
       (unsigned long long)VAR_4, VAR_7);
  goto bail;
 }

 VAR_9 = (struct ocfs2_dinode *) VAR_8->b_data;
 if (!FUNC_0(VAR_9)) {
  FUNC_3(VAR_1, "invalid inode %llu requested\n",
       (unsigned long long)VAR_4);
  VAR_7 = -VAR_0;
  goto bail;
 }

 if (FUNC_2(VAR_9->i_suballoc_slot) != (u16)VAR_2 &&
     (u32)FUNC_2(VAR_9->i_suballoc_slot) > VAR_3->max_slots - 1) {
  FUNC_3(VAR_1, "inode %llu has invalid suballoc slot %u\n",
       (unsigned long long)VAR_4,
       (u32)FUNC_2(VAR_9->i_suballoc_slot));
  VAR_7 = -VAR_0;
  goto bail;
 }

 if (VAR_5)
  *VAR_5 = FUNC_2(VAR_9->i_suballoc_slot);
 if (VAR_6)
  *VAR_6 = FUNC_2(VAR_9->i_suballoc_bit);

bail:
 FUNC_1(VAR_8);

 FUNC_5(VAR_7);
 return VAR_7;
}
