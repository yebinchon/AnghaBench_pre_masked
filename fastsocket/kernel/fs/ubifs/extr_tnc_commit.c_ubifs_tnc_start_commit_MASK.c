
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_zbranch {int dummy; } ;
struct TYPE_2__ {int idx_lebs; } ;
struct ubifs_info {scalar_t__ min_idx_lebs; int tnc_mutex; int calc_idx_sz; TYPE_1__ lst; int space_lock; scalar_t__ budg_uncommitted_idx; int old_idx_sz; int zroot; int dirty_zn_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,int,int) ;
 int FUNC_9 (struct ubifs_zbranch*,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (struct ubifs_info*) ;
 int FUNC_16 (struct ubifs_info*) ;

int FUNC_17(struct ubifs_info *VAR_1, struct ubifs_zbranch *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 FUNC_10(&VAR_1->tnc_mutex);
 VAR_3 = FUNC_2(VAR_1, 1);
 if (VAR_3)
  goto out;
 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4 != 0) {
  int VAR_5 = 0;

  VAR_3 = FUNC_0(VAR_1, VAR_4);
  if (VAR_3 == -VAR_0)
   VAR_5 = 1;
  else if (VAR_3)
   goto out_free;
  VAR_3 = FUNC_8(VAR_1, VAR_5, VAR_4);
  if (VAR_3)
   goto out_free;
  FUNC_14(FUNC_1(&VAR_1->dirty_zn_cnt) == 0);
  VAR_3 = FUNC_6(VAR_1);
  if (VAR_3)
   goto out;
 }
 FUNC_4(VAR_1);
 FUNC_9(VAR_2, &VAR_1->zroot, sizeof(struct ubifs_zbranch));

 VAR_3 = FUNC_16(VAR_1);
 if (VAR_3)
  goto out;

 FUNC_12(&VAR_1->space_lock);
 FUNC_14(VAR_1->min_idx_lebs == FUNC_15(VAR_1));
 VAR_1->old_idx_sz = VAR_1->calc_idx_sz;
 VAR_1->budg_uncommitted_idx = 0;
 VAR_1->min_idx_lebs = FUNC_15(VAR_1);
 FUNC_13(&VAR_1->space_lock);
 FUNC_11(&VAR_1->tnc_mutex);

 FUNC_3("number of index LEBs %d", VAR_1->lst.idx_lebs);
 FUNC_3("size of index %llu", VAR_1->calc_idx_sz);
 return VAR_3;

out_free:
 FUNC_5(VAR_1);
out:
 FUNC_11(&VAR_1->tnc_mutex);
 return VAR_3;
}
