
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_event_ {int list; scalar_t__ subscriber_sequence; int * data; struct subscription* s; } ;
struct wpabuf {int dummy; } ;
struct subscription {scalar_t__ next_subscriber_sequence; int sm; int event_queue; scalar_t__ last_event_failed; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct wps_event_*) ;
 struct wps_event_* FUNC_4 (struct subscription*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wps_event_*) ;
 struct wps_event_* FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int * FUNC_9 (struct wpabuf const*) ;

int FUNC_10(struct subscription *VAR_2, const struct wpabuf *VAR_3, int VAR_4)
{
 struct wps_event_ *VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_2(&VAR_2->event_queue);
 if (VAR_6 >= VAR_0) {
  FUNC_8(VAR_1, "WPS UPnP: Too many events queued for "
      "subscriber %p", VAR_2);
  if (VAR_4)
   return 1;


  VAR_5 = FUNC_4(VAR_2);
  if (!VAR_5)
   return 1;
  FUNC_3(VAR_5);
 }

 if (VAR_2->last_event_failed && VAR_4 && VAR_6 > 0) {




  FUNC_8(VAR_1, "WPS UPnP: Do not queue more Probe "
      "Request frames for subscription %p since last "
      "delivery failed", VAR_2);
  return -1;
 }

 VAR_5 = FUNC_7(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -1;
 FUNC_1(&VAR_5->list);
 VAR_5->s = VAR_2;
 VAR_5->data = FUNC_9(VAR_3);
 if (VAR_5->data == ((void*)0)) {
  FUNC_6(VAR_5);
  return -1;
 }
 VAR_5->subscriber_sequence = VAR_2->next_subscriber_sequence++;
 if (VAR_2->next_subscriber_sequence == 0)
  VAR_2->next_subscriber_sequence++;
 FUNC_8(VAR_1, "WPS UPnP: Queue event %p for subscriber %p "
     "(queue len %u)", VAR_5, VAR_2, VAR_6 + 1);
 FUNC_0(&VAR_2->event_queue, &VAR_5->list);
 FUNC_5(VAR_2->sm);
 return 0;
}
