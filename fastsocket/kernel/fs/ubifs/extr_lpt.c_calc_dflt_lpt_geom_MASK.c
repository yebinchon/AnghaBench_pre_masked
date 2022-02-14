
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int lpt_lebs; int main_lebs; int big_lpt; scalar_t__ lpt_sz; scalar_t__ leb_size; scalar_t__ ltab_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_2, int *VAR_3,
         int *VAR_4)
{
 int VAR_5, VAR_6;
 long long VAR_7;


 VAR_2->lpt_lebs = VAR_1;
 VAR_2->main_lebs = *VAR_3 - VAR_2->lpt_lebs;
 if (VAR_2->main_lebs <= 0)
  return -VAR_0;


 VAR_2->big_lpt = 0;





 FUNC_1(VAR_2);


 if (VAR_2->lpt_sz > VAR_2->leb_size) {

  VAR_2->big_lpt = 1;
  FUNC_1(VAR_2);
 }


 for (VAR_5 = 0; VAR_5 < 64 ; VAR_5++) {
  VAR_7 = VAR_2->lpt_sz * 4;
  VAR_6 = FUNC_0(VAR_7 + VAR_2->leb_size - 1, VAR_2->leb_size);
  if (VAR_6 > VAR_2->lpt_lebs) {

   VAR_2->lpt_lebs = VAR_6;
   VAR_2->main_lebs = *VAR_3 - VAR_2->lpt_lebs;
   if (VAR_2->main_lebs <= 0)
    return -VAR_0;
   FUNC_1(VAR_2);
   continue;
  }
  if (VAR_2->ltab_sz > VAR_2->leb_size) {
   FUNC_2("LPT ltab too big");
   return -VAR_0;
  }
  *VAR_3 = VAR_2->main_lebs;
  *VAR_4 = VAR_2->big_lpt;
  return 0;
 }
 return -VAR_0;
}
