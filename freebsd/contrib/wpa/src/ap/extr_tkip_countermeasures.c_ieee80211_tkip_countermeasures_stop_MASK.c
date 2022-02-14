
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {scalar_t__ tkip_countermeasures; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,int ) ;
 int FUNC_1 (struct hostapd_data*,int *,int ,int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2,
      void *VAR_3)
{
 struct hostapd_data *VAR_4 = VAR_2;
 VAR_4->tkip_countermeasures = 0;
 FUNC_0(VAR_4, 0);
 FUNC_1(VAR_4, ((void*)0), VAR_1,
         VAR_0, "TKIP countermeasures ended");
}
