
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int sched_scan_stop_req; scalar_t__ wpa_state; scalar_t__ pno_sched_pending; scalar_t__ pno; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_1 (struct wpa_supplicant*) ;

int FUNC_2(struct wpa_supplicant *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->pno)
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 VAR_1->sched_scan_stop_req = 1;

 VAR_1->pno = 0;
 VAR_1->pno_sched_pending = 0;

 if (VAR_1->wpa_state == VAR_0)
  FUNC_0(VAR_1, 0, 0);

 return VAR_2;
}
