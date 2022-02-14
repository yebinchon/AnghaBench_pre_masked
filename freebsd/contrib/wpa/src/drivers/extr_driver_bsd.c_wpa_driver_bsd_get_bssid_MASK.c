
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_bssid {int i_bssid; int i_name; } ;
struct bsd_driver_data {TYPE_1__* global; int ifname; } ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bsd_driver_data*,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct ieee80211_bssid*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_3, u8 *VAR_4)
{
 struct bsd_driver_data *VAR_5 = VAR_3;
 return FUNC_0(VAR_5, VAR_1,
  VAR_4, VAR_0) < 0 ? -1 : 0;

}
