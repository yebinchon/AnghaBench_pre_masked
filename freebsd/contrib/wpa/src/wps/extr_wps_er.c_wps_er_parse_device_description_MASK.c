
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap {void* event_sub_url; int location; void* control_url; void* scpd_url; void* upc; int uuid; void* udn; void* serial_number; void* model_url; void* model_number; void* model_name; void* model_description; void* manufacturer_url; void* manufacturer; void* friendly_name; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 char* FUNC_1 (void*,char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 char* FUNC_7 (char const*) ;
 void* FUNC_8 (char const*,char*) ;

__attribute__((used)) static void FUNC_9(struct wps_er_ap *VAR_2,
         struct wpabuf *VAR_3)
{

 const char *VAR_4, *VAR_5 = FUNC_5(VAR_3);
 char *VAR_6;

 FUNC_3(VAR_1, "WPS ER: Device info",
     FUNC_5(VAR_3), FUNC_6(VAR_3));






 VAR_4 = FUNC_7(VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_0, "WPS ER: WFADevice:1 device not found - "
      "trying to parse invalid data");
 } else
  VAR_5 = VAR_4;

 VAR_2->friendly_name = FUNC_8(VAR_5, "friendlyName");
 FUNC_4(VAR_0, "WPS ER: friendlyName='%s'", VAR_2->friendly_name);

 VAR_2->manufacturer = FUNC_8(VAR_5, "manufacturer");
 FUNC_4(VAR_0, "WPS ER: manufacturer='%s'", VAR_2->manufacturer);

 VAR_2->manufacturer_url = FUNC_8(VAR_5, "manufacturerURL");
 FUNC_4(VAR_0, "WPS ER: manufacturerURL='%s'",
     VAR_2->manufacturer_url);

 VAR_2->model_description = FUNC_8(VAR_5, "modelDescription");
 FUNC_4(VAR_0, "WPS ER: modelDescription='%s'",
     VAR_2->model_description);

 VAR_2->model_name = FUNC_8(VAR_5, "modelName");
 FUNC_4(VAR_0, "WPS ER: modelName='%s'", VAR_2->model_name);

 VAR_2->model_number = FUNC_8(VAR_5, "modelNumber");
 FUNC_4(VAR_0, "WPS ER: modelNumber='%s'", VAR_2->model_number);

 VAR_2->model_url = FUNC_8(VAR_5, "modelURL");
 FUNC_4(VAR_0, "WPS ER: modelURL='%s'", VAR_2->model_url);

 VAR_2->serial_number = FUNC_8(VAR_5, "serialNumber");
 FUNC_4(VAR_0, "WPS ER: serialNumber='%s'", VAR_2->serial_number);

 VAR_2->udn = FUNC_8(VAR_5, "UDN");
 if (VAR_2->udn) {
  FUNC_4(VAR_0, "WPS ER: UDN='%s'", VAR_2->udn);
  VAR_6 = FUNC_1(VAR_2->udn, "uuid:");
  if (VAR_6) {
   VAR_6 += 5;
   if (FUNC_2(VAR_6, VAR_2->uuid) < 0)
    FUNC_4(VAR_0,
        "WPS ER: Invalid UUID in UDN");
  }
 }

 VAR_2->upc = FUNC_8(VAR_5, "UPC");
 FUNC_4(VAR_0, "WPS ER: UPC='%s'", VAR_2->upc);

 VAR_2->scpd_url = FUNC_0(
  FUNC_8(VAR_5, "SCPDURL"), VAR_2->location);
 FUNC_4(VAR_0, "WPS ER: SCPDURL='%s'", VAR_2->scpd_url);

 VAR_2->control_url = FUNC_0(
  FUNC_8(VAR_5, "controlURL"), VAR_2->location);
 FUNC_4(VAR_0, "WPS ER: controlURL='%s'", VAR_2->control_url);

 VAR_2->event_sub_url = FUNC_0(
  FUNC_8(VAR_5, "eventSubURL"), VAR_2->location);
 FUNC_4(VAR_0, "WPS ER: eventSubURL='%s'", VAR_2->event_sub_url);
}
