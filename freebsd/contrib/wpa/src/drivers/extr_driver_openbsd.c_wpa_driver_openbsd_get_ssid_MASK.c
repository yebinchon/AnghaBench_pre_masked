
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct openbsd_driver_data {int sock; int ifname; } ;
struct ifreq {void* ifr_data; int ifr_name; } ;
struct ieee80211_nwid {scalar_t__ i_len; int i_nwid; } ;
typedef int ifr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2, u8 *VAR_3)
{
 struct openbsd_driver_data *VAR_4 = VAR_2;
 struct ieee80211_nwid VAR_5;
 struct ifreq VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_6.ifr_name, VAR_4->ifname, sizeof(VAR_6.ifr_name));
 VAR_6.ifr_data = (void *)&VAR_5;
 if (FUNC_0(VAR_4->sock, VAR_1, &VAR_6) < 0 ||
     VAR_5.i_len > VAR_0)
  return -1;

 FUNC_1(VAR_3, VAR_5.i_nwid, VAR_5.i_len);
 return VAR_5.i_len;
}
