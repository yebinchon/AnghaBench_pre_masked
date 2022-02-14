
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_nai_realm_data {unsigned int encoding; int * realm; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {unsigned int nai_realm_count; struct hostapd_nai_realm_data* nai_realm_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpabuf*,struct hostapd_nai_realm_data*,unsigned int) ;
 unsigned int* FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,unsigned int*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,char*,unsigned int const*,size_t) ;
 int FUNC_6 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_7 (struct wpabuf*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct hostapd_data *VAR_3,
        struct wpabuf *VAR_4,
        const u8 *VAR_5,
        size_t VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11 = 0, VAR_12, VAR_13, *VAR_14;
 struct hostapd_nai_realm_data *VAR_15;
 const u8 *VAR_16, *VAR_17, *VAR_18;
 struct {
  unsigned int realm_data_idx;
  unsigned int realm_idx;
 } VAR_19[10];

 VAR_16 = VAR_5;
 VAR_18 = VAR_16 + VAR_6;
 if (VAR_18 - VAR_16 < 1) {
  FUNC_5(VAR_2, "Too short NAI Home Realm Query",
       VAR_5, VAR_6);
  return -1;
 }
 VAR_10 = *VAR_16++;

 for (VAR_7 = 0; VAR_7 < VAR_10 && VAR_11 < 10; VAR_7++) {
  if (VAR_18 - VAR_16 < 2) {
   FUNC_5(VAR_2,
        "Truncated NAI Home Realm Query",
        VAR_5, VAR_6);
   return -1;
  }
  VAR_12 = *VAR_16++;
  VAR_13 = *VAR_16++;
  if (VAR_13 > VAR_18 - VAR_16) {
   FUNC_5(VAR_2,
        "Truncated NAI Home Realm Query",
        VAR_5, VAR_6);
   return -1;
  }
  VAR_17 = VAR_16;
  for (VAR_8 = 0; VAR_8 < VAR_3->conf->nai_realm_count &&
        VAR_11 < 10; VAR_8++) {
   const u8 *VAR_20, *VAR_21;
   VAR_15 = &VAR_3->conf->nai_realm_data[VAR_8];
   if (VAR_12 != VAR_15->encoding)
    continue;

   VAR_20 = VAR_17;
   while (VAR_20 < VAR_17 + VAR_13 &&
          VAR_11 < 10) {
    for (VAR_21 = VAR_20;
         VAR_21 < VAR_17 + VAR_13; VAR_21++) {
     if (*VAR_21 == ';')
      break;
    }
    for (VAR_9 = 0; VAR_9 < VAR_1 &&
          VAR_15->realm[VAR_9] &&
          VAR_11 < 10; VAR_9++) {
     if ((int) FUNC_3(VAR_15->realm[VAR_9]) !=
         VAR_21 - VAR_20 ||
         FUNC_4((char *) VAR_20,
             VAR_15->realm[VAR_9],
             VAR_21 - VAR_20) != 0)
      continue;
     VAR_19[VAR_11].realm_data_idx =
      VAR_8;
     VAR_19[VAR_11].realm_idx = VAR_9;
     VAR_11++;
    }
    VAR_20 = VAR_21 + 1;
   }
  }
  VAR_16 += VAR_13;
 }

 VAR_14 = FUNC_1(VAR_4, VAR_0);
 FUNC_7(VAR_4, VAR_11);







 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
  FUNC_6(VAR_2, "realm_idx %d, realm_data_idx %d",
      VAR_19[VAR_7].realm_data_idx, VAR_19[VAR_7].realm_idx);
  VAR_15 = &VAR_3->conf->nai_realm_data[VAR_19[VAR_7].realm_data_idx];
  FUNC_0(VAR_4, VAR_15, VAR_19[VAR_7].realm_idx);
 }
 FUNC_2(VAR_4, VAR_14);
 return 0;
}
