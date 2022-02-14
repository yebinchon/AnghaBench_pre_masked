
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int radius; int acct_session_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct hostapd_data*) ;
 int FUNC_2 (int ,int ,struct hostapd_data*) ;
 scalar_t__ FUNC_3 (int *,int) ;

int FUNC_4(struct hostapd_data *VAR_3)
{
 if (FUNC_3((u8 *) &VAR_3->acct_session_id,
      sizeof(VAR_3->acct_session_id)) < 0)
  return -1;

 if (FUNC_1(VAR_3->radius, VAR_0,
       VAR_2, VAR_3))
  return -1;
 FUNC_2(VAR_3->radius,
        VAR_1, VAR_3);

 FUNC_0(VAR_3, 1);

 return 0;
}
