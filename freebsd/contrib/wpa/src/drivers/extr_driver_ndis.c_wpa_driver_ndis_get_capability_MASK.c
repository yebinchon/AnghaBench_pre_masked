
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int auth; size_t key_mgmt; int enc; int flags; } ;
struct wpa_driver_ndis_data {int has_capability; TYPE_1__ capa; scalar_t__ no_of_pmkid; } ;
typedef int buf ;
struct TYPE_6__ {int AuthModeSupported; int EncryptStatusSupported; } ;
struct TYPE_5__ {int Version; size_t NoOfAuthEncryptPairsSupported; TYPE_3__* AuthenticationEncryptionSupported; scalar_t__ NoOfPMKIDs; } ;
typedef TYPE_2__ NDIS_802_11_CAPABILITY ;
typedef TYPE_3__ NDIS_802_11_AUTHENTICATION_ENCRYPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_1 (struct wpa_driver_ndis_data*) ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct wpa_driver_ndis_data *VAR_15)
{
 char VAR_16[512];
 int VAR_17;
 size_t VAR_18;
 NDIS_802_11_CAPABILITY *VAR_19;

 VAR_15->capa.flags = VAR_14;

 VAR_17 = FUNC_0(VAR_15, VAR_2, VAR_16, sizeof(VAR_16));
 if (VAR_17 < 0) {
  FUNC_1(VAR_15);
  return;
 }

 FUNC_2(VAR_1, "OID_802_11_CAPABILITY", (u8 *) VAR_16, VAR_17);
 VAR_19 = (NDIS_802_11_CAPABILITY *) VAR_16;
 if (VAR_17 < sizeof(*VAR_19) || VAR_19->Version != 2) {
  FUNC_3(VAR_0, "NDIS: unsupported "
      "OID_802_11_CAPABILITY data");
  return;
 }
 FUNC_3(VAR_0, "NDIS: Driver supports OID_802_11_CAPABILITY - "
     "NoOfPMKIDs %d NoOfAuthEncrPairs %d",
     (int) VAR_19->NoOfPMKIDs,
     (int) VAR_19->NoOfAuthEncryptPairsSupported);
 VAR_15->has_capability = 1;
 VAR_15->no_of_pmkid = VAR_19->NoOfPMKIDs;
 for (VAR_18 = 0; VAR_18 < VAR_19->NoOfAuthEncryptPairsSupported; VAR_18++) {
  NDIS_802_11_AUTHENTICATION_ENCRYPTION *VAR_20;
  VAR_20 = &VAR_19->AuthenticationEncryptionSupported[VAR_18];
  if ((char *) (VAR_20 + 1) > VAR_16 + VAR_17) {
   FUNC_3(VAR_0, "NDIS: auth/encr pair list "
       "overflow");
   break;
  }
  FUNC_3(VAR_1, "NDIS: %d - auth %d encr %d",
      VAR_18, (int) VAR_20->AuthModeSupported,
      (int) VAR_20->EncryptStatusSupported);
  switch (VAR_20->AuthModeSupported) {
  case 137:
   VAR_15->capa.auth |= VAR_3;
   break;
  case 136:
   VAR_15->capa.auth |= VAR_4;
   break;
  case 135:
   VAR_15->capa.key_mgmt |= VAR_9;
   break;
  case 131:
   VAR_15->capa.key_mgmt |= VAR_13;
   break;
  case 134:
   VAR_15->capa.key_mgmt |= VAR_10;
   break;
  case 133:
   VAR_15->capa.key_mgmt |=
    VAR_11;
   break;
  case 132:
   VAR_15->capa.key_mgmt |=
    VAR_12;
   break;
  default:
   break;
  }
  switch (VAR_20->EncryptStatusSupported) {
  case 130:
   VAR_15->capa.enc |= VAR_8;
   VAR_15->capa.enc |= VAR_7;
   break;
  case 129:
   VAR_15->capa.enc |= VAR_6;
   break;
  case 128:
   VAR_15->capa.enc |= VAR_5;
   break;
  default:
   break;
  }
 }

 FUNC_3(VAR_0, "NDIS: driver capabilities: key_mgmt 0x%x "
     "enc 0x%x auth 0x%x",
     VAR_15->capa.key_mgmt, VAR_15->capa.enc, VAR_15->capa.auth);
}
