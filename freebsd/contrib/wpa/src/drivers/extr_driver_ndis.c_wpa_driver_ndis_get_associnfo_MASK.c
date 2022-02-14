
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int req_ies_len; int resp_ies_len; int beacon_ies_len; int * beacon_ies; int * resp_ies; int * req_ies; } ;
union wpa_event_data {TYPE_1__ assoc_info; } ;
typedef int u8 ;
struct wpa_driver_ndis_data {int ctx; int bssid; } ;
typedef int data ;
typedef int buf ;
struct TYPE_10__ {unsigned int OffsetRequestIEs; unsigned int OffsetResponseIEs; int RequestIELength; int ResponseIELength; int AvailableResponseFixedIEs; int AvailableRequestFixedIEs; } ;
struct TYPE_9__ {size_t NumberOfItems; int * Bssid; } ;
struct TYPE_8__ {int IELength; int Length; scalar_t__ IEs; int MacAddress; } ;
typedef TYPE_2__ NDIS_WLAN_BSSID_EX ;
typedef int NDIS_802_11_FIXED_IEs ;
typedef TYPE_3__ NDIS_802_11_BSSID_LIST_EX ;
typedef TYPE_4__ NDIS_802_11_ASSOCIATION_INFORMATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,size_t) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (union wpa_event_data*,int ,int) ;
 TYPE_3__* FUNC_4 (size_t) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static int FUNC_8(struct wpa_driver_ndis_data *VAR_6)
{
 char VAR_7[512], *VAR_8;
 NDIS_802_11_ASSOCIATION_INFORMATION *VAR_9;
 int VAR_10;
 union wpa_event_data VAR_11;
 NDIS_802_11_BSSID_LIST_EX *VAR_12;
 size_t VAR_13, VAR_14;

 VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_7,
      sizeof(VAR_7));
 if (VAR_10 < 0) {
  FUNC_6(VAR_2, "NDIS: failed to get association "
      "information");
  return -1;
 }
 if (VAR_10 > sizeof(VAR_7)) {




  FUNC_6(VAR_2, "NDIS: ignored bogus association "
      "information length %d", VAR_10);
  VAR_10 = FUNC_0(VAR_6, VAR_4,
       VAR_7, sizeof(VAR_7));
  if (VAR_10 < -1) {
   FUNC_6(VAR_2, "NDIS: re-reading association "
       "information failed");
   return -1;
  }
  if (VAR_10 > sizeof(VAR_7)) {
   FUNC_6(VAR_2, "NDIS: ignored bogus association"
       " information length %d (re-read)", VAR_10);
   VAR_10 = sizeof(VAR_7);
  }
 }
 FUNC_5(VAR_3, "NDIS: association information",
      (u8 *) VAR_7, VAR_10);
 if (VAR_10 < sizeof(*VAR_9)) {
  FUNC_6(VAR_2, "NDIS: too short association "
      "information");
  return -1;
 }
 VAR_9 = (NDIS_802_11_ASSOCIATION_INFORMATION *) VAR_7;
 FUNC_6(VAR_2, "NDIS: ReqFixed=0x%x RespFixed=0x%x off_req=%d "
     "off_resp=%d len_req=%d len_resp=%d",
     VAR_9->AvailableRequestFixedIEs, VAR_9->AvailableResponseFixedIEs,
     (int) VAR_9->OffsetRequestIEs, (int) VAR_9->OffsetResponseIEs,
     (int) VAR_9->RequestIELength, (int) VAR_9->ResponseIELength);

 if (VAR_9->OffsetRequestIEs + VAR_9->RequestIELength > (unsigned) VAR_10 ||
     VAR_9->OffsetResponseIEs + VAR_9->ResponseIELength > (unsigned) VAR_10) {
  FUNC_6(VAR_2, "NDIS: association information - "
      "IE overflow");
  return -1;
 }

 FUNC_5(VAR_3, "NDIS: Request IEs",
      (u8 *) VAR_7 + VAR_9->OffsetRequestIEs, VAR_9->RequestIELength);
 FUNC_5(VAR_3, "NDIS: Response IEs",
      (u8 *) VAR_7 + VAR_9->OffsetResponseIEs, VAR_9->ResponseIELength);

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.assoc_info.req_ies = (u8 *) VAR_7 + VAR_9->OffsetRequestIEs;
 VAR_11.assoc_info.req_ies_len = VAR_9->RequestIELength;
 VAR_11.assoc_info.resp_ies = (u8 *) VAR_7 + VAR_9->OffsetResponseIEs;
 VAR_11.assoc_info.resp_ies_len = VAR_9->ResponseIELength;

 VAR_13 = 65535;
 VAR_12 = FUNC_4(VAR_13);
 if (VAR_12 == ((void*)0))
  goto skip_scan_results;
 VAR_10 = FUNC_0(VAR_6, VAR_5, (char *) VAR_12, VAR_13);
 if (VAR_10 < 0) {
  FUNC_6(VAR_2, "NDIS: failed to get scan results");
  FUNC_1(VAR_12);
  VAR_12 = ((void*)0);
  goto skip_scan_results;
 }
 FUNC_6(VAR_2, "NDIS: %d BSSID items to process for AssocInfo",
     (unsigned int) VAR_12->NumberOfItems);

 VAR_8 = (char *) &VAR_12->Bssid[0];
 for (VAR_14 = 0; VAR_14 < VAR_12->NumberOfItems; VAR_14++) {
  NDIS_WLAN_BSSID_EX *VAR_15 = (NDIS_WLAN_BSSID_EX *) VAR_8;
  if (FUNC_2(VAR_6->bssid, VAR_15->MacAddress, VAR_0) == 0 &&
      VAR_15->IELength > sizeof(NDIS_802_11_FIXED_IEs)) {
   VAR_11.assoc_info.beacon_ies =
    ((u8 *) VAR_15->IEs) +
    sizeof(NDIS_802_11_FIXED_IEs);
   VAR_11.assoc_info.beacon_ies_len =
    VAR_15->IELength - sizeof(NDIS_802_11_FIXED_IEs);
   FUNC_5(VAR_3, "NDIS: Beacon IEs",
        VAR_11.assoc_info.beacon_ies,
        VAR_11.assoc_info.beacon_ies_len);
   break;
  }
  VAR_8 += VAR_15->Length;
  if (VAR_8 > (char *) VAR_12 + VAR_13)
   break;
 }

skip_scan_results:
 FUNC_7(VAR_6->ctx, VAR_1, &VAR_11);

 FUNC_1(VAR_12);

 return 0;
}
