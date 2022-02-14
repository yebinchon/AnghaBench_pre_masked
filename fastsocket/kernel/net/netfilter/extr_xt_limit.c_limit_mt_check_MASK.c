
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateinfo {int burst; int avg; scalar_t__ cost; scalar_t__ credit_cap; struct xt_limit_priv* master; } ;
struct xt_mtchk_param {struct xt_rateinfo* matchinfo; } ;
struct xt_limit_priv {scalar_t__ credit; int prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xt_limit_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(const struct xt_mtchk_param *VAR_2)
{
 struct xt_rateinfo *VAR_3 = VAR_2->matchinfo;
 struct xt_limit_priv *VAR_4;


 if (VAR_3->burst == 0
     || FUNC_2(VAR_3->avg * VAR_3->burst) < FUNC_2(VAR_3->avg)) {
  FUNC_1("Overflow in xt_limit, try lower: %u/%u\n",
         VAR_3->avg, VAR_3->burst);
  return 0;
 }

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (VAR_4 == ((void*)0))
  return 0;


 VAR_3->master = VAR_4;
 if (VAR_3->cost == 0) {


  VAR_4->prev = VAR_1;
  VAR_4->credit = FUNC_2(VAR_3->avg * VAR_3->burst);
  VAR_3->credit_cap = FUNC_2(VAR_3->avg * VAR_3->burst);
  VAR_3->cost = FUNC_2(VAR_3->avg);
 }
 return 1;
}
