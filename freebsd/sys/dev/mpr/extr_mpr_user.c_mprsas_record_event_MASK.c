
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct mpr_softc {int* events_to_record; int event_index; TYPE_1__* recorded_events; scalar_t__ event_number; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int Event; int EventDataLength; int * EventData; } ;
struct TYPE_4__ {int Type; int * Data; scalar_t__ Number; } ;
typedef TYPE_2__ MPI2_EVENT_NOTIFICATION_REPLY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int) ;

void
FUNC_1(struct mpr_softc *VAR_5,
    MPI2_EVENT_NOTIFICATION_REPLY *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8, VAR_9;
 uint16_t VAR_10;
 boolean_t VAR_11 = VAR_0;

 VAR_7 = VAR_6->Event;






 if (VAR_7 == VAR_1) {
  VAR_11 = VAR_4;
 }
 VAR_8 = (uint8_t)(VAR_7 / 32);
 VAR_9 = (uint8_t)(VAR_7 % 32);
 if ((VAR_8 < 4) && ((1 << VAR_9) & VAR_5->events_to_record[VAR_8])) {
  VAR_8 = VAR_5->event_index;
  VAR_5->recorded_events[VAR_8].Type = VAR_7;
  VAR_5->recorded_events[VAR_8].Number = ++VAR_5->event_number;
  FUNC_0(VAR_5->recorded_events[VAR_8].Data, VAR_3 *
      4);
  VAR_10 = VAR_6->EventDataLength;

  if (VAR_10 > 0) {



   if (VAR_10 > VAR_3) {
    VAR_10 = VAR_3;
   }
   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    VAR_5->recorded_events[VAR_8].Data[VAR_9] =
        VAR_6->EventData[VAR_9];
   }




   if (++VAR_8 == VAR_2) {
    VAR_8 = 0;
   }
   VAR_5->event_index = (uint8_t)VAR_8;




   VAR_11 = VAR_4;
  }
 }





 if (VAR_11) {



 }
}
