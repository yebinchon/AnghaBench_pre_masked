
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft5406ts_softc {int* touch_buf; int sc_tick; int sc_callout; int sc_evdev; int sc_dev; int sc_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ft5406ts_softc*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,void (*) (void*),struct ft5406ts_softc*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int*,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_9)
{
 struct ft5406ts_softc *VAR_10 = (struct ft5406ts_softc *)VAR_9;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_0(VAR_10);

 FUNC_9(VAR_10->sc_window, VAR_10->touch_buf, VAR_6);
 VAR_10->touch_buf[VAR_5] = VAR_8;

 VAR_11 = FUNC_1(VAR_10->sc_window);



 if (VAR_11 == VAR_8)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_12 = FUNC_2(VAR_10->sc_window, VAR_13);
  VAR_14 = FUNC_3(VAR_10->sc_window, VAR_13);
  VAR_15 = FUNC_4(VAR_10->sc_window, VAR_13);

  if (VAR_12 > VAR_7) {
   FUNC_6(VAR_10->sc_dev, "bad touch id: %d", VAR_12);
   continue;
  }
  FUNC_7(VAR_10->sc_evdev, VAR_4, VAR_2, VAR_12);
  FUNC_7(VAR_10->sc_evdev, VAR_4, VAR_3, VAR_12);
  FUNC_7(VAR_10->sc_evdev, VAR_4, VAR_0, VAR_14);
  FUNC_7(VAR_10->sc_evdev, VAR_4, VAR_1, VAR_15);
 }
 FUNC_8(VAR_10->sc_evdev);
out:
 FUNC_5(&VAR_10->sc_callout, VAR_10->sc_tick, FUNC_10, VAR_10);
}
