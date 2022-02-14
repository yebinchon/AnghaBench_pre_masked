
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {int dummy; } ;
typedef int rkey ;
typedef int index ;
struct TYPE_3__ {int Length; int KeyIndex; int BSSID; } ;
typedef TYPE_1__ NDIS_802_11_REMOVE_KEY ;
typedef int NDIS_802_11_KEY_INDEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct wpa_driver_ndis_data *VAR_3,
          int VAR_4, const u8 *VAR_5,
          const u8 *VAR_6, int VAR_7)
{
 NDIS_802_11_REMOVE_KEY VAR_8;
 NDIS_802_11_KEY_INDEX VAR_9;
 int VAR_10, VAR_11;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.Length = sizeof(VAR_8);
 VAR_8.KeyIndex = VAR_4;
 if (VAR_7)
  VAR_8.KeyIndex |= 1 << 30;
 FUNC_1(VAR_8.BSSID, VAR_6, VAR_0);

 VAR_10 = FUNC_0(VAR_3, VAR_1, (char *) &VAR_8,
      sizeof(VAR_8));
 if (!VAR_7) {
  VAR_9 = VAR_4;
  VAR_11 = FUNC_0(VAR_3, VAR_2,
        (char *) &VAR_9, sizeof(VAR_9));
 } else
  VAR_11 = 0;

 if (VAR_10 < 0 && VAR_11 < 0)
  return -1;
 return 0;
}
