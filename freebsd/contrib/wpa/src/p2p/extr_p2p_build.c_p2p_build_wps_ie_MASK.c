
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {int ** wps_vendor_ext; TYPE_1__* cfg; } ;
struct TYPE_2__ {int config_methods; int num_sec_dev_types; int sec_dev_type; int dev_name; int pri_dev_type; int serial_number; int model_number; int model_name; int manufacturer; int uuid; } ;


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
 scalar_t__ FUNC_0 (struct wpabuf*,int ,int ) ;
 int FUNC_1 (struct wpabuf*,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct wpabuf*,int) ;
 int FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,int ) ;
 int FUNC_7 (struct wpabuf*,int *) ;
 int FUNC_8 (struct wpabuf*,int ,int) ;
 int FUNC_9 (struct wpabuf*,int ) ;
 int FUNC_10 (struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_12 (struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wpabuf*,int ,int *,int ,int ) ;

int FUNC_14(struct p2p_data *VAR_19, struct wpabuf *VAR_20, int VAR_21,
       int VAR_22)
{
 u8 *VAR_23;
 int VAR_24;

 if (FUNC_10(VAR_20) < 6)
  return -1;
 FUNC_9(VAR_20, VAR_14);
 VAR_23 = FUNC_4(VAR_20, 1);
 FUNC_6(VAR_20, VAR_15);

 if (FUNC_12(VAR_20) < 0)
  return -1;

 if (VAR_22) {
  if (FUNC_10(VAR_20) < 5)
   return -1;
  FUNC_5(VAR_20, VAR_11);
  FUNC_5(VAR_20, 1);
  FUNC_9(VAR_20, VAR_18);
 }

 if (VAR_21 >= 0) {
  if (FUNC_10(VAR_20) < 6)
   return -1;

  FUNC_5(VAR_20, VAR_2);
  FUNC_5(VAR_20, 2);
  FUNC_2(VAR_12, "P2P: WPS IE Device Password ID: %d",
      VAR_21);
  FUNC_5(VAR_20, VAR_21);
 }

 if (VAR_22) {
  if (FUNC_10(VAR_20) < 5)
   return -1;
  FUNC_5(VAR_20, VAR_7);
  FUNC_5(VAR_20, 1);
  FUNC_9(VAR_20, VAR_17);

  if (FUNC_11(VAR_20, VAR_19->cfg->uuid) < 0 ||
      FUNC_0(VAR_20, VAR_3,
           VAR_19->cfg->manufacturer) < 0 ||
      FUNC_0(VAR_20, VAR_4,
           VAR_19->cfg->model_name) < 0 ||
      FUNC_0(VAR_20, VAR_5,
           VAR_19->cfg->model_number) < 0 ||
      FUNC_0(VAR_20, VAR_9,
           VAR_19->cfg->serial_number) < 0)
   return -1;

  if (FUNC_10(VAR_20) < 4 + VAR_16)
   return -1;
  FUNC_5(VAR_20, VAR_6);
  FUNC_5(VAR_20, VAR_16);
  FUNC_8(VAR_20, VAR_19->cfg->pri_dev_type, VAR_16);

  if (FUNC_0(VAR_20, VAR_1, VAR_19->cfg->dev_name)
      < 0)
   return -1;

  if (FUNC_10(VAR_20) < 6)
   return -1;
  FUNC_5(VAR_20, VAR_0);
  FUNC_5(VAR_20, 2);
  FUNC_5(VAR_20, VAR_19->cfg->config_methods);
 }

 if (FUNC_13(VAR_20, 0, ((void*)0), 0, 0) < 0)
  return -1;

 if (VAR_22 && VAR_19->cfg->num_sec_dev_types) {
  if (FUNC_10(VAR_20) <
      4 + VAR_16 * VAR_19->cfg->num_sec_dev_types)
   return -1;
  FUNC_5(VAR_20, VAR_8);
  FUNC_5(VAR_20, VAR_16 *
    VAR_19->cfg->num_sec_dev_types);
  FUNC_8(VAR_20, VAR_19->cfg->sec_dev_type,
    VAR_16 *
    VAR_19->cfg->num_sec_dev_types);
 }


 for (VAR_24 = 0; VAR_24 < VAR_13; VAR_24++) {
  if (VAR_19->wps_vendor_ext[VAR_24] == ((void*)0))
   break;
  if (FUNC_10(VAR_20) <
      4 + FUNC_3(VAR_19->wps_vendor_ext[VAR_24]))
   continue;
  FUNC_5(VAR_20, VAR_10);
  FUNC_5(VAR_20, FUNC_3(VAR_19->wps_vendor_ext[VAR_24]));
  FUNC_7(VAR_20, VAR_19->wps_vendor_ext[VAR_24]);
 }

 FUNC_1(VAR_20, VAR_23);

 return 0;
}
