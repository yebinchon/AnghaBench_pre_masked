
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *,size_t) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 size_t FUNC_4 (char*) ;
 unsigned int FUNC_5 (char*,char**,int) ;
 int FUNC_6 (struct wpa_supplicant*,unsigned int,unsigned int,int *,size_t,struct wpabuf*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,size_t,int ,int ) ;
 struct wpabuf* FUNC_9 (size_t) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_13(struct wpa_supplicant *VAR_2, char *VAR_3,
         char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 char *VAR_7;
 u8 *VAR_8 = ((void*)0);
 unsigned int VAR_9, VAR_10;
 struct wpabuf *VAR_11;
 size_t VAR_12 = 0;


 VAR_9 = FUNC_5(VAR_3, &VAR_7, 16);
 if (!FUNC_1((unsigned char) *VAR_7))
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_7, &VAR_7, 10);

 if (*VAR_7 != '\0') {
  if (!FUNC_1((unsigned char) *VAR_7++))
   return -VAR_0;
  VAR_12 = FUNC_4(VAR_7);
 }

 if (VAR_12) {
  VAR_12 /= 2;
  VAR_8 = FUNC_3(VAR_12);
  if (!VAR_8)
   return -1;

  if (FUNC_0(VAR_7, VAR_8, VAR_12)) {
   FUNC_7(VAR_1,
       "Vendor command: wrong parameter format");
   FUNC_2(VAR_8);
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_9((VAR_5 - 1) / 2);
 if (!VAR_11) {
  FUNC_2(VAR_8);
  return -1;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_9, VAR_10, VAR_8, VAR_12,
     VAR_11);

 if (VAR_6 == 0)
  VAR_6 = FUNC_8(VAR_4, VAR_5, FUNC_11(VAR_11),
           FUNC_12(VAR_11));

 FUNC_10(VAR_11);
 FUNC_2(VAR_8);

 return VAR_6;
}
