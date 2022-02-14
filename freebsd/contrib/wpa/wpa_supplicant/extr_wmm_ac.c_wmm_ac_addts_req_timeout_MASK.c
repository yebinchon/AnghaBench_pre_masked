
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wmm_ac_addts_request {int tspec; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 struct wmm_ac_addts_request *VAR_4 = VAR_2;

 FUNC_3(VAR_0,
     "Timeout getting ADDTS response (tsid=%d up=%d)",
     FUNC_1(&VAR_4->tspec),
     FUNC_2(&VAR_4->tspec));

 FUNC_0(VAR_3, 1);
}
