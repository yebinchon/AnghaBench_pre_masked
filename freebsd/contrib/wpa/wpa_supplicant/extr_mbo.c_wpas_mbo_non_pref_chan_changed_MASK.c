
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;


 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpabuf*,int) ;
 int FUNC_5 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_6 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_0)
{
 struct wpabuf *VAR_1;

 VAR_1 = FUNC_0(512);
 if (!VAR_1)
  return;

 FUNC_4(VAR_0, VAR_1, 1);
 FUNC_5(VAR_0, FUNC_2(VAR_1),
           FUNC_3(VAR_1));
 FUNC_6(VAR_0);
 FUNC_1(VAR_1);
}
