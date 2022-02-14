
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_nai_realm_data {char encoding; scalar_t__* realm; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {unsigned int nai_realm_count; struct hostapd_nai_realm_data* nai_realm_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,struct hostapd_nai_realm_data*) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct wpabuf*,int ) ;
 int* FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int*) ;
 int FUNC_4 (struct hostapd_data*,struct wpabuf*,int const*,size_t) ;
 int* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,unsigned int) ;
 int FUNC_7 (struct wpabuf*,scalar_t__) ;
 int FUNC_8 (struct wpabuf*,char) ;

__attribute__((used)) static void FUNC_9(struct hostapd_data *VAR_1, struct wpabuf *VAR_2,
          const u8 *VAR_3, size_t VAR_4,
          int VAR_5, int VAR_6)
{
 if (VAR_5 && !VAR_6 &&
     FUNC_1(VAR_1, VAR_2, VAR_0))
  return;

 if (VAR_5 && VAR_1->conf->nai_realm_data) {
  u8 *VAR_7;
  unsigned int VAR_8, VAR_9;
  VAR_7 = FUNC_2(VAR_2, VAR_0);
  FUNC_6(VAR_2, VAR_1->conf->nai_realm_count);
  for (VAR_8 = 0; VAR_8 < VAR_1->conf->nai_realm_count; VAR_8++) {
   u8 *VAR_10, *VAR_11;
   struct hostapd_nai_realm_data *VAR_12;

   VAR_12 = &VAR_1->conf->nai_realm_data[VAR_8];
   VAR_10 = FUNC_5(VAR_2, 2);
   FUNC_8(VAR_2, VAR_12->encoding);
   VAR_11 = FUNC_5(VAR_2, 1);
   for (VAR_9 = 0; VAR_12->realm[VAR_9]; VAR_9++) {
    if (VAR_9 > 0)
     FUNC_8(VAR_2, ';');
    FUNC_7(VAR_2, VAR_12->realm[VAR_9]);
   }
   *VAR_11 = (u8 *) FUNC_5(VAR_2, 0) - VAR_11 - 1;
   FUNC_0(VAR_2, VAR_12);
   FUNC_3(VAR_2, VAR_10);
  }
  FUNC_3(VAR_2, VAR_7);
 } else if (VAR_6 && VAR_1->conf->nai_realm_data && VAR_3) {
  FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4);
 }
}
