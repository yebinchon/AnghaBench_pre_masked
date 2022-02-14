
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {int radio_enabled; } ;
typedef int buf ;
struct TYPE_3__ {size_t SsidLength; int Ssid; } ;
typedef TYPE_1__ NDIS_802_11_SSID ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct wpa_driver_ndis_data *VAR_1,
        const u8 *VAR_2, size_t VAR_3)
{
 NDIS_802_11_SSID VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.SsidLength = VAR_3;
 FUNC_1(VAR_4.Ssid, VAR_2, VAR_3);





 VAR_1->radio_enabled = 1;
 return FUNC_0(VAR_1, VAR_0, (char *) &VAR_4, sizeof(VAR_4));
}
