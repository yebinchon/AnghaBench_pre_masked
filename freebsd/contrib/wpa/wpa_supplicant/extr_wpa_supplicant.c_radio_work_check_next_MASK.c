
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ ext_work_in_progress; struct wpa_radio* radio; } ;
struct wpa_radio {int work; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct wpa_radio*,int *) ;
 int FUNC_2 (int ,int ,int ,struct wpa_radio*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct wpa_supplicant *VAR_2)
{
 struct wpa_radio *VAR_3 = VAR_2->radio;

 if (FUNC_0(&VAR_3->work))
  return;
 if (VAR_2->ext_work_in_progress) {
  FUNC_3(VAR_0,
      "External radio work in progress - delay start of pending item");
  return;
 }
 FUNC_1(VAR_1, VAR_3, ((void*)0));
 FUNC_2(0, 0, VAR_1, VAR_3, ((void*)0));
}
