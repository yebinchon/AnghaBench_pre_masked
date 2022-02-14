
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dummy; } ;
struct mesh_rsn {TYPE_3__* wpa_s; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_7__ {TYPE_2__* ifmsh; TYPE_1__* current_ssid; } ;
struct TYPE_6__ {struct hostapd_data** bss; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (int ,TYPE_3__*,struct sta_info*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const u8 *VAR_3)
{
 struct mesh_rsn *VAR_4 = VAR_2;
 struct hostapd_data *VAR_5;
 struct sta_info *VAR_6;

 if (VAR_4->wpa_s->current_ssid->mode != VAR_0)
  return -1;

 VAR_5 = VAR_4->wpa_s->ifmsh->bss[0];
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6)
  FUNC_1(VAR_1, VAR_4->wpa_s, VAR_6);

 FUNC_2(VAR_4->wpa_s, VAR_3);
 return 0;
}
