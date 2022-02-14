
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_radio_work* p2p_send_action_work; } ;
struct wpa_radio_work {scalar_t__ started; struct send_action_work* ctx; struct wpa_supplicant* wpa_s; } ;
struct send_action_work {int wait_time; int len; int buf; int bssid; int src; int dst; int freq; } ;


 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct send_action_work*) ;
 int FUNC_4 (struct wpa_radio_work*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct wpa_radio_work *VAR_2, int VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2->wpa_s;
 struct send_action_work *VAR_5 = VAR_2->ctx;

 if (VAR_3) {
  if (VAR_2->started) {
   FUNC_0(VAR_1,
          VAR_4, ((void*)0));
   VAR_4->p2p_send_action_work = ((void*)0);
   FUNC_2(VAR_4);
  }
  FUNC_3(VAR_5);
  return;
 }

 if (FUNC_1(VAR_4, VAR_5->freq, VAR_5->dst, VAR_5->src,
       VAR_5->bssid, VAR_5->buf, VAR_5->len,
       VAR_5->wait_time,
       VAR_0, 1) < 0) {
  FUNC_3(VAR_5);
  FUNC_4(VAR_2);
  return;
 }
 VAR_4->p2p_send_action_work = VAR_2;
}
