
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_string ;
struct wpabuf {int dummy; } ;
struct upnp_wps_device_sm {int dummy; } ;
struct upnp_wps_device_interface {TYPE_2__* wps; } ;
struct TYPE_3__ {char* manufacturer; char* model_name; char const* model_number; char const* serial_number; } ;
struct TYPE_4__ {char* friendly_name; char const* manufacturer_url; char const* model_description; char const* model_url; char const* upc; int uuid; TYPE_1__ dev; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wpabuf*,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (struct wpabuf*,char*,char const*) ;
 int FUNC_4 (struct wpabuf*,char const*,int ) ;

__attribute__((used)) static void FUNC_5(struct upnp_wps_device_interface *VAR_2,
      struct upnp_wps_device_sm *VAR_3,
      struct wpabuf *VAR_4)
{
 const char *VAR_5;
 char VAR_6[80];

 FUNC_2(VAR_4, VAR_1);





 VAR_5 = VAR_2->wps->friendly_name;
 VAR_5 = ((VAR_5 && *VAR_5) ? VAR_5 : "WPS Access Point");
 FUNC_3(VAR_4, "friendlyName", VAR_5);

 VAR_5 = VAR_2->wps->dev.manufacturer;
 VAR_5 = ((VAR_5 && *VAR_5) ? VAR_5 : "");
 FUNC_3(VAR_4, "manufacturer", VAR_5);

 if (VAR_2->wps->manufacturer_url)
  FUNC_3(VAR_4, "manufacturerURL",
        VAR_2->wps->manufacturer_url);

 if (VAR_2->wps->model_description)
  FUNC_3(VAR_4, "modelDescription",
        VAR_2->wps->model_description);

 VAR_5 = VAR_2->wps->dev.model_name;
 VAR_5 = ((VAR_5 && *VAR_5) ? VAR_5 : "");
 FUNC_3(VAR_4, "modelName", VAR_5);

 if (VAR_2->wps->dev.model_number)
  FUNC_3(VAR_4, "modelNumber",
        VAR_2->wps->dev.model_number);

 if (VAR_2->wps->model_url)
  FUNC_3(VAR_4, "modelURL", VAR_2->wps->model_url);

 if (VAR_2->wps->dev.serial_number)
  FUNC_3(VAR_4, "serialNumber",
        VAR_2->wps->dev.serial_number);

 FUNC_1(VAR_2->wps->uuid, VAR_6, sizeof(VAR_6));
 VAR_5 = VAR_6;



 FUNC_2(VAR_4, "<UDN>uuid:");
 FUNC_4(VAR_4, VAR_5, FUNC_0(VAR_5));
 FUNC_2(VAR_4, "</UDN>\n");

 if (VAR_2->wps->upc)
  FUNC_3(VAR_4, "UPC", VAR_2->wps->upc);

 FUNC_2(VAR_4, VAR_0);
}
