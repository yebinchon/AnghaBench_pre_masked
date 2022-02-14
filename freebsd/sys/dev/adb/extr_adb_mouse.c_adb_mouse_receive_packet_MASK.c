
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef scalar_t__ u_char ;
struct TYPE_2__ {int buttons; } ;
struct adb_mouse_softc {int flags; int sc_tapping; int button_buf; int xdelta; int ydelta; int buttons; int rsel; int sc_cv; int sc_mtx; TYPE_1__ hw; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct adb_mouse_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static u_int
FUNC_6(device_t VAR_4, u_char VAR_5, u_char VAR_6,
    u_char VAR_7, int VAR_8, u_char *VAR_9)
{
 struct adb_mouse_softc *VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_10 = FUNC_1(VAR_4);

 if (VAR_6 != VAR_0 || VAR_7 != 0 || VAR_8 < 2)
  return (0);

 VAR_13 = VAR_9[0] & 0x7f;
 VAR_12 = VAR_9[1] & 0x7f;

 VAR_14 = 0;
 VAR_14 |= !(VAR_9[0] & 0x80);
 VAR_14 |= !(VAR_9[1] & 0x80) << 1;

 if (VAR_10->flags & VAR_1) {
  for (VAR_11 = 2; VAR_11 < VAR_8 && VAR_11 < 5; VAR_11++) {
   VAR_12 |= (VAR_9[VAR_11] & 0x07) << (3*VAR_11 + 1);
   VAR_13 |= (VAR_9[VAR_11] & 0x70) << (3*VAR_11 - 3);

   VAR_14 |= !(VAR_9[VAR_11] & 0x08) << (2*VAR_11 - 2);
   VAR_14 |= !(VAR_9[VAR_11] & 0x80) << (2*VAR_11 - 1);
  }
 } else {
  VAR_8 = 2;
 }


 if (VAR_12 & (0x40 << 3*(VAR_8-2)))
  VAR_12 |= 0xffffffc0 << 3*(VAR_8 - 2);
 if (VAR_13 & (0x40 << 3*(VAR_8-2)))
  VAR_13 |= 0xffffffc0 << 3*(VAR_8 - 2);

 if ((VAR_10->flags & VAR_2) && (VAR_10->sc_tapping == 1)) {
  VAR_15 = VAR_14;
  if (VAR_14 == 0x12) {





   VAR_15 = 0x3;
   VAR_10->button_buf = VAR_15;
  } else if (VAR_14 == 0x2) {



   if (VAR_10->button_buf != 0x3)
    VAR_15 = 0x2;
   else
    VAR_15 = 0;

   VAR_10->button_buf = 0;
  }
  VAR_14 = VAR_15;
 }
 if (FUNC_4(VAR_14, 1 << VAR_10->hw.buttons)
     && !(VAR_10->flags & VAR_2)) {
  VAR_14 |= 1 << (VAR_10->hw.buttons - 1);
 }
 VAR_14 &= (1 << VAR_10->hw.buttons) - 1;

 FUNC_2(&VAR_10->sc_mtx);




 VAR_10->xdelta += VAR_12;
 VAR_10->ydelta -= VAR_13;

 VAR_10->buttons = VAR_14;

 FUNC_3(&VAR_10->sc_mtx);

 FUNC_0(&VAR_10->sc_cv);
 FUNC_5(&VAR_10->rsel, VAR_3);

 return (0);
}
