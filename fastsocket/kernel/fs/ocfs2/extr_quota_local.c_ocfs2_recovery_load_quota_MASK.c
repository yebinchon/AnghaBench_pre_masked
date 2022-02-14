
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_local_disk_dqinfo {int dqi_chunks; } ;
struct ocfs2_local_disk_chunk {int dqc_free; } ;
struct list_head {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct super_block*,struct ocfs2_local_disk_chunk*,int,struct list_head*) ;
 int FUNC_5 (struct inode*,int ,struct buffer_head**) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0,
         struct ocfs2_local_disk_dqinfo *VAR_1,
         int VAR_2,
         struct list_head *VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 struct buffer_head *VAR_5;
 struct ocfs2_local_disk_chunk *VAR_6;
 int VAR_7, VAR_8 = FUNC_2(VAR_1->dqi_chunks);
 int VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = ((void*)0);
  VAR_9 = FUNC_5(VAR_0,
      FUNC_7(VAR_4, VAR_7),
      &VAR_5);
  if (VAR_9) {
   FUNC_3(VAR_9);
   break;
  }
  VAR_6 = (struct ocfs2_local_disk_chunk *)VAR_5->b_data;
  if (FUNC_2(VAR_6->dqc_free) < FUNC_6(VAR_4))
   VAR_9 = FUNC_4(VAR_4, VAR_6, VAR_7, VAR_3);
  FUNC_0(VAR_5);
  if (VAR_9 < 0)
   break;
 }
 if (VAR_9 < 0)
  FUNC_1(VAR_3);
 return VAR_9;
}
