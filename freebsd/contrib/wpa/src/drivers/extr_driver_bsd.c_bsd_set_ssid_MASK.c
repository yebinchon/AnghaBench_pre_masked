
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ifreq {void* ifr_data; int ifr_name; } ;
struct ieee80211_nwid {int i_len; int i_nwid; } ;
struct bsd_driver_data {TYPE_1__* global; int ifname; } ;
typedef int ifr ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct bsd_driver_data*,int ,int const*,int) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, const u8 *VAR_3, int VAR_4)
{
 struct bsd_driver_data *VAR_5 = VAR_2;
 return FUNC_4(VAR_5, VAR_0, VAR_3, VAR_4);

}
