
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {struct hostapd_radius_servers* conf; } ;
struct hostapd_radius_servers {int dummy; } ;



void FUNC_0(struct radius_client_data *VAR_0,
       struct hostapd_radius_servers *VAR_1)
{
 if (VAR_0)
  VAR_0->conf = VAR_1;
}
