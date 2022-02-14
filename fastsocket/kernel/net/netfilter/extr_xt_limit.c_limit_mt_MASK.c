
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateinfo {scalar_t__ credit_cap; scalar_t__ cost; struct xt_limit_priv* master; } ;
struct xt_match_param {struct xt_rateinfo* matchinfo; } ;
struct xt_limit_priv {scalar_t__ credit; int prev; } ;
struct sk_buff {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_3, const struct xt_match_param *VAR_4)
{
 const struct xt_rateinfo *VAR_5 = VAR_4->matchinfo;
 struct xt_limit_priv *VAR_6 = VAR_5->master;
 unsigned long VAR_7 = VAR_1;

 FUNC_0(&VAR_2);
 VAR_6->credit += (VAR_7 - FUNC_2(&VAR_6->prev, VAR_7)) * VAR_0;
 if (VAR_6->credit > VAR_5->credit_cap)
  VAR_6->credit = VAR_5->credit_cap;

 if (VAR_6->credit >= VAR_5->cost) {

  VAR_6->credit -= VAR_5->cost;
  FUNC_1(&VAR_2);
  return 1;
 }

 FUNC_1(&VAR_2);
 return 0;
}
