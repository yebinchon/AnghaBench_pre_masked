
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int acct_session_id; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (int *,int) ;

int FUNC_1(struct hostapd_data *VAR_0, struct sta_info *VAR_1)
{
 return FUNC_0((u8 *) &VAR_1->acct_session_id,
         sizeof(VAR_1->acct_session_id));
}
