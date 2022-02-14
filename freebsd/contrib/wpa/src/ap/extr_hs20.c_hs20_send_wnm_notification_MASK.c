
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_2__ {int freq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct hostapd_data*,int ,int ,size_t const*,int ,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,char const*,size_t) ;
 int FUNC_9 (struct wpabuf*,size_t) ;

int FUNC_10(struct hostapd_data *VAR_6, const u8 *VAR_7,
          u8 VAR_8, const char *VAR_9)
{
 struct wpabuf *VAR_10;
 size_t VAR_11 = 0;
 int VAR_12;




 if (VAR_9) {
  VAR_11 = 1 + FUNC_1(VAR_9);
  if (5 + VAR_11 > 255) {
   FUNC_2(VAR_1, "HS 2.0: Too long URL for "
       "WNM-Notification: '%s'", VAR_9);
   return -1;
  }
 }

 VAR_10 = FUNC_3(4 + 7 + VAR_11);
 if (VAR_10 == ((void*)0))
  return -1;

 FUNC_9(VAR_10, VAR_3);
 FUNC_9(VAR_10, VAR_5);
 FUNC_9(VAR_10, 1);
 FUNC_9(VAR_10, 1);


 FUNC_9(VAR_10, VAR_4);
 FUNC_9(VAR_10, 5 + VAR_11);
 FUNC_7(VAR_10, VAR_2);
 FUNC_9(VAR_10, VAR_0);
 if (VAR_9) {
  FUNC_9(VAR_10, VAR_11 - 1);
  FUNC_8(VAR_10, VAR_9, VAR_11 - 1);
  FUNC_9(VAR_10, VAR_8);
 } else {

  FUNC_9(VAR_10, 0);
 }

 VAR_12 = FUNC_0(VAR_6, VAR_6->iface->freq, 0, VAR_7,
          FUNC_5(VAR_10), FUNC_6(VAR_10));

 FUNC_4(VAR_10);

 return VAR_12;
}
