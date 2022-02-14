
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct openbsd_driver_data {int sock; int ifname; } ;
struct ieee80211_keyavail {int i_key; int i_macaddr; int i_name; } ;
typedef int keyavail ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct ieee80211_keyavail*) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (struct ieee80211_keyavail*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (void*,int ) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_3, void *VAR_4, enum wpa_alg VAR_5,
     const unsigned char *VAR_6, int VAR_7, int VAR_8, const u8 *VAR_9,
     size_t VAR_10, const u8 *VAR_11, size_t VAR_12)
{
 struct openbsd_driver_data *VAR_13 = VAR_4;
 struct ieee80211_keyavail VAR_14;

 if (VAR_5 != VAR_2 || VAR_12 > VAR_0)
  return -1;

 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 FUNC_3(VAR_14.i_name, VAR_13->ifname, sizeof(VAR_14.i_name));
 if (FUNC_4(VAR_4, VAR_14.i_macaddr) < 0)
  return -1;
 FUNC_1(VAR_14.i_key, VAR_11, VAR_12);

 if (FUNC_0(VAR_13->sock, VAR_1, &VAR_14) < 0)
  return -1;

 return 0;
}
