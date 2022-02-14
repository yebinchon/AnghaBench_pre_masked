
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intr_event {int ie_handlers; } ;
struct apb_softc {int * sc_intr_counter; struct intr_event** sc_eventstab; } ;
struct TYPE_2__ {int td_intr_frame; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_8 ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct intr_event*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(void *VAR_11)
{
 struct apb_softc *VAR_12 = VAR_11;
 struct intr_event *VAR_13;
 uint32_t VAR_14, VAR_15;

 if(VAR_9 >= VAR_7)
  VAR_14 = FUNC_0(VAR_5 +
   VAR_6);
 else
  VAR_14 = FUNC_0(VAR_3 +
   VAR_4);

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (VAR_14 & (1 << VAR_15)) {

   if(VAR_9 >= VAR_7) {
    FUNC_1(VAR_5 +
        VAR_6,
        VAR_14 & ~(1 << VAR_15));
   } else {
    FUNC_1(VAR_3 +
        VAR_4,
        VAR_14 & ~(1 << VAR_15));
   }

   VAR_13 = VAR_12->sc_eventstab[VAR_15];
   if (!VAR_13 || FUNC_2(&VAR_13->ie_handlers)) {
    if(VAR_15 == 1 && VAR_9 < VAR_7) {
     FUNC_0(VAR_3 +
      VAR_2);
     FUNC_0(VAR_3 +
      VAR_1);
    }

    if (VAR_15 != 0 && VAR_15 != 6)
     FUNC_6("Stray APB IRQ %d\n", VAR_15);

    continue;
   }

   FUNC_4(VAR_13, FUNC_3(VAR_10)->td_intr_frame);
   FUNC_5(VAR_12->sc_intr_counter[VAR_15]);
  }
 }

 return (VAR_8);
}
