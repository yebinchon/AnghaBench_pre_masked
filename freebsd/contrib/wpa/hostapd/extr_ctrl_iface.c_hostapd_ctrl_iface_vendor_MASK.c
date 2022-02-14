
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *,size_t) ;
 int FUNC_1 (struct hostapd_data*,unsigned int,unsigned int,int *,size_t,struct wpabuf*) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 size_t FUNC_5 (char*) ;
 unsigned int FUNC_6 (char*,char**,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,size_t,int ,int ) ;
 struct wpabuf* FUNC_9 (size_t) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_13(struct hostapd_data *VAR_3, char *VAR_4,
         char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 char *VAR_8;
 u8 *VAR_9 = ((void*)0);
 unsigned int VAR_10, VAR_11;
 struct wpabuf *VAR_12;
 size_t VAR_13 = 0;


 VAR_10 = FUNC_6(VAR_4, &VAR_8, 16);
 if (!FUNC_2((unsigned char) *VAR_8))
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_8, &VAR_8, 10);

 if (*VAR_8 != '\0') {
  if (!FUNC_2((unsigned char) *VAR_8++))
   return -VAR_0;
  VAR_13 = FUNC_5(VAR_8);
 }

 if (VAR_13) {
  VAR_13 /= 2;
  VAR_9 = FUNC_4(VAR_13);
  if (!VAR_9)
   return -VAR_1;

  if (FUNC_0(VAR_8, VAR_9, VAR_13)) {
   FUNC_7(VAR_2,
       "Vendor command: wrong parameter format");
   FUNC_3(VAR_9);
   return -VAR_0;
  }
 }

 VAR_12 = FUNC_9((VAR_6 - 1) / 2);
 if (!VAR_12) {
  FUNC_3(VAR_9);
  return -VAR_1;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_10, VAR_11, VAR_9, VAR_13,
         VAR_12);

 if (VAR_7 == 0)
  VAR_7 = FUNC_8(VAR_5, VAR_6, FUNC_11(VAR_12),
           FUNC_12(VAR_12));

 FUNC_10(VAR_12);
 FUNC_3(VAR_9);

 return VAR_7;
}
