
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {scalar_t__ matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ebt_limit_info {scalar_t__ credit; scalar_t__ credit_cap; scalar_t__ cost; int prev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_3, const struct xt_match_param *VAR_4)
{
 struct ebt_limit_info *VAR_5 = (void *)VAR_4->matchinfo;
 unsigned long VAR_6 = VAR_1;

 FUNC_0(&VAR_2);
 VAR_5->credit += (VAR_6 - FUNC_2(&VAR_5->prev, VAR_6)) * VAR_0;
 if (VAR_5->credit > VAR_5->credit_cap)
  VAR_5->credit = VAR_5->credit_cap;

 if (VAR_5->credit >= VAR_5->cost) {

  VAR_5->credit -= VAR_5->cost;
  FUNC_1(&VAR_2);
  return 1;
 }

 FUNC_1(&VAR_2);
 return 0;
}
