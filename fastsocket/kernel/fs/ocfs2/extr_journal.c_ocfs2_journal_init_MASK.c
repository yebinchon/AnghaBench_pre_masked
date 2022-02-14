
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ocfs2_super {int slot_num; } ;
struct ocfs2_journal {int j_state; struct buffer_head* j_bh; struct inode* j_inode; TYPE_3__* j_journal; struct ocfs2_super* j_osb; } ;
struct TYPE_6__ {int ij_flags; } ;
struct TYPE_7__ {TYPE_1__ journal1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_blocks; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_8__ {unsigned long long j_maxlen; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_9__ {unsigned long long ip_clusters; int ip_open_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 TYPE_3__* FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 struct inode* FUNC_12 (struct ocfs2_super*,int ,int ) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct ocfs2_super*) ;

int FUNC_16(struct ocfs2_journal *VAR_9, int *VAR_10)
{
 int VAR_11 = -1;
 struct inode *VAR_12 = ((void*)0);
 journal_t *VAR_13 = ((void*)0);
 struct ocfs2_dinode *VAR_14 = ((void*)0);
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_super *VAR_16;
 int VAR_17 = 0;

 FUNC_9();

 FUNC_0(!VAR_9);

 VAR_16 = VAR_9->j_osb;


 VAR_12 = FUNC_12(VAR_16, VAR_3,
         VAR_16->slot_num);
 if (VAR_12 == ((void*)0)) {
  VAR_11 = -VAR_0;
  FUNC_10(VAR_11);
  goto done;
 }
 if (FUNC_5(VAR_12)) {
  FUNC_8(VAR_4, "access error (bad inode)\n");
  FUNC_4(VAR_12);
  VAR_12 = ((void*)0);
  VAR_11 = -VAR_0;
  goto done;
 }

 FUNC_2(VAR_12);
 FUNC_1(VAR_12)->ip_open_count++;




 VAR_11 = FUNC_13(VAR_12, &VAR_15, 1, VAR_7);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_2)
   FUNC_8(VAR_4, "Could not get lock on journal!\n");
  goto done;
 }

 VAR_17 = 1;
 VAR_14 = (struct ocfs2_dinode *)VAR_15->b_data;

 if (VAR_12->i_size < VAR_8) {
  FUNC_8(VAR_4, "Journal file size (%lld) is too small!\n",
       VAR_12->i_size);
  VAR_11 = -VAR_1;
  goto done;
 }

 FUNC_8(0, "inode->i_size = %lld\n", VAR_12->i_size);
 FUNC_8(0, "inode->i_blocks = %llu\n",
   (unsigned long long)VAR_12->i_blocks);
 FUNC_8(0, "inode->ip_clusters = %u\n", FUNC_1(VAR_12)->ip_clusters);


 VAR_13 = FUNC_6(VAR_12);
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_4, "Linux journal layer error\n");
  VAR_11 = -VAR_1;
  goto done;
 }

 FUNC_8(0, "Returned from jbd2_journal_init_inode\n");
 FUNC_8(0, "j_journal->j_maxlen = %u\n", VAR_13->j_maxlen);

 *VAR_10 = (FUNC_7(VAR_14->id1.journal1.ij_flags) &
    VAR_5);

 VAR_9->j_journal = VAR_13;
 VAR_9->j_inode = VAR_12;
 VAR_9->j_bh = VAR_15;

 FUNC_15(VAR_16);

 VAR_9->j_state = VAR_6;

 VAR_11 = 0;
done:
 if (VAR_11 < 0) {
  if (VAR_17)
   FUNC_14(VAR_12, 1);
  FUNC_3(VAR_15);
  if (VAR_12) {
   FUNC_1(VAR_12)->ip_open_count--;
   FUNC_4(VAR_12);
  }
 }

 FUNC_11(VAR_11);
 return VAR_11;
}
