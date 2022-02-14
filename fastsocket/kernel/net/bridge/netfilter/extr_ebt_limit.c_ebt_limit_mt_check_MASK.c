
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_limit_info* matchinfo; } ;
struct ebt_limit_info {int burst; int avg; scalar_t__ cost; scalar_t__ credit_cap; scalar_t__ credit; int prev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(const struct xt_mtchk_param *VAR_1)
{
 struct ebt_limit_info *VAR_2 = VAR_1->matchinfo;


 if (VAR_2->burst == 0 ||
     FUNC_1(VAR_2->avg * VAR_2->burst) < FUNC_1(VAR_2->avg)) {
  FUNC_0("Overflow in ebt_limit, try lower: %u/%u\n",
   VAR_2->avg, VAR_2->burst);
  return 0;
 }


 VAR_2->prev = VAR_0;
 VAR_2->credit = FUNC_1(VAR_2->avg * VAR_2->burst);
 VAR_2->credit_cap = FUNC_1(VAR_2->avg * VAR_2->burst);
 VAR_2->cost = FUNC_1(VAR_2->avg);
 return 1;
}
