
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_3__ {char* vlan_tagged_interface; int vlan_naming; } ;
struct TYPE_4__ {TYPE_1__ ssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct hostapd_data*,char const*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char const*,int,struct hostapd_data*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, struct hostapd_data *VAR_2,
       int VAR_3)
{
 char *VAR_4 = VAR_2->conf->ssid.vlan_tagged_interface;
 int VAR_5 = VAR_2->conf->ssid.vlan_naming;

 FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_1) ? 0 : VAR_0);

 FUNC_2(VAR_1);

 if (VAR_4)
  FUNC_3(VAR_5, VAR_4, VAR_1,
        VAR_3, VAR_2);
}
