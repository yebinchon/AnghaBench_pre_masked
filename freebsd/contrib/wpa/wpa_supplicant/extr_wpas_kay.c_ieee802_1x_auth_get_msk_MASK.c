
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {struct eapol_sm* eapol; } ;
struct eapol_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eapol_sm*,int *,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_2, const u8 *VAR_3,
       u8 *VAR_4, size_t *VAR_5)
{
 u8 VAR_6[VAR_0];
 size_t VAR_7;
 struct eapol_sm *VAR_8;
 int VAR_9;

 VAR_8 = VAR_2->eapol;
 if (VAR_8 == ((void*)0))
  return -1;

 VAR_7 = VAR_0;
 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_1,
      "Failed to get MSK from EAPOL state machines");
  return -1;
 }

 if (VAR_7 > *VAR_5)
  VAR_7 = *VAR_5;
 FUNC_1(VAR_4, VAR_6, VAR_7);
 *VAR_5 = VAR_7;

 return 0;
}
