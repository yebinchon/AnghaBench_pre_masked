
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct cyapa_softc {int cap_resy; int track_nfingers; scalar_t__ finger1_ticks; scalar_t__ poll_ticks; scalar_t__ finger2_ticks; scalar_t__ finger3_ticks; int track_x; int track_y; int track_z; int touch_x; int touch_y; int touch_z; int track_id; int track_but; scalar_t__ track_z_ticks; int delta_z; int delta_x; int delta_y; int cap_resx; int reported_but; unsigned int active_tick; scalar_t__ remote_mode; int data_signal; scalar_t__ reporting_mode; scalar_t__ fuzz_z; scalar_t__ fuzz_y; scalar_t__ fuzz_x; } ;
struct cyapa_regs {int stat; int fngr; TYPE_1__* touch; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cyapa_regs*,int) ;
 int FUNC_2 (struct cyapa_regs*,int) ;
 int FUNC_3 (struct cyapa_regs*,int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct cyapa_softc*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct cyapa_softc*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (struct cyapa_softc*) ;
 int FUNC_8 (char*,int,int,...) ;
 unsigned int VAR_16 ;

__attribute__((used)) static int
FUNC_9(struct cyapa_softc *VAR_17, struct cyapa_regs *VAR_18, int VAR_19)
{
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 uint16_t VAR_35;

 VAR_26 = VAR_17->cap_resy -
     ((VAR_17->cap_resy * VAR_15) / 100);
 VAR_33 = VAR_34 = 0;





 if ((VAR_18->stat & VAR_3) == 0) {
  VAR_18->fngr = 0;
 }


 VAR_20 = FUNC_0(VAR_18->fngr);
 VAR_21 = VAR_20;

 if (VAR_6) {
  FUNC_8("stat %02x buttons %c%c%c nfngrs=%d ",
      VAR_18->stat,
      ((VAR_18->fngr & VAR_0) ? 'L' : '-'),
      ((VAR_18->fngr & VAR_1) ? 'M' : '-'),
      ((VAR_18->fngr & VAR_2) ? 'R' : '-'),
      VAR_20);
 }

 VAR_27 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_21; ) {
  if (VAR_6) {
   FUNC_8(" [x=%04d y=%04d p=%d i=%d]",
       FUNC_2(VAR_18, VAR_22),
       FUNC_3(VAR_18, VAR_22),
       FUNC_1(VAR_18, VAR_22),
       VAR_18->touch[VAR_22].id);
  }
  if ((FUNC_3(VAR_18, VAR_22) > VAR_26 && VAR_27) ||
       FUNC_1(VAR_18, VAR_22) < VAR_8) {
   --VAR_21;
   if (VAR_22 < VAR_21) {
       VAR_18->touch[VAR_22] = VAR_18->touch[VAR_22+1];
       continue;
   }
  } else {
   if (FUNC_3(VAR_18, VAR_22) > VAR_26)
       VAR_27 = 1;
  }
  ++VAR_22;
 }
 VAR_20 = VAR_21;


 FUNC_5(VAR_17);





 switch(VAR_21) {
 case 0:
  break;
 case 1:
  if (VAR_17->track_nfingers == 0)
   VAR_17->finger1_ticks = VAR_17->poll_ticks;
  break;
 case 2:
  if (VAR_17->track_nfingers <= 0)
   VAR_17->finger1_ticks = VAR_17->poll_ticks;
  if (VAR_17->track_nfingers <= 1)
   VAR_17->finger2_ticks = VAR_17->poll_ticks;
  break;
 case 3:
 default:
  if (VAR_17->track_nfingers <= 0)
   VAR_17->finger1_ticks = VAR_17->poll_ticks;
  if (VAR_17->track_nfingers <= 1)
   VAR_17->finger2_ticks = VAR_17->poll_ticks;
  if (VAR_17->track_nfingers <= 2)
   VAR_17->finger3_ticks = VAR_17->poll_ticks;
  break;
 }
 VAR_31 = VAR_17->track_nfingers < VAR_21;
 VAR_32 = VAR_17->track_nfingers > VAR_21;
 VAR_17->track_nfingers = VAR_21;




 if (VAR_21 == 0) {
  VAR_33 = VAR_17->track_x;
  VAR_34 = VAR_17->track_y;
  VAR_17->track_x = -1;
  VAR_17->track_y = -1;
  VAR_17->track_z = -1;
  VAR_17->fuzz_x = 0;
  VAR_17->fuzz_y = 0;
  VAR_17->fuzz_z = 0;
  VAR_17->touch_x = -1;
  VAR_17->touch_y = -1;
  VAR_17->touch_z = -1;
  VAR_17->track_id = -1;
  VAR_17->track_but = 0;
  VAR_22 = 0;
  VAR_23 = 0;
  VAR_24 = 0;
 } else {
  for (VAR_22 = 0; VAR_22 < VAR_20; ++VAR_22) {
   if (VAR_17->track_id == VAR_18->touch[VAR_22].id)
    break;
  }
  if (VAR_22 == VAR_20) {
   VAR_22 = 0;
   VAR_17->track_x = -1;
   VAR_17->track_y = -1;
   VAR_17->track_z = -1;
   while (FUNC_3(VAR_18, VAR_22) >= VAR_26 &&
       VAR_22 < VAR_20) ++VAR_22;
   if (VAR_22 == VAR_20) {
    VAR_22 = 0;
   }
   VAR_17->track_id = VAR_18->touch[VAR_22].id;
  }
  else if ((VAR_17->track_but ||
       FUNC_3(VAR_18, VAR_22) >= VAR_26) &&
      VAR_31 && VAR_21 == 2) {
   VAR_23 = VAR_18->touch[0].id == VAR_17->track_id ? 1 : 0;
   if (FUNC_3(VAR_18, VAR_23) < VAR_26) {
       VAR_22 = VAR_23;
       VAR_17->track_x = -1;
       VAR_17->track_y = -1;
       VAR_17->track_z = -1;
       VAR_17->track_id = VAR_18->touch[VAR_22].id;
   }
  }
 }


 if (VAR_17->track_z != -1 && VAR_21 != 2 &&
     (VAR_17->poll_ticks - VAR_17->track_z_ticks) > VAR_11) {
  VAR_17->track_z = -1;
  VAR_17->track_z_ticks = 0;
 }


 if (!(VAR_18->fngr & VAR_0) &&
     ((VAR_21 && VAR_17->track_z != -1) ||
      (VAR_21 == 2 && FUNC_3(VAR_18, 0) < VAR_26 &&
      FUNC_3(VAR_18, 1) < VAR_26))) {
  if (VAR_21 == 2 && (VAR_17->poll_ticks - VAR_17->finger2_ticks)
      > VAR_12) {
   VAR_30 = (FUNC_3(VAR_18, 0) +
       FUNC_3(VAR_18, 1)) >> 1;
   VAR_17->delta_z += VAR_30 / VAR_5 - VAR_17->track_z;
   if (VAR_17->track_z == -1) {
       VAR_17->delta_z = 0;
   }
   if (VAR_17->touch_z == -1)
       VAR_17->touch_z = VAR_30;
   VAR_17->track_z = VAR_30 / VAR_5;
   VAR_17->track_z_ticks = VAR_17->poll_ticks;
  }
 } else if (VAR_21) {

  VAR_28 = FUNC_2(VAR_18, VAR_22);
  VAR_29 = FUNC_3(VAR_18, VAR_22);
  VAR_33 = VAR_28;
  VAR_34 = VAR_29;
  if (VAR_17->track_x != -1 && VAR_17->track_y < VAR_26 &&
      (VAR_21 > 1 || (VAR_17->poll_ticks - VAR_17->finger1_ticks)
      >= VAR_9 || VAR_19 < VAR_10)) {
   VAR_17->delta_x += VAR_28 - VAR_17->track_x;
   VAR_17->delta_y -= VAR_29 - VAR_17->track_y;
   if (VAR_17->delta_x > VAR_17->cap_resx)
    VAR_17->delta_x = VAR_17->cap_resx;
   if (VAR_17->delta_x < -VAR_17->cap_resx)
    VAR_17->delta_x = -VAR_17->cap_resx;
   if (VAR_17->delta_y > VAR_17->cap_resy)
    VAR_17->delta_y = VAR_17->cap_resy;
   if (VAR_17->delta_y < -VAR_17->cap_resy)
    VAR_17->delta_y = -VAR_17->cap_resy;

   if (FUNC_4(VAR_17->delta_y) > VAR_17->cap_resy / 2 ||
       FUNC_4(VAR_17->delta_x) > VAR_17->cap_resx / 2) {
    if (VAR_6)
     FUNC_8("Detected jump by %i %i\n",
         VAR_17->delta_x, VAR_17->delta_y);
       VAR_17->delta_x = VAR_17->delta_y = 0;
   }
  }
  if (VAR_17->touch_x == -1) {
   VAR_17->touch_x = VAR_28;
   VAR_17->touch_y = VAR_29;
  }
  VAR_17->track_x = VAR_28;
  VAR_17->track_y = VAR_29;
 }


 int VAR_36 = (VAR_7 && VAR_32 &&
     VAR_21 == 0 && VAR_17->poll_ticks - VAR_17->finger1_ticks
     >= VAR_14 &&
     VAR_17->poll_ticks - VAR_17->finger1_ticks < VAR_13);

 if (VAR_18->fngr & VAR_0 || VAR_36) {
  if (VAR_17->track_but) {
   VAR_35 = VAR_17->track_but;
  } else if (VAR_21 == 1) {
   if (VAR_33 < VAR_17->cap_resx * 2 / 3)
    VAR_35 = VAR_0;
   else if (VAR_34 < VAR_17->cap_resy / 2)
    VAR_35 = VAR_1;
   else
    VAR_35 = VAR_2;
  } else if (VAR_36) {
   if (VAR_33 < VAR_17->cap_resx * 2 / 3 ||
       VAR_7 < 2)
    VAR_35 = VAR_0;
   else if (VAR_34 < VAR_17->cap_resy / 2 &&
       VAR_7 > 2)
    VAR_35 = VAR_1;
   else
    VAR_35 = VAR_2;
  } else {
   VAR_35 = VAR_0;
  }
 } else {
  VAR_35 = 0;
 }





 VAR_17->track_but = VAR_35;
 if (VAR_17->delta_x || VAR_17->delta_y || VAR_17->delta_z ||
     VAR_17->track_but != VAR_17->reported_but) {
  VAR_17->active_tick = VAR_16;
  if (VAR_17->remote_mode == 0 && VAR_17->reporting_mode)
   VAR_17->data_signal = 1;
  VAR_25 = 0;
 } else if ((unsigned)(VAR_16 - VAR_17->active_tick) >= VAR_4) {
  VAR_17->active_tick = VAR_16 - VAR_4;
  VAR_25 = 1;
 } else {
  VAR_25 = 0;
 }
 FUNC_6(VAR_17);
 FUNC_7(VAR_17);

 if (VAR_6)
  FUNC_8("%i >> %i << %i\n", VAR_25, VAR_17->track_id, VAR_17->delta_y);
 return (VAR_25);
}
