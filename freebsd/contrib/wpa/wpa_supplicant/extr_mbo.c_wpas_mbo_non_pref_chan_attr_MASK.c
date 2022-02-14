
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;


 size_t FUNC_0 (struct wpabuf*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpabuf*,int,int) ;
 int FUNC_2 (struct wpabuf*,size_t) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_0,
     struct wpabuf *VAR_1, u8 VAR_2, u8 VAR_3)
{
 size_t VAR_4 = VAR_3 - VAR_2 + 3;

 if (VAR_4 + 2 > FUNC_0(VAR_1))
  return;

 FUNC_2(VAR_1, VAR_4);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
