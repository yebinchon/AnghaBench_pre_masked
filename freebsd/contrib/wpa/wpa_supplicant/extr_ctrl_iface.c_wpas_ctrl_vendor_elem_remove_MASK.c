
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int ** vendor_elem; } ;
struct ieee802_11_elems {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t,struct ieee802_11_elems*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 struct wpa_supplicant* FUNC_8 (struct wpa_supplicant*,int) ;
 int FUNC_9 (struct wpa_supplicant*,int,int *,size_t) ;
 int FUNC_10 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_11(struct wpa_supplicant *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 int VAR_5;
 size_t VAR_6;
 u8 *VAR_7;
 struct ieee802_11_elems VAR_8;
 int VAR_9;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -1;
 VAR_2 = FUNC_8(VAR_2, VAR_5);

 VAR_4 = FUNC_5(VAR_4, ' ');
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_4++;

 if (*VAR_4 == '*') {
  FUNC_7(VAR_2->vendor_elem[VAR_5]);
  VAR_2->vendor_elem[VAR_5] = ((void*)0);
  FUNC_10(VAR_2);
  return 0;
 }

 if (VAR_2->vendor_elem[VAR_5] == ((void*)0))
  return -1;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 == 0)
  return 0;
 if (VAR_6 & 1)
  return -1;
 VAR_6 /= 2;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 == ((void*)0))
  return -1;

 if (FUNC_1(VAR_4, VAR_7, VAR_6) < 0) {
  FUNC_3(VAR_7);
  return -1;
 }

 if (FUNC_2(VAR_7, VAR_6, &VAR_8, 0) == VAR_1) {
  FUNC_3(VAR_7);
  return -1;
 }

 VAR_9 = FUNC_9(VAR_2, VAR_5, VAR_7, VAR_6);
 FUNC_3(VAR_7);
 return VAR_9;
}
