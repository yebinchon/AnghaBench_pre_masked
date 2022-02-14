
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct anqp_query_info {size_t num_extra_req; int* extra_req; } ;
struct TYPE_2__ {int ipaddr_type_configured; int venue_url; int fils_realms; int * domain_name; int * anqp_3gpp_cell_net; int * nai_realm_data; int * roaming_consortium; int * network_auth_type; int * venue_name; } ;
 int VAR_0 ;

 size_t VAR_1 ;


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
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct hostapd_data*,int) ;
 int FUNC_2 (int ,char*,int,struct anqp_query_info*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct hostapd_data *VAR_19, u16 VAR_20,
      struct anqp_query_info *VAR_21)
{
 switch (VAR_20) {
 case 138:
  FUNC_2(VAR_6, "Capability List", 1,
        VAR_21);
  break;
 case 128:
  FUNC_2(VAR_16, "Venue Name",
        VAR_19->conf->venue_name != ((void*)0), VAR_21);
  break;
 case 135:
  FUNC_2(VAR_9,
        "Emergency Call Number",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 case 131:
  FUNC_2(VAR_13, "Network Auth Type",
        VAR_19->conf->network_auth_type != ((void*)0), VAR_21);
  break;
 case 130:
  FUNC_2(VAR_14, "Roaming Consortium",
        VAR_19->conf->roaming_consortium != ((void*)0), VAR_21);
  break;
 case 133:
  FUNC_2(VAR_11,
        "IP Addr Type Availability",
        VAR_19->conf->ipaddr_type_configured, VAR_21);
  break;
 case 132:
  FUNC_2(VAR_12, "NAI Realm",
        VAR_19->conf->nai_realm_data != ((void*)0), VAR_21);
  break;
 case 142:
  FUNC_2(VAR_2,
        "3GPP Cellular Network",
        VAR_19->conf->anqp_3gpp_cell_net != ((void*)0), VAR_21);
  break;
 case 140:
  FUNC_2(VAR_4,
        "AP Geospatial Location",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 case 141:
  FUNC_2(VAR_3,
        "AP Civic Location",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 case 139:
  FUNC_2(VAR_5,
        "AP Location Public URI",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 case 137:
  FUNC_2(VAR_7, "Domain Name",
        VAR_19->conf->domain_name != ((void*)0), VAR_21);
  break;
 case 136:
  FUNC_2(VAR_8,
        "Emergency Alert URI",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 case 129:
  FUNC_2(VAR_15,
        "TDLS Capability",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 case 134:
  FUNC_2(VAR_10,
        "Emergency NAI",
        FUNC_1(VAR_19, VAR_20) != ((void*)0), VAR_21);
  break;
 default:







  if (VAR_20 == VAR_17 && VAR_19->conf->venue_url) {
   FUNC_3(VAR_18,
       "ANQP: Venue URL (local)");
  } else if (!FUNC_1(VAR_19, VAR_20)) {
   FUNC_3(VAR_18, "ANQP: Unsupported Info Id %u",
       VAR_20);
   break;
  }
  if (VAR_21->num_extra_req == VAR_1) {
   FUNC_3(VAR_18,
       "ANQP: No more room for extra requests - ignore Info Id %u",
       VAR_20);
   break;
  }
  FUNC_3(VAR_18, "ANQP: Info Id %u (local)", VAR_20);
  VAR_21->extra_req[VAR_21->num_extra_req] = VAR_20;
  VAR_21->num_extra_req++;
  break;
 }
}
