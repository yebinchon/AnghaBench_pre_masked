
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int drv_flags; struct wpa_radio* radio; } ;
struct wpa_radio_work {unsigned int freq; char const* type; void (* cb ) (struct wpa_radio_work*,int) ;int list; void* bands; void* ctx; struct wpa_supplicant* wpa_s; int time; } ;
struct wpa_radio {int num_active_works; int work; } ;
struct wpa_driver_scan_params {int * freqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 struct wpa_radio_work* FUNC_5 (int) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,int ,char*,...) ;
 void* FUNC_8 (unsigned int) ;
 void* FUNC_9 (struct wpa_supplicant*,int *) ;

int FUNC_10(struct wpa_supplicant *VAR_3, unsigned int VAR_4,
     const char *VAR_5, int VAR_6,
     void (*VAR_7)(struct wpa_radio_work *VAR_8, int VAR_9),
     void *VAR_10)
{
 struct wpa_radio *VAR_11 = VAR_3->radio;
 struct wpa_radio_work *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(sizeof(*VAR_12));
 if (VAR_12 == ((void*)0))
  return -1;
 FUNC_7(VAR_3, VAR_1, "Add radio work '%s'@%p", VAR_5, VAR_12);
 FUNC_3(&VAR_12->time);
 VAR_12->freq = VAR_4;
 VAR_12->type = VAR_5;
 VAR_12->wpa_s = VAR_3;
 VAR_12->cb = VAR_7;
 VAR_12->ctx = VAR_10;

 if (VAR_4)
  VAR_12->bands = FUNC_8(VAR_4);
 else if (FUNC_4(VAR_5, "scan") == 0 ||
   FUNC_4(VAR_5, "p2p-scan") == 0)
  VAR_12->bands = FUNC_9(VAR_3,
          ((struct wpa_driver_scan_params *)
           VAR_10)->freqs);
 else
  VAR_12->bands = FUNC_9(VAR_3, ((void*)0));

 VAR_13 = FUNC_2(&VAR_3->radio->work);
 if (VAR_6)
  FUNC_0(&VAR_3->radio->work, &VAR_12->list);
 else
  FUNC_1(&VAR_3->radio->work, &VAR_12->list);
 if (VAR_13) {
  FUNC_7(VAR_3, VAR_1, "First radio work item in the queue - schedule start immediately");
  FUNC_6(VAR_3);
 } else if ((VAR_3->drv_flags & VAR_2)
     && VAR_11->num_active_works < VAR_0) {
  FUNC_7(VAR_3, VAR_1,
   "Try to schedule a radio work (num_active_works=%u)",
   VAR_11->num_active_works);
  FUNC_6(VAR_3);
 }

 return 0;
}
