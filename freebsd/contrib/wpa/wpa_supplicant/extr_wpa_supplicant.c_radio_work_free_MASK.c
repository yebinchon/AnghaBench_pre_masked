
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_radio_work {int list; TYPE_2__* wpa_s; int type; scalar_t__ started; } ;
struct TYPE_4__ {TYPE_1__* radio; struct wpa_radio_work* p2p_scan_work; struct wpa_radio_work* scan_work; } ;
struct TYPE_3__ {scalar_t__ num_active_works; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_radio_work*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ,struct wpa_radio_work*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct wpa_radio_work *VAR_2)
{
 if (VAR_2->wpa_s->scan_work == VAR_2) {

  FUNC_2(VAR_2->wpa_s, VAR_1, "Freeing radio work '%s'@%p (started=%d) that is marked as scan_work",
   VAR_2->type, VAR_2, VAR_2->started);
  VAR_2->wpa_s->scan_work = ((void*)0);
 }
 if (VAR_2->started) {
  VAR_2->wpa_s->radio->num_active_works--;
  FUNC_2(VAR_2->wpa_s, VAR_0,
   "radio_work_free('%s'@%p): num_active_works --> %u",
   VAR_2->type, VAR_2,
   VAR_2->wpa_s->radio->num_active_works);
 }

 FUNC_0(&VAR_2->list);
 FUNC_1(VAR_2);
}
