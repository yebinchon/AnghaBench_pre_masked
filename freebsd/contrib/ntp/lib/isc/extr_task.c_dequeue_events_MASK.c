
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ isc_eventtype_t ;
typedef int isc_eventlist_t ;
struct TYPE_11__ {scalar_t__ ev_type; void* ev_sender; void* ev_tag; } ;
typedef TYPE_1__ isc_event_t ;
typedef int isc_boolean_t ;
struct TYPE_12__ {int lock; int events; } ;
typedef TYPE_2__ isc__task_t ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_10(isc__task_t *VAR_1, void *VAR_2, isc_eventtype_t VAR_3,
        isc_eventtype_t VAR_4, void *VAR_5,
        isc_eventlist_t *VAR_6, isc_boolean_t VAR_7)
{
 isc_event_t *VAR_8, *VAR_9;
 unsigned int VAR_10 = 0;

 FUNC_6(FUNC_8(VAR_1));
 FUNC_6(VAR_4 >= VAR_3);

 FUNC_9("dequeue_events");
 FUNC_3(&VAR_1->lock);

 for (VAR_8 = FUNC_2(VAR_1->events); VAR_8 != ((void*)0); VAR_8 = VAR_9) {
  VAR_9 = FUNC_4(VAR_8, VAR_0);
  if (VAR_8->ev_type >= VAR_3 && VAR_8->ev_type <= VAR_4 &&
      (VAR_2 == ((void*)0) || VAR_8->ev_sender == VAR_2) &&
      (VAR_5 == ((void*)0) || VAR_8->ev_tag == VAR_5) &&
      (!VAR_7 || FUNC_5(VAR_8))) {
   FUNC_0(VAR_1->events, VAR_8, VAR_0);
   FUNC_1(*VAR_6, VAR_8, VAR_0);
   VAR_10++;
  }
 }

 FUNC_7(&VAR_1->lock);

 return (VAR_10);
}
