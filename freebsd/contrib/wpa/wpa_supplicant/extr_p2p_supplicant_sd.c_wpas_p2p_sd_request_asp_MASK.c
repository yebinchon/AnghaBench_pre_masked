
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,char const*,size_t) ;
 int FUNC_4 (struct wpabuf*,size_t) ;
 int FUNC_5 (struct wpabuf*,int ) ;
 int FUNC_6 (struct wpa_supplicant*,int const*,struct wpabuf*) ;

u64 FUNC_7(struct wpa_supplicant *VAR_1, const u8 *VAR_2, u8 VAR_3,
       const char *VAR_4, const char *VAR_5)
{
 struct wpabuf *VAR_6;
 size_t VAR_7, VAR_8, VAR_9 = 0;
 u64 VAR_10;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_5)
  VAR_9 = FUNC_0(VAR_5);

 if (VAR_8 > 0xff || VAR_9 > 0xff)
  return 0;

 VAR_7 = 1 + 1 + 1 + VAR_8 + 1 + VAR_9;
 VAR_6 = FUNC_1(2 + VAR_7);
 if (VAR_6 == ((void*)0))
  return 0;

 FUNC_4(VAR_6, VAR_7);
 FUNC_5(VAR_6, VAR_0);
 FUNC_5(VAR_6, VAR_3);
 FUNC_5(VAR_6, (u8) VAR_8);
 FUNC_3(VAR_6, VAR_4, VAR_8);
 FUNC_5(VAR_6, (u8) VAR_9);
 FUNC_3(VAR_6, VAR_5, VAR_9);
 VAR_10 = FUNC_6(VAR_1, VAR_2, VAR_6);
 FUNC_2(VAR_6);

 return VAR_10;
}
