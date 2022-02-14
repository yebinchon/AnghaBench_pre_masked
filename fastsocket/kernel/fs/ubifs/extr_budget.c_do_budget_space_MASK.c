
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx_lebs; int empty_lebs; int taken_empty_lebs; } ;
struct ubifs_info {int freeable_cnt; int idx_gc_cnt; int min_idx_lebs; long long budg_data_growth; long long budg_dd_growth; long long rp_size; TYPE_1__ lst; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (char*,long long,long long,...) ;
 long long FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (struct ubifs_info*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_1)
{
 long long VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6;


 VAR_6 = FUNC_3(VAR_1);


 if (VAR_6 > VAR_1->lst.idx_lebs)
  VAR_5 = VAR_6 - VAR_1->lst.idx_lebs;
 else
  VAR_5 = 0;
 VAR_4 = VAR_1->lst.empty_lebs + VAR_1->freeable_cnt + VAR_1->idx_gc_cnt -
        VAR_1->lst.taken_empty_lebs;
 if (FUNC_4(VAR_5 > VAR_4)) {
  FUNC_1("out of indexing space: min_idx_lebs %d (old %d), "
    "rsvd_idx_lebs %d", VAR_6, VAR_1->min_idx_lebs,
    VAR_5);
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_6);
 VAR_2 = VAR_1->budg_data_growth + VAR_1->budg_dd_growth;

 if (FUNC_4(VAR_3 < VAR_2)) {
  FUNC_1("out of data space: available %lld, outstanding %lld",
    VAR_3, VAR_2);
  return -VAR_0;
 }

 if (VAR_3 - VAR_2 <= VAR_1->rp_size && !FUNC_0(VAR_1))
  return -VAR_0;

 VAR_1->min_idx_lebs = VAR_6;
 return 0;
}
