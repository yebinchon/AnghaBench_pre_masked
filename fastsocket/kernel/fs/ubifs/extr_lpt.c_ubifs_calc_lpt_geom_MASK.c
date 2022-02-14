
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int lpt_sz; scalar_t__ leb_size; int lpt_lebs; scalar_t__ ltab_sz; int big_lpt; int check_lpt_free; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct ubifs_info *VAR_1)
{
 int VAR_2;
 long long VAR_3;

 FUNC_1(VAR_1);


 VAR_3 = VAR_1->lpt_sz * 2;
 VAR_2 = FUNC_0(VAR_3 + VAR_1->leb_size - 1, VAR_1->leb_size);
 if (VAR_2 > VAR_1->lpt_lebs) {
  FUNC_2("too few LPT LEBs");
  return -VAR_0;
 }


 if (VAR_1->ltab_sz > VAR_1->leb_size) {
  FUNC_2("LPT ltab too big");
  return -VAR_0;
 }

 VAR_1->check_lpt_free = VAR_1->big_lpt;
 return 0;
}
