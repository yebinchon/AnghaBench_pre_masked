
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {int dummy; } ;
typedef int status ;
struct TYPE_2__ {int StatusType; } ;
typedef TYPE_1__ NDIS_802_11_STATUS_INDICATION ;


 int VAR_0 ;


 int FUNC_0 (struct wpa_driver_ndis_data*,int const*,size_t) ;
 int FUNC_1 (struct wpa_driver_ndis_data*,int const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int) ;

void FUNC_4(struct wpa_driver_ndis_data *VAR_1,
       const u8 *VAR_2, size_t VAR_3)
{
 NDIS_802_11_STATUS_INDICATION *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 < sizeof(*VAR_4))
  return;

 FUNC_2(VAR_0, "NDIS: Media Specific Indication",
      VAR_2, VAR_3);

 VAR_4 = (NDIS_802_11_STATUS_INDICATION *) VAR_2;
 VAR_2 += sizeof(VAR_4);
 VAR_3 -= sizeof(VAR_4);

 switch (VAR_4->StatusType) {
 case 129:
  FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_3(VAR_0, "NDIS: Unknown StatusType %d",
      (int) VAR_4->StatusType);
  break;
 }
}
