
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eloop_event {int dummy; } ;
struct TYPE_5__ {size_t event_count; TYPE_1__* events; } ;
struct TYPE_4__ {scalar_t__ event; } ;
typedef scalar_t__ HANDLE ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,size_t) ;

void FUNC_1(void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 HANDLE VAR_4 = VAR_1;

 if (VAR_0.events == ((void*)0) || VAR_0.event_count == 0 ||
     VAR_2 != sizeof(HANDLE))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0.event_count; VAR_3++) {
  if (VAR_0.events[VAR_3].event == VAR_4)
   break;
 }
 if (VAR_3 == VAR_0.event_count)
  return;

 if (VAR_3 != VAR_0.event_count - 1) {
  FUNC_0(&VAR_0.events[VAR_3], &VAR_0.events[VAR_3 + 1],
      (VAR_0.event_count - VAR_3 - 1) *
      sizeof(struct eloop_event));
 }
 VAR_0.event_count--;
}
