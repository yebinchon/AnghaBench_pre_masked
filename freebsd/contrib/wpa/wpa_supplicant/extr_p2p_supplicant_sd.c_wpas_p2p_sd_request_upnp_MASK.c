
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 struct wpabuf* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,scalar_t__) ;
 int FUNC_4 (struct wpabuf*,char const*) ;
 int FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpa_supplicant*,int const*,struct wpabuf*) ;

u64 FUNC_7(struct wpa_supplicant *VAR_1, const u8 *VAR_2,
        u8 VAR_3, const char *VAR_4)
{
 struct wpabuf *VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_1(2 + 1 + 1 + 1 + FUNC_0(VAR_4));
 if (VAR_5 == ((void*)0))
  return 0;
 FUNC_3(VAR_5, 1 + 1 + 1 + FUNC_0(VAR_4));
 FUNC_5(VAR_5, VAR_0);
 FUNC_5(VAR_5, 1);
 FUNC_5(VAR_5, VAR_3);
 FUNC_4(VAR_5, VAR_4);
 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_5);
 FUNC_2(VAR_5);
 return VAR_6;
}
