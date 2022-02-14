
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dpp_auth; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, void *VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_1;

 if (!VAR_3->dpp_auth)
  return;
 FUNC_1(VAR_0, "DPP: Retry initiation after timeout");
 FUNC_0(VAR_3);
}
