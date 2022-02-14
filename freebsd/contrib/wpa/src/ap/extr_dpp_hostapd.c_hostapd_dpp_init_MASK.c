
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dpp_allowed_roles; int dpp_init_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*) ;

int FUNC_1(struct hostapd_data *VAR_2)
{
 VAR_2->dpp_allowed_roles = VAR_0 | VAR_1;
 VAR_2->dpp_init_done = 1;
 return FUNC_0(VAR_2);
}
