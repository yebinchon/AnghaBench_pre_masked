
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int eapol_sm; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int * FUNC_1 (int ,size_t*) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, const u8 *VAR_2, u8 *VAR_3,
        size_t *VAR_4)
{
 struct hostapd_data *VAR_5 = VAR_1;
 const u8 *VAR_6;
 size_t VAR_7;
 struct sta_info *VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_0, "AUTH_GET_MSK: Cannot find STA");
  return -1;
 }

 VAR_6 = FUNC_1(VAR_8->eapol_sm, &VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "AUTH_GET_MSK: Key is null, eapol_sm: %p",
      VAR_8->eapol_sm);
  return -1;
 }

 if (VAR_7 > *VAR_4)
  VAR_7 = *VAR_4;
 FUNC_2(VAR_3, VAR_6, VAR_7);
 *VAR_4 = VAR_7;

 return 0;
}
