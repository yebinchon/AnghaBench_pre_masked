
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct ocfs2_group_desc {void* bg_next_group; void* bg_blkno; } ;
struct TYPE_5__ {TYPE_1__* cl_recs; } ;
struct TYPE_6__ {TYPE_2__ i_chain; } ;
struct ocfs2_dinode {TYPE_3__ id2; void* i_blkno; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {void* c_blkno; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_group_desc*) ;
 int VAR_0 ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int ,char*,unsigned long long,size_t,unsigned long long,unsigned long long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_1,
        struct inode *VAR_2,
        struct buffer_head *VAR_3,
        struct buffer_head *VAR_4,
        struct buffer_head *VAR_5,
        u16 VAR_6)
{
 int VAR_7;


 u64 VAR_8, VAR_9, VAR_10;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *) VAR_3->b_data;
 struct ocfs2_group_desc *VAR_12 = (struct ocfs2_group_desc *) VAR_4->b_data;
 struct ocfs2_group_desc *VAR_13 = (struct ocfs2_group_desc *) VAR_5->b_data;



 FUNC_0(!FUNC_2(VAR_12));
 FUNC_0(!FUNC_2(VAR_13));

 FUNC_5(0, "Suballoc %llu, chain %u, move group %llu to top, prev = %llu\n",
      (unsigned long long)FUNC_4(VAR_11->i_blkno), VAR_6,
      (unsigned long long)FUNC_4(VAR_12->bg_blkno),
      (unsigned long long)FUNC_4(VAR_13->bg_blkno));

 VAR_8 = FUNC_4(VAR_11->id2.i_chain.cl_recs[VAR_6].c_blkno);
 VAR_9 = FUNC_4(VAR_12->bg_next_group);
 VAR_10 = FUNC_4(VAR_13->bg_next_group);

 VAR_7 = FUNC_9(VAR_1, FUNC_1(VAR_2),
      VAR_5,
      VAR_0);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_rollback;
 }

 VAR_13->bg_next_group = VAR_12->bg_next_group;

 VAR_7 = FUNC_10(VAR_1, VAR_5);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_rollback;
 }

 VAR_7 = FUNC_9(VAR_1, FUNC_1(VAR_2),
      VAR_4, VAR_0);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_rollback;
 }

 VAR_12->bg_next_group = VAR_11->id2.i_chain.cl_recs[VAR_6].c_blkno;

 VAR_7 = FUNC_10(VAR_1, VAR_4);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_rollback;
 }

 VAR_7 = FUNC_8(VAR_1, FUNC_1(VAR_2),
      VAR_3, VAR_0);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_rollback;
 }

 VAR_11->id2.i_chain.cl_recs[VAR_6].c_blkno = VAR_12->bg_blkno;

 VAR_7 = FUNC_10(VAR_1, VAR_3);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto out_rollback;
 }

 VAR_7 = 0;
out_rollback:
 if (VAR_7 < 0) {
  VAR_11->id2.i_chain.cl_recs[VAR_6].c_blkno = FUNC_3(VAR_8);
  VAR_12->bg_next_group = FUNC_3(VAR_9);
  VAR_13->bg_next_group = FUNC_3(VAR_10);
 }

 FUNC_7(VAR_7);
 return VAR_7;
}
