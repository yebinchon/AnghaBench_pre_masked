
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {size_t* keycode; int modifiers; } ;
struct TYPE_4__ {int kb_delay1; int kb_delay2; } ;
struct ukbd_softc {int sc_time_ms; int* sc_ntime; int* sc_otime; int sc_delay; TYPE_2__ sc_ndata; TYPE_2__ sc_odata; TYPE_1__ sc_kbd; int sc_co_basetime; } ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int mask; size_t key; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ukbd_softc*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_4 (struct ukbd_softc*,size_t) ;
 int FUNC_5 (struct ukbd_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ukbd_softc *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9 = VAR_6->sc_time_ms;
 int32_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;

 FUNC_0();

 if (VAR_6->sc_ndata.keycode[0] == VAR_0)
  return;

 VAR_7 = VAR_6->sc_ndata.modifiers;
 VAR_8 = VAR_6->sc_odata.modifiers;
 if (VAR_7 != VAR_8) {
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   if ((VAR_7 & VAR_5[VAR_12].mask) !=
       (VAR_8 & VAR_5[VAR_12].mask)) {
    FUNC_4(VAR_6, VAR_5[VAR_12].key |
        ((VAR_7 & VAR_5[VAR_12].mask) ?
        VAR_1 : VAR_2));
   }
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11 = VAR_6->sc_odata.keycode[VAR_12];
  if (VAR_11 == 0) {
   continue;
  }
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if (VAR_6->sc_ndata.keycode[VAR_13] == 0) {
    continue;
   }
   if (VAR_11 == VAR_6->sc_ndata.keycode[VAR_13]) {
    goto rfound;
   }
  }
  FUNC_4(VAR_6, VAR_11 | VAR_2);
rfound: ;
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11 = VAR_6->sc_ndata.keycode[VAR_12];
  if (VAR_11 == 0) {
   continue;
  }
  VAR_6->sc_ntime[VAR_12] = VAR_9 + VAR_6->sc_kbd.kb_delay1;
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if (VAR_6->sc_odata.keycode[VAR_13] == 0) {
    continue;
   }
   if (VAR_11 == VAR_6->sc_odata.keycode[VAR_13]) {



    VAR_6->sc_ntime[VAR_12] = VAR_6->sc_otime[VAR_13];
    VAR_10 = (VAR_6->sc_otime[VAR_13] - VAR_9);

    if (VAR_10 > 0) {

     goto pfound;
    }
    VAR_6->sc_ntime[VAR_12] = VAR_9 + VAR_6->sc_kbd.kb_delay2;
    break;
   }
  }
  if (VAR_13 == VAR_3) {

   VAR_6->sc_co_basetime = FUNC_2();
   VAR_6->sc_delay = VAR_6->sc_kbd.kb_delay1;
   FUNC_5(VAR_6);
  }
  FUNC_4(VAR_6, VAR_11 | VAR_1);






  for (VAR_13 = 0; VAR_13 != VAR_3; VAR_13++) {
   if (VAR_13 != VAR_12)
    VAR_6->sc_ntime[VAR_13] = VAR_9 + (100 * 1000);
  }
pfound: ;
 }

 VAR_6->sc_odata = VAR_6->sc_ndata;

 FUNC_1(VAR_6->sc_otime, VAR_6->sc_ntime, sizeof(VAR_6->sc_otime));

 FUNC_3(VAR_6);
}
