
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ihead_offs; int leb_size; int replaying; int ltail_lnum; int lhead_lnum; int lhead_offs; int log_lebs; scalar_t__ bud_bytes; scalar_t__ max_bud_bytes; scalar_t__ highest_inum; int max_sqnum; scalar_t__ need_recovery; int max_idx_node_sz; int budg_uncommitted_idx; int dirty_zn_cnt; int ihead_lnum; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*,int,int,void*) ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (int) ;

int FUNC_13(struct ubifs_info *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 void *VAR_10 = ((void*)0);

 FUNC_0(VAR_3 > 5);


 VAR_9 = FUNC_8(VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_4->ihead_offs != VAR_4->leb_size - VAR_9) {
  FUNC_10("bad index head LEB %d:%d", VAR_4->ihead_lnum,
     VAR_4->ihead_offs);
  return -VAR_0;
 }

 VAR_10 = FUNC_12(VAR_4->leb_size);
 if (!VAR_10)
  return -VAR_1;

 FUNC_3("start replaying the journal");

 VAR_4->replaying = 1;

 VAR_7 = VAR_4->ltail_lnum = VAR_4->lhead_lnum;
 VAR_8 = VAR_4->lhead_offs;

 for (VAR_6 = 0; VAR_6 < VAR_4->log_lebs; VAR_6++, VAR_7++) {
  if (VAR_7 >= VAR_2 + VAR_4->log_lebs) {




   VAR_7 = VAR_2;
   VAR_8 = 0;
  }
  VAR_5 = FUNC_7(VAR_4, VAR_7, VAR_8, VAR_10);
  if (VAR_5 == 1)

   break;
  if (VAR_5)
   goto out;
  VAR_8 = 0;
 }

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto out;







 VAR_4->budg_uncommitted_idx = FUNC_2(&VAR_4->dirty_zn_cnt);
 VAR_4->budg_uncommitted_idx *= VAR_4->max_idx_node_sz;

 FUNC_9(VAR_4->bud_bytes <= VAR_4->max_bud_bytes || VAR_4->need_recovery);
 FUNC_3("finished, log head LEB %d:%d, max_sqnum %llu, "
  "highest_inum %lu", VAR_4->lhead_lnum, VAR_4->lhead_offs, VAR_4->max_sqnum,
  (unsigned long)VAR_4->highest_inum);
out:
 FUNC_5(VAR_4);
 FUNC_4(VAR_4);
 FUNC_11(VAR_10);
 VAR_4->replaying = 0;
 return VAR_5;
}
