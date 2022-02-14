
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {int pmk; scalar_t__ pmk_len; TYPE_1__* cur_pmksa; } ;
struct TYPE_2__ {int pmk; scalar_t__ pmk_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct wpa_sm *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->cur_pmksa) {
  FUNC_2(VAR_0,
    "WPA: Set PMK based on current PMKSA",
    VAR_2->cur_pmksa->pmk, VAR_2->cur_pmksa->pmk_len);
  VAR_2->pmk_len = VAR_2->cur_pmksa->pmk_len;
  FUNC_0(VAR_2->pmk, VAR_2->cur_pmksa->pmk, VAR_2->pmk_len);
 } else {
  FUNC_3(VAR_0, "WPA: No current PMKSA - clear PMK");
  VAR_2->pmk_len = 0;
  FUNC_1(VAR_2->pmk, 0, VAR_1);
 }
}
