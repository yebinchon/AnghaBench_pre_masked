
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int initiator; int intersect; } ;
struct ieee80211_regdomain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;
 struct ieee80211_regdomain const* FUNC_2 () ;
 struct regulatory_request* FUNC_3 () ;
 int FUNC_4 (struct ieee80211_regdomain const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct regulatory_request*) ;
 int FUNC_8 (struct ieee80211_regdomain const*) ;
 int VAR_2 ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

int FUNC_11(const struct ieee80211_regdomain *VAR_3)
{
 struct regulatory_request *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_2);
 VAR_4 = FUNC_3();


 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  if (VAR_5 == -VAR_0)
   FUNC_9();

  FUNC_4(VAR_3);
  goto out;
 }


 if (FUNC_0(!VAR_4->intersect && VAR_3 != FUNC_2())) {
  VAR_5 = -VAR_1;
  goto out;
 }


 FUNC_10(VAR_4->initiator);

 FUNC_8(FUNC_2());

 FUNC_7(VAR_4);

 FUNC_9();

 out:
 FUNC_6(&VAR_2);

 return VAR_5;
}
