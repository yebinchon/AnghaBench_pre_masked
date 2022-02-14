
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ie_data {int key_mgmt; int group_cipher; int const pairwise_cipher; scalar_t__ proto; int mgmt_group_cipher; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,char*,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,char*,char const**,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static dbus_bool_t FUNC_7(
 const struct wpa_dbus_property_desc *VAR_20,
 DBusMessageIter *VAR_21, struct wpa_ie_data *VAR_22, DBusError *VAR_23)
{
 DBusMessageIter VAR_24, VAR_25;
 const char *VAR_26;
 const char *VAR_27[5];
 const char *VAR_28[15];
 int VAR_29;

 if (!FUNC_1(VAR_21, VAR_1,
           "a{sv}", &VAR_25))
  goto nomem;

 if (!FUNC_6(&VAR_25, &VAR_24))
  goto nomem;







 VAR_29 = 0;
 if (VAR_22->key_mgmt & VAR_16)
  VAR_28[VAR_29++] = "wpa-psk";
 if (VAR_22->key_mgmt & VAR_9)
  VAR_28[VAR_29++] = "wpa-ft-psk";
 if (VAR_22->key_mgmt & VAR_17)
  VAR_28[VAR_29++] = "wpa-psk-sha256";
 if (VAR_22->key_mgmt & VAR_11)
  VAR_28[VAR_29++] = "wpa-eap";
 if (VAR_22->key_mgmt & VAR_8)
  VAR_28[VAR_29++] = "wpa-ft-eap";
 if (VAR_22->key_mgmt & VAR_12)
  VAR_28[VAR_29++] = "wpa-eap-sha256";
 if (VAR_22->key_mgmt & VAR_15)
  VAR_28[VAR_29++] = "wpa-none";

 if (!FUNC_4(&VAR_24, "KeyMgmt",
            VAR_28, VAR_29))
  goto nomem;


 switch (VAR_22->group_cipher) {
 case 128:
  VAR_26 = "wep40";
  break;
 case 130:
  VAR_26 = "tkip";
  break;
 case 134:
  VAR_26 = "ccmp";
  break;
 case 132:
  VAR_26 = "gcmp";
  break;
 case 129:
  VAR_26 = "wep104";
  break;
 case 133:
  VAR_26 = "ccmp-256";
  break;
 case 131:
  VAR_26 = "gcmp-256";
  break;
 default:
  VAR_26 = "";
  break;
 }

 if (!FUNC_3(&VAR_24, "Group", VAR_26))
  goto nomem;


 VAR_29 = 0;
 if (VAR_22->pairwise_cipher & 130)
  VAR_27[VAR_29++] = "tkip";
 if (VAR_22->pairwise_cipher & 134)
  VAR_27[VAR_29++] = "ccmp";
 if (VAR_22->pairwise_cipher & 132)
  VAR_27[VAR_29++] = "gcmp";
 if (VAR_22->pairwise_cipher & 133)
  VAR_27[VAR_29++] = "ccmp-256";
 if (VAR_22->pairwise_cipher & 131)
  VAR_27[VAR_29++] = "gcmp-256";

 if (!FUNC_4(&VAR_24, "Pairwise",
            VAR_27, VAR_29))
  goto nomem;


 if (VAR_22->proto == VAR_19) {
  switch (VAR_22->mgmt_group_cipher) {





  default:
   VAR_26 = "";
   break;
  }

  if (!FUNC_3(&VAR_24, "MgmtGroup",
       VAR_26))
   goto nomem;
 }

 if (!FUNC_5(&VAR_25, &VAR_24) ||
     !FUNC_0(VAR_21, &VAR_25))
  goto nomem;

 return VAR_3;

nomem:
 FUNC_2(VAR_23, VAR_0, "no memory");
 return VAR_2;
}
