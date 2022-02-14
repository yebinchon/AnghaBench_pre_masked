
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_chanswitch_req {int csa_mode; int csa_count; int csa_chan; } ;
struct afswtch {int dummy; } ;
typedef int csr ;


 int VAR_0 ;
 int FUNC_0 (int,int *,char const*) ;
 int FUNC_1 (int,int ,int ,int,struct ieee80211_chanswitch_req*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, int VAR_2, int VAR_3, const struct afswtch *VAR_4)
{
 struct ieee80211_chanswitch_req VAR_5;

 FUNC_0(VAR_3, &VAR_5.csa_chan, VAR_1);
 VAR_5.csa_mode = 1;
 VAR_5.csa_count = 5;
 FUNC_1(VAR_3, VAR_0, 0, sizeof(VAR_5), &VAR_5);
}
