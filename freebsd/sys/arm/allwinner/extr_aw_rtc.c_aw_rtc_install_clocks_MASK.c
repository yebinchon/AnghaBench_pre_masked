
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct clkdom {int dummy; } ;
struct aw_rtc_softc {TYPE_2__* conf; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_6__ {char const* name; } ;
struct TYPE_8__ {int freq; TYPE_1__ clkdef; } ;
struct TYPE_7__ {int iosc_freq; } ;


 TYPE_3__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct clkdom* FUNC_0 (int ) ;
 int FUNC_1 (struct clkdom*) ;
 int FUNC_2 (struct clkdom*) ;
 scalar_t__ FUNC_3 (struct clkdom*,TYPE_3__*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char const***) ;

__attribute__((used)) static void
FUNC_7(struct aw_rtc_softc *VAR_3, device_t VAR_4) {
 struct clkdom *VAR_5;
 const char **VAR_6;
 phandle_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_6(VAR_7, "clock-output-names", &VAR_6);

 if (VAR_8 <= 0)
  return;

 if (VAR_8 != 3) {
  FUNC_4(VAR_4, "Having only %d clocks instead of 3, aborting\n", VAR_8);
  return;
 }

 VAR_5 = FUNC_0(VAR_4);

 VAR_1.clkdef.name = VAR_6[0];
 if (FUNC_3(VAR_5, &VAR_1) != 0)
  FUNC_4(VAR_4, "Cannot register osc32k clock\n");

 VAR_0.clkdef.name = VAR_6[2];
 VAR_0.freq = VAR_3->conf->iosc_freq;
 if (FUNC_3(VAR_5, &VAR_0) != 0)
  FUNC_4(VAR_4, "Cannot register iosc clock\n");

 FUNC_2(VAR_5);

 if (VAR_2)
  FUNC_1(VAR_5);
}
