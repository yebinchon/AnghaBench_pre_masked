
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ p2p_group_interface; int enable_oce; } ;
typedef int ext_capab ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_supplicant*,int) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,int *,int) ;
 scalar_t__ FUNC_6 (struct wpabuf**,int) ;
 int FUNC_7 (struct wpa_supplicant*,int *,int) ;
 int FUNC_8 (struct wpa_supplicant*,struct wpabuf**) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpabuf*) ;

void FUNC_10(struct wpa_supplicant *VAR_4)
{
 struct wpabuf *VAR_5 = ((void*)0);
 u8 VAR_6[18];
 int VAR_7;
 enum wpa_driver_if_type VAR_8 = VAR_3;






 FUNC_0(VAR_4, VAR_8);

 VAR_7 = FUNC_7(VAR_4, VAR_6,
          sizeof(VAR_6));
 if (VAR_7 > 0 &&
     FUNC_6(&VAR_5, VAR_7) == 0)
  FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_5)
  FUNC_1(VAR_4, FUNC_3(VAR_5),
          FUNC_4(VAR_5));
 FUNC_2(VAR_5);
}
