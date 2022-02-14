
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_quota_priv {scalar_t__ quota; } ;
struct xt_quota_info {int flags; scalar_t__ quota; struct xt_quota_priv* master; } ;
struct xt_match_param {scalar_t__ matchinfo; } ;
struct sk_buff {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 struct xt_quota_info *VAR_4 = (void *)VAR_3->matchinfo;
 struct xt_quota_priv *VAR_5 = VAR_4->master;
 bool VAR_6 = VAR_4->flags & VAR_0;

 FUNC_0(&VAR_1);
 if (VAR_5->quota >= VAR_2->len) {
  VAR_5->quota -= VAR_2->len;
  VAR_6 = !VAR_6;
 } else {

  VAR_5->quota = 0;
 }

 VAR_4->quota = VAR_5->quota;
 FUNC_1(&VAR_1);

 return VAR_6;
}
