
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ctrl; int config; int cap; } ;
struct TYPE_4__ {TYPE_1__ pin; } ;
struct hdaa_widget {scalar_t__ type; scalar_t__ waspin; scalar_t__ enable; size_t bindas; TYPE_2__ wclass; } ;
struct hdaa_devinfo {int nodecnt; int quirks; scalar_t__ init_clear; struct hdaa_widget* widget; struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {scalar_t__ enable; scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct hdaa_devinfo *VAR_17)
{
 struct hdaa_audio_as *VAR_18 = VAR_17->as;
 struct hdaa_widget *VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 for (VAR_21 = 0; VAR_21 < VAR_17->nodecnt; VAR_21++) {
  VAR_19 = &VAR_17->widget[VAR_21];
  if (VAR_19 == ((void*)0))
   continue;
  if (VAR_19->type != VAR_16 &&
      VAR_19->waspin == 0)
   continue;

  VAR_20 = VAR_19->wclass.pin.cap;


  if (VAR_17->init_clear) {
   VAR_19->wclass.pin.ctrl &= ~(
       VAR_10 |
       VAR_12 |
       VAR_11 |
       VAR_13);
  }

  if (VAR_19->enable == 0) {

   continue;
  } else if (VAR_19->waspin) {

   VAR_19->wclass.pin.ctrl |=
       VAR_11;
  } else if (VAR_19->bindas < 0 || VAR_18[VAR_19->bindas].enable == 0) {

   continue;
  } else if (VAR_18[VAR_19->bindas].dir == VAR_0) {

   if (FUNC_2(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        VAR_11;

   if ((VAR_17->quirks & VAR_1) &&
       FUNC_4(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        FUNC_0(
        VAR_7);
   else if ((VAR_17->quirks & VAR_3) &&
       FUNC_6(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        FUNC_0(
        VAR_9);
   else if ((VAR_17->quirks & VAR_2) &&
       FUNC_5(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        FUNC_0(
        VAR_8);
  } else {

   if (FUNC_3(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        VAR_12;

   if (FUNC_1(VAR_20) &&
       (VAR_19->wclass.pin.config &
       VAR_15) ==
       VAR_14)
    VAR_19->wclass.pin.ctrl |=
        VAR_10;

   if ((VAR_17->quirks & VAR_4) &&
       FUNC_4(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        FUNC_0(
        VAR_7);
   else if ((VAR_17->quirks & VAR_6) &&
       FUNC_6(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        FUNC_0(
        VAR_9);
   else if ((VAR_17->quirks & VAR_5) &&
       FUNC_5(VAR_20))
    VAR_19->wclass.pin.ctrl |=
        FUNC_0(
        VAR_8);
  }
 }
}
