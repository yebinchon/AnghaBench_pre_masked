
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int widget_cap; } ;
struct TYPE_4__ {int cap; int config; } ;
struct TYPE_5__ {TYPE_1__ pin; } ;
struct hdaa_widget {scalar_t__ type; TYPE_3__ param; int nid; TYPE_2__ wclass; } ;
struct hdaa_devinfo {int startnode; int endnode; int gpio_cap; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 struct hdaa_devinfo* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct hdaa_devinfo*) ;
 int FUNC_21 (struct hdaa_devinfo*) ;
 int FUNC_22 (struct hdaa_devinfo*) ;
 int FUNC_23 (struct hdaa_widget*,int ) ;
 struct hdaa_widget* FUNC_24 (struct hdaa_devinfo*,int) ;
 int FUNC_25 (char*,...) ;

__attribute__((used)) static void
FUNC_26(device_t VAR_3)
{
 struct hdaa_devinfo *VAR_4 = FUNC_17(VAR_3);
 struct hdaa_widget *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 FUNC_18(VAR_3, "Dumping AFG pins:\n");
 FUNC_18(VAR_3, "nid   0x    as seq "
     "device       conn  jack    loc        color   misc\n");
 for (VAR_9 = VAR_4->startnode; VAR_9 < VAR_4->endnode; VAR_9++) {
  VAR_5 = FUNC_24(VAR_4, VAR_9);
  if (VAR_5 == ((void*)0) || VAR_5->type !=
      VAR_2)
   continue;
  FUNC_23(VAR_5, VAR_5->wclass.pin.config);
  VAR_7 = VAR_5->wclass.pin.cap;
  FUNC_18(VAR_3, "    Caps: %2s %3s %2s %4s %4s",
      FUNC_12(VAR_7)?"IN":"",
      FUNC_13(VAR_7)?"OUT":"",
      FUNC_10(VAR_7)?"HP":"",
      FUNC_9(VAR_7)?"EAPD":"",
      FUNC_16(VAR_7)?"VREF":"");
  if (FUNC_11(VAR_7) ||
      FUNC_14(VAR_7)) {
   if (FUNC_15(VAR_7)) {
    VAR_8 = 0;
    FUNC_19(VAR_3,
        FUNC_2(0, VAR_5->nid, 0));
    do {
     VAR_6 = FUNC_19(VAR_3,
         FUNC_1(0, VAR_5->nid));
     if (VAR_6 != 0x7fffffff && VAR_6 != 0xffffffff)
      break;
     FUNC_0(10);
    } while (++VAR_8 < 10000);
   } else {
    VAR_8 = 0;
    VAR_6 = FUNC_19(VAR_3, FUNC_1(0,
        VAR_5->nid));
   }
   FUNC_25(" Sense: 0x%08x (%sconnected%s)", VAR_6,
       (VAR_6 & VAR_1) ?
        "" : "dis",
       (FUNC_3(VAR_5->param.widget_cap) &&
        (VAR_6 & VAR_0)) ?
         ", ELD valid" : "");
   if (VAR_8 > 0)
    FUNC_25(" delay %dus", VAR_8 * 10);
  }
  FUNC_25("\n");
 }
 FUNC_18(VAR_3,
     "NumGPIO=%d NumGPO=%d NumGPI=%d GPIWake=%d GPIUnsol=%d\n",
     FUNC_7(VAR_4->gpio_cap),
     FUNC_8(VAR_4->gpio_cap),
     FUNC_6(VAR_4->gpio_cap),
     FUNC_5(VAR_4->gpio_cap),
     FUNC_4(VAR_4->gpio_cap));
 FUNC_20(VAR_4);
 FUNC_21(VAR_4);
 FUNC_22(VAR_4);
}
