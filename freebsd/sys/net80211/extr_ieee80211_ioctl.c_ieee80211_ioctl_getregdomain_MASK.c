
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int ic_regdomain; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_1,
 const struct ieee80211req *VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->iv_ic;

 if (VAR_2->i_len != sizeof(VAR_3->ic_regdomain))
  return VAR_0;
 return FUNC_0(&VAR_3->ic_regdomain, VAR_2->i_data,
     sizeof(VAR_3->ic_regdomain));
}
