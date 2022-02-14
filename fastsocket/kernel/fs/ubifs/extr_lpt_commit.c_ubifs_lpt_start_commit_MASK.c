
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_lprops {int dummy; } ;
struct ubifs_info {int lpt_lebs; int lpt_drty_flgs; int lp_mutex; int ltab; int ltab_cmt; scalar_t__ big_lpt; int dirty_pn_cnt; scalar_t__ check_lpt_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct ubifs_info*) ;
 int FUNC_13 (struct ubifs_info*) ;
 int FUNC_14 (int) ;

int FUNC_15(struct ubifs_info *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_3("");

 FUNC_10(&VAR_2->lp_mutex);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  goto out;

 if (VAR_2->check_lpt_free) {






  VAR_2->check_lpt_free = 0;
  while (FUNC_12(VAR_2)) {
   FUNC_11(&VAR_2->lp_mutex);
   VAR_3 = FUNC_6(VAR_2);
   if (VAR_3)
    return VAR_3;
   FUNC_10(&VAR_2->lp_mutex);
  }
 }

 FUNC_7(VAR_2);

 if (!VAR_2->dirty_pn_cnt) {
  FUNC_2("no cnodes to commit");
  VAR_3 = 0;
  goto out;
 }

 if (!VAR_2->big_lpt && FUNC_12(VAR_2)) {

  VAR_3 = FUNC_8(VAR_2);
  if (VAR_3)
   goto out;
  FUNC_7(VAR_2);
 }

 if (VAR_2->big_lpt)
  FUNC_13(VAR_2);

 VAR_4 = FUNC_4(VAR_2);
 FUNC_14(VAR_4 != 0);

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  goto out;


 FUNC_9(VAR_2->ltab_cmt, VAR_2->ltab,
        sizeof(struct ubifs_lpt_lprops) * VAR_2->lpt_lebs);
 VAR_2->lpt_drty_flgs &= ~(VAR_1 | VAR_0);

out:
 FUNC_11(&VAR_2->lp_mutex);
 return VAR_3;
}
