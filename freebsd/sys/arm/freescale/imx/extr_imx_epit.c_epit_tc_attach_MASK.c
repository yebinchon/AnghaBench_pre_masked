
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* tc_name; int tc_quality; int tc_counter_mask; struct epit_softc* tc_priv; int tc_get_timecount; int tc_frequency; } ;
struct epit_softc {int ctlreg; TYPE_1__ tc; int clkfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct epit_softc*,int ,int) ;
 int FUNC_1 (int ,struct epit_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct epit_softc *VAR_5)
{


 FUNC_0(VAR_5, VAR_2, 0xffffffff);
 FUNC_0(VAR_5, VAR_0, VAR_5->ctlreg | VAR_1);


 VAR_5->tc.tc_name = "EPIT";
 VAR_5->tc.tc_quality = 1000;
 VAR_5->tc.tc_frequency = VAR_5->clkfreq;
 VAR_5->tc.tc_counter_mask = 0xffffffff;
 VAR_5->tc.tc_get_timecount = VAR_4;
 VAR_5->tc.tc_priv = VAR_5;
 FUNC_2(&VAR_5->tc);


 FUNC_1(VAR_3, VAR_5);

 return (0);
}
