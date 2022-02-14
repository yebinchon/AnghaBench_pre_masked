
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct wps_registrar {scalar_t__ static_wep_only; TYPE_1__* wps; scalar_t__ dualband; int * set_ie_cb; } ;
struct wpabuf {int dummy; } ;
typedef int ms_wps ;
struct TYPE_9__ {scalar_t__* vendor_ext; } ;
struct TYPE_8__ {TYPE_2__ dev; int uuid; scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct wpabuf*,int const*,int) ;
 int* FUNC_5 (struct wps_registrar*,size_t*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct wpabuf*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wps_registrar*,struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_13 (struct wps_registrar*,struct wpabuf*) ;
 scalar_t__ FUNC_14 (struct wps_registrar*,struct wpabuf*) ;
 scalar_t__ FUNC_15 (struct wps_registrar*,struct wpabuf*) ;
 scalar_t__ FUNC_16 (struct wps_registrar*,struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_18 (TYPE_2__*,struct wpabuf*) ;
 scalar_t__ FUNC_19 (struct wpabuf*) ;
 scalar_t__ FUNC_20 (struct wpabuf*,int ,int const*,size_t,int ) ;
 scalar_t__ FUNC_21 (TYPE_1__*,struct wpabuf*) ;
 int FUNC_22 (struct wps_registrar*,struct wpabuf*,struct wpabuf*) ;
 struct wpabuf* FUNC_23 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_24(struct wps_registrar *VAR_5)
{
 struct wpabuf *VAR_6;
 struct wpabuf *VAR_7;
 const u8 *VAR_8;
 size_t VAR_9;
 size_t VAR_10 = 0;
 int VAR_11;

 if (VAR_5->set_ie_cb == ((void*)0))
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (VAR_5->wps->dev.vendor_ext[VAR_11]) {
   VAR_10 += 2 + 2;
   VAR_10 += FUNC_3(VAR_5->wps->dev.vendor_ext[VAR_11]);
  }
 }

 VAR_6 = FUNC_1(400 + VAR_10);
 if (VAR_6 == ((void*)0))
  return -1;
 VAR_7 = FUNC_1(500 + VAR_10);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6);
  return -1;
 }

 VAR_8 = FUNC_5(VAR_5, &VAR_9);

 FUNC_0(VAR_1, "WPS: Build Beacon IEs");

 if (FUNC_19(VAR_6) ||
     FUNC_21(VAR_5->wps, VAR_6) ||
     FUNC_6(VAR_5->wps, VAR_6) ||
     FUNC_16(VAR_5, VAR_6) ||
     FUNC_15(VAR_5, VAR_6) ||
     FUNC_14(VAR_5, VAR_6) ||
     FUNC_13(VAR_5, VAR_6) ||
     (VAR_5->dualband && FUNC_12(&VAR_5->wps->dev, VAR_6, 0)) ||
     FUNC_20(VAR_6, 0, VAR_8, VAR_9, 0) ||
     FUNC_18(&VAR_5->wps->dev, VAR_6)) {
  FUNC_2(VAR_6);
  FUNC_2(VAR_7);
  return -1;
 }
 FUNC_0(VAR_1, "WPS: Build Probe Response IEs");

 if (FUNC_19(VAR_7) ||
     FUNC_21(VAR_5->wps, VAR_7) ||
     FUNC_6(VAR_5->wps, VAR_7) ||
     FUNC_16(VAR_5, VAR_7) ||
     FUNC_15(VAR_5, VAR_7) ||
     FUNC_14(VAR_5, VAR_7) ||
     FUNC_11(VAR_7, VAR_5->wps->ap ? VAR_3 :
    VAR_4) ||
     FUNC_17(VAR_7, VAR_5->wps->uuid) ||
     FUNC_8(&VAR_5->wps->dev, VAR_7) ||
     FUNC_10(VAR_5, VAR_7) ||
     (VAR_5->dualband && FUNC_12(&VAR_5->wps->dev, VAR_7, 0)) ||
     FUNC_20(VAR_7, 0, VAR_8, VAR_9, 0) ||
     FUNC_18(&VAR_5->wps->dev, VAR_7)) {
  FUNC_2(VAR_6);
  FUNC_2(VAR_7);
  return -1;
 }

 VAR_6 = FUNC_23(VAR_6);
 VAR_7 = FUNC_23(VAR_7);

 if (!VAR_6 || !VAR_7) {
  FUNC_2(VAR_6);
  FUNC_2(VAR_7);
  return -1;
 }

 if (VAR_5->static_wep_only) {
  const u8 VAR_12[7] = {
   VAR_2, 5,

   0x00, 0x50, 0xf2, 5,
   0x00
  };
  FUNC_0(VAR_1, "WPS: Add Microsoft Provisioning IE "
      "into Beacon/Probe Response frames");
  FUNC_4(VAR_6, VAR_12, sizeof(VAR_12));
  FUNC_4(VAR_7, VAR_12, sizeof(VAR_12));
 }

 return FUNC_22(VAR_5, VAR_6, VAR_7);
}
