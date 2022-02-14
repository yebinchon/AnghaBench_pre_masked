
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {size_t bssid_filter_count; int * bssid_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,size_t,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (int ,char*,int *,size_t) ;

__attribute__((used)) static int FUNC_6(struct wpa_supplicant *VAR_2, char *VAR_3)
{
 char *VAR_4;
 u8 VAR_5[VAR_0], *VAR_6 = ((void*)0), *VAR_7;
 size_t VAR_8 = 0;

 VAR_4 = VAR_3;
 while (VAR_4) {
  if (*VAR_4 == '\0')
   break;
  if (FUNC_0(VAR_4, VAR_5)) {
   FUNC_1(VAR_6);
   return -1;
  }
  VAR_7 = FUNC_3(VAR_6, VAR_8 + 1, VAR_0);
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_6);
   return -1;
  }
  VAR_6 = VAR_7;
  FUNC_2(VAR_6 + VAR_8 * VAR_0, VAR_5, VAR_0);
  VAR_8++;

  VAR_4 = FUNC_4(VAR_4, ' ');
  if (VAR_4)
   VAR_4++;
 }

 FUNC_5(VAR_1, "bssid_filter", VAR_6, VAR_8 * VAR_0);
 FUNC_1(VAR_2->bssid_filter);
 VAR_2->bssid_filter = VAR_6;
 VAR_2->bssid_filter_count = VAR_8;

 return 0;
}
