
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {int addr; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_3__ {size_t ssid_len; int ssid; } ;
struct TYPE_4__ {TYPE_1__ ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*,int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_1 (int const*,int ,size_t) ;
 int FUNC_2 (int const*,size_t) ;

__attribute__((used)) static u16 FUNC_3(struct hostapd_data *VAR_4, struct sta_info *VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{
 if (VAR_6 == ((void*)0))
  return VAR_3;

 if (VAR_7 != VAR_4->conf->ssid.ssid_len ||
     FUNC_1(VAR_6, VAR_4->conf->ssid.ssid, VAR_7) != 0) {
  FUNC_0(VAR_4, VAR_5->addr, VAR_1,
          VAR_0,
          "Station tried to associate with unknown SSID "
          "'%s'", FUNC_2(VAR_6, VAR_7));
  return VAR_3;
 }

 return VAR_2;
}
