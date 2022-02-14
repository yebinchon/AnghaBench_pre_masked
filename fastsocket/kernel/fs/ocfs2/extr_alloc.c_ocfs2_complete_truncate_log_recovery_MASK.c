
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_truncate_log {TYPE_2__* tl_recs; int tl_used; } ;
struct ocfs2_super {int sb; struct inode* osb_tl_inode; } ;
struct TYPE_4__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {int i_blkno; TYPE_1__ id2; } ;
struct inode {int i_mutex; } ;
typedef int handle_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;
struct TYPE_5__ {int t_start; int t_clusters; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_super*) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,unsigned int) ;
 int FUNC_14 (struct ocfs2_super*,int *) ;
 int * FUNC_15 (struct ocfs2_super*,int ) ;
 int FUNC_16 (struct ocfs2_super*,int *,int ,unsigned int) ;
 scalar_t__ FUNC_17 (struct ocfs2_super*) ;

int FUNC_18(struct ocfs2_super *VAR_3,
      struct ocfs2_dinode *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 u64 VAR_10;
 handle_t *VAR_11;
 struct inode *VAR_12 = VAR_3->osb_tl_inode;
 struct ocfs2_truncate_log *VAR_13;

 FUNC_8();

 if (FUNC_1(VAR_12)->ip_blkno == FUNC_6(VAR_4->i_blkno)) {
  FUNC_7(VAR_1, "Asked to recover my own truncate log!\n");
  return -VAR_0;
 }

 VAR_13 = &VAR_4->id2.i_dealloc;
 VAR_8 = FUNC_4(VAR_13->tl_used);
 FUNC_7(0, "cleanup %u records from %llu\n", VAR_8,
      (unsigned long long)FUNC_6(VAR_4->i_blkno));

 FUNC_11(&VAR_12->i_mutex);
 for(VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  if (FUNC_17(VAR_3)) {
   VAR_5 = FUNC_3(VAR_3);
   if (VAR_5 < 0) {
    FUNC_9(VAR_5);
    goto bail_up;
   }
  }

  VAR_11 = FUNC_15(VAR_3, VAR_2);
  if (FUNC_0(VAR_11)) {
   VAR_5 = FUNC_2(VAR_11);
   FUNC_9(VAR_5);
   goto bail_up;
  }

  VAR_7 = FUNC_5(VAR_13->tl_recs[VAR_6].t_clusters);
  VAR_9 = FUNC_5(VAR_13->tl_recs[VAR_6].t_start);
  VAR_10 = FUNC_13(VAR_3->sb, VAR_9);

  VAR_5 = FUNC_16(VAR_3, VAR_11,
         VAR_10, VAR_7);
  FUNC_14(VAR_3, VAR_11);
  if (VAR_5 < 0) {
   FUNC_9(VAR_5);
   goto bail_up;
  }
 }

bail_up:
 FUNC_12(&VAR_12->i_mutex);

 FUNC_10(VAR_5);
 return VAR_5;
}
