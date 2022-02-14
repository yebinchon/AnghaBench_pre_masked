
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_event {scalar_t__ event; int handler; void* user_data; void* eloop_data; } ;
typedef int eloop_event_handler ;
struct TYPE_2__ {int event_count; struct eloop_event* events; } ;
typedef scalar_t__ HANDLE ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct eloop_event* FUNC_1 (struct eloop_event*,int,int) ;

int FUNC_2(void *VAR_2, size_t VAR_3,
    eloop_event_handler VAR_4,
    void *VAR_5, void *VAR_6)
{
 struct eloop_event *VAR_7;
 HANDLE VAR_8 = VAR_2;

 if (VAR_3 != sizeof(HANDLE) || VAR_8 == VAR_0)
  return -1;

 if (FUNC_0())
  return -1;

 VAR_7 = FUNC_1(VAR_1.events, VAR_1.event_count + 1,
          sizeof(struct eloop_event));
 if (VAR_7 == ((void*)0))
  return -1;

 VAR_7[VAR_1.event_count].eloop_data = VAR_5;
 VAR_7[VAR_1.event_count].user_data = VAR_6;
 VAR_7[VAR_1.event_count].handler = VAR_4;
 VAR_7[VAR_1.event_count].event = VAR_8;
 VAR_1.event_count++;
 VAR_1.events = VAR_7;

 return 0;
}
