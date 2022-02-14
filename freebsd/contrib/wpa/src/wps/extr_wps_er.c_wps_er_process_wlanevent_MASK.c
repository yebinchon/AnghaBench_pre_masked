
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_er_ap {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int* FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int*,int) ;
 int FUNC_7 (struct wps_er_ap*,int*,struct wpabuf*) ;
 int FUNC_8 (struct wps_er_ap*,int*,struct wpabuf*) ;

__attribute__((used)) static void FUNC_9(struct wps_er_ap *VAR_3,
         struct wpabuf *VAR_4)
{
 u8 *VAR_5;
 u8 VAR_6;
 u8 VAR_7[VAR_0];
 struct wpabuf VAR_8;

 FUNC_1(VAR_2, "WPS ER: Received WLANEvent",
      FUNC_3(VAR_4), FUNC_4(VAR_4));
 if (FUNC_4(VAR_4) < 1 + 17) {
  FUNC_2(VAR_1, "WPS ER: Too short WLANEvent");
  return;
 }

 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = VAR_5[0];
 if (FUNC_0((char *) VAR_5 + 1, VAR_7) < 0) {
  FUNC_2(VAR_1, "WPS ER: Invalid WLANEventMAC in "
      "WLANEvent");
  return;
 }

 FUNC_6(&VAR_8, VAR_5 + 1 + 17, FUNC_4(VAR_4) - (1 + 17));

 switch (VAR_6) {
 case 1:
  FUNC_8(VAR_3, VAR_7, &VAR_8);
  break;
 case 2:
  FUNC_7(VAR_3, VAR_7, &VAR_8);
  break;
 default:
  FUNC_2(VAR_1, "WPS ER: Unknown WLANEventType %d",
      VAR_6);
  break;
 }
}
