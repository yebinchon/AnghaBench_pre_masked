
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {scalar_t__ acct_session_started; scalar_t__ acct_session_id; int addr; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*,int) ;
 int FUNC_1 (int ,struct hostapd_data*,struct sta_info*) ;
 int FUNC_2 (struct hostapd_data*,int ,int ,int ,char*,unsigned long long) ;

void FUNC_3(struct hostapd_data *VAR_3, struct sta_info *VAR_4)
{
 if (VAR_4->acct_session_started) {
  FUNC_0(VAR_3, VAR_4, 1);
  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_3, VAR_4->addr, VAR_1,
          VAR_0,
          "stopped accounting session %016llX",
          (unsigned long long) VAR_4->acct_session_id);
  VAR_4->acct_session_started = 0;
 }
}
