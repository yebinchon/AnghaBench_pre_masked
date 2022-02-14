
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wps_data {int keywrapkey; } ;
struct wpabuf {size_t used; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t const*,int ,size_t) ;
 int FUNC_1 (int ,char*,size_t const*,size_t) ;
 int FUNC_2 (int ,char*,struct wpabuf*) ;
 int FUNC_3 (int ,char*) ;
 struct wpabuf* FUNC_4 (size_t) ;
 int FUNC_5 (struct wpabuf*) ;
 size_t* FUNC_6 (struct wpabuf*) ;
 size_t FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,size_t const*,size_t) ;

struct wpabuf * FUNC_10(struct wps_data *VAR_2, const u8 *VAR_3,
       size_t VAR_4)
{
 struct wpabuf *VAR_5;
 const size_t VAR_6 = 16;
 size_t VAR_7;
 u8 VAR_8;
 const u8 *VAR_9;


 if (VAR_3 == ((void*)0) || VAR_4 < 2 * VAR_6 || VAR_4 % VAR_6)
 {
  FUNC_3(VAR_0, "WPS: No Encrypted Settings received");
  return ((void*)0);
 }

 VAR_5 = FUNC_4(VAR_4 - VAR_6);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1, "WPS: Encrypted Settings", VAR_3, VAR_4);
 FUNC_9(VAR_5, VAR_3 + VAR_6, VAR_4 - VAR_6);
 if (FUNC_0(VAR_2->keywrapkey, VAR_3, FUNC_8(VAR_5),
    FUNC_7(VAR_5))) {
  FUNC_5(VAR_5);
  return ((void*)0);
 }

 FUNC_2(VAR_1, "WPS: Decrypted Encrypted Settings",
       VAR_5);

 VAR_9 = FUNC_6(VAR_5) + FUNC_7(VAR_5) - 1;
 VAR_8 = *VAR_9;
 if (VAR_8 > FUNC_7(VAR_5)) {
  FUNC_3(VAR_0, "WPS: Invalid PKCS#5 v2.0 pad value");
  FUNC_5(VAR_5);
  return ((void*)0);
 }
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (*VAR_9-- != VAR_8) {
   FUNC_3(VAR_0, "WPS: Invalid PKCS#5 v2.0 pad "
       "string");
   FUNC_5(VAR_5);
   return ((void*)0);
  }
 }
 VAR_5->used -= VAR_8;

 return VAR_5;
}
