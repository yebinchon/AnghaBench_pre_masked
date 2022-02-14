
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; int addr; int acct_terminate_cause; } ;
struct hostapd_data {int tkip_countermeasures; struct sta_info* sta_list; int wpa_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (int ,struct hostapd_data*,int *) ;
 int FUNC_2 (int,int ,int ,struct hostapd_data*,int *) ;
 int FUNC_3 (struct hostapd_data*,int) ;
 int FUNC_4 (struct hostapd_data*,int ,int ) ;
 int FUNC_5 (struct hostapd_data*,int *,int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_6 (struct hostapd_data*,struct sta_info*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct hostapd_data *VAR_6)
{
 struct sta_info *VAR_7;

 FUNC_5(VAR_6, ((void*)0), VAR_1,
         VAR_0, "TKIP countermeasures initiated");

 FUNC_7(VAR_6->wpa_auth);
 VAR_6->tkip_countermeasures = 1;
 FUNC_3(VAR_6, 1);
 FUNC_8(VAR_6->wpa_auth);
 FUNC_1(VAR_5, VAR_6, ((void*)0));
 FUNC_2(60, 0, VAR_5,
          VAR_6, ((void*)0));
 while ((VAR_7 = VAR_6->sta_list)) {
  VAR_7->acct_terminate_cause =
   VAR_2;
  if (VAR_7->flags & VAR_4) {
   FUNC_6(
    VAR_6, VAR_7,
    VAR_3);
  }
  FUNC_4(VAR_6, VAR_7->addr,
           VAR_3);
  FUNC_0(VAR_6, VAR_7);
 }
}
