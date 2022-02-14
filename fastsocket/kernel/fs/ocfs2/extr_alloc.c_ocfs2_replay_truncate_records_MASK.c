
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_truncate_rec {int t_start; int t_clusters; } ;
struct ocfs2_truncate_log {struct ocfs2_truncate_rec* tl_recs; int tl_used; } ;
struct ocfs2_super {struct buffer_head* osb_tl_bh; struct inode* osb_tl_inode; } ;
struct TYPE_2__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,unsigned int,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,struct inode*,struct buffer_head*,scalar_t__,unsigned int) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_2,
      handle_t *VAR_3,
      struct inode *VAR_4,
      struct buffer_head *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 unsigned int VAR_8;
 u64 VAR_9;
 struct ocfs2_truncate_rec VAR_10;
 struct ocfs2_dinode *VAR_11;
 struct ocfs2_truncate_log *VAR_12;
 struct inode *VAR_13 = VAR_2->osb_tl_inode;
 struct buffer_head *VAR_14 = VAR_2->osb_tl_bh;

 FUNC_5();

 VAR_11 = (struct ocfs2_dinode *) VAR_14->b_data;
 VAR_12 = &VAR_11->id2.i_dealloc;
 VAR_7 = FUNC_2(VAR_12->tl_used) - 1;
 while (VAR_7 >= 0) {


  VAR_6 = FUNC_11(VAR_3, FUNC_0(VAR_13), VAR_14,
       VAR_0);
  if (VAR_6 < 0) {
   FUNC_6(VAR_6);
   goto bail;
  }

  VAR_12->tl_used = FUNC_1(VAR_7);

  VAR_6 = FUNC_12(VAR_3, VAR_14);
  if (VAR_6 < 0) {
   FUNC_6(VAR_6);
   goto bail;
  }




  VAR_6 = FUNC_9(VAR_3,
         VAR_1);
  if (VAR_6 < 0) {
   FUNC_6(VAR_6);
   goto bail;
  }

  VAR_10 = VAR_12->tl_recs[VAR_7];
  VAR_9 = FUNC_8(VAR_4->i_sb,
          FUNC_3(VAR_10.t_start));
  VAR_8 = FUNC_3(VAR_10.t_clusters);



  if (VAR_9) {
   FUNC_4(0, "free record %d, start = %u, clusters = %u\n",
        VAR_7, FUNC_3(VAR_10.t_start), VAR_8);

   VAR_6 = FUNC_10(VAR_3, VAR_4,
           VAR_5, VAR_9,
           VAR_8);
   if (VAR_6 < 0) {
    FUNC_6(VAR_6);
    goto bail;
   }
  }
  VAR_7--;
 }

bail:
 FUNC_7(VAR_6);
 return VAR_6;
}
