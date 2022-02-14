
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int * eapol_sm; } ;
struct hostapd_data {int dummy; } ;


 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const u8 *VAR_1)
{
 struct hostapd_data *VAR_2 = VAR_0;
 struct sta_info *VAR_3;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 == ((void*)0) || VAR_3->eapol_sm == ((void*)0))
  return 0;
 return 1;
}
