
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {size_t assoc_wpa_ie_len; int * assoc_wpa_ie; scalar_t__ test_assoc_ie; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (struct wpa_sm*,int *,size_t) ;
 int FUNC_3 (int ,char*,int *,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;

int FUNC_7(struct wpa_sm *VAR_1, u8 *VAR_2,
        size_t *VAR_3)
{
 int VAR_4;

 if (VAR_1 == ((void*)0))
  return -1;
 VAR_4 = FUNC_2(VAR_1, VAR_2, *VAR_3);
 if (VAR_4 < 0)
  return -1;
 *VAR_3 = VAR_4;

 FUNC_3(VAR_0, "WPA: Set own WPA IE default",
      VAR_2, *VAR_3);

 if (VAR_1->assoc_wpa_ie == ((void*)0)) {





  VAR_1->assoc_wpa_ie = FUNC_1(VAR_2, *VAR_3);
  if (VAR_1->assoc_wpa_ie == ((void*)0))
   return -1;

  VAR_1->assoc_wpa_ie_len = *VAR_3;
 } else {
  FUNC_3(VAR_0,
       "WPA: Leave previously set WPA IE default",
       VAR_1->assoc_wpa_ie, VAR_1->assoc_wpa_ie_len);
 }

 return 0;
}
