
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ifreq {void* ifr_data; int ifr_name; } ;
struct ieee80211_nwid {scalar_t__ i_len; int i_nwid; } ;
struct bsd_driver_data {TYPE_1__* global; int ifname; } ;
typedef int ifr ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bsd_driver_data*,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,struct ifreq*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct bsd_driver_data *VAR_6 = VAR_3;
 return FUNC_0(VAR_6, VAR_0, VAR_4, VAR_1);

}
