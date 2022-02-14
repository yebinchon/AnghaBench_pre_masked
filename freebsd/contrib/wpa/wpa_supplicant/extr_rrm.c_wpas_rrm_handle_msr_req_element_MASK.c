
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int dst_addr; } ;
struct wpa_supplicant {int drv_rrm_flags; TYPE_1__ rrm; } ;
struct rrm_measurement_request_element {int type; int mode; int token; int len; scalar_t__ variable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int,void const*,int ,struct wpabuf**) ;
 int FUNC_3 (struct wpa_supplicant*,struct rrm_measurement_request_element const*,struct wpabuf**) ;
 scalar_t__ FUNC_4 (struct wpabuf**,int ,int ,int,int *,int ) ;

__attribute__((used)) static int
FUNC_5(
 struct wpa_supplicant *VAR_8,
 const struct rrm_measurement_request_element *VAR_9,
 struct wpabuf **VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_5, "Measurement request type %d token %d",
     VAR_9->type, VAR_9->token);

 if (VAR_9->mode & VAR_2) {

  FUNC_1(VAR_5, "RRM: Enable bit not supported, ignore");
  return 0;
 }

 if ((VAR_9->mode & VAR_3) &&
     VAR_9->type > VAR_4) {

  FUNC_1(VAR_5,
      "RRM: Parallel measurements are not supported, reject");
  goto reject;
 }

 VAR_11 =
  !!(VAR_9->mode & VAR_1);

 switch (VAR_9->type) {
 case 128:
  return FUNC_3(VAR_8, VAR_9, VAR_10);
 case 129:
  if (VAR_11 &&
      !(VAR_8->drv_rrm_flags &
        VAR_7)) {
   FUNC_1(VAR_5,
       "RRM: Driver does not support dwell time configuration - reject beacon report with mandatory duration");
   goto reject;
  }
  return FUNC_2(VAR_8, VAR_9->token,
       VAR_11,
       (const void *) VAR_9->variable,
       VAR_9->len - 3, VAR_10);
 default:
  FUNC_1(VAR_6,
      "RRM: Unsupported radio measurement type %u",
      VAR_9->type);
  break;
 }

reject:
 if (!FUNC_0(VAR_8->rrm.dst_addr) &&
     FUNC_4(VAR_10, VAR_9->token,
     VAR_0,
     VAR_9->type, ((void*)0), 0) < 0) {
  FUNC_1(VAR_5, "RRM: Failed to add report element");
  return -1;
 }

 return 0;
}
