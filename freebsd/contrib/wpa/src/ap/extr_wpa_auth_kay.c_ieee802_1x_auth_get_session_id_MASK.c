
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int eapol_sm; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_data *VAR_1,
       struct sta_info *VAR_2, u8 *VAR_3,
       size_t *VAR_4)
{
 const u8 *VAR_5;
 size_t VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_2->eapol_sm, &VAR_6);
 if (!VAR_5) {
  FUNC_2(VAR_0,
      "MACsec: Failed to get SessionID from EAPOL state machines");
  return -1;
 }

 VAR_7 = 1 + 2 * 32 ;
 if (VAR_7 > VAR_6) {
  FUNC_2(VAR_0, "EAP Session-Id not long enough");
  return -1;
 }

 FUNC_1(VAR_3, VAR_5, VAR_7);
 *VAR_4 = VAR_7;

 return 0;
}
