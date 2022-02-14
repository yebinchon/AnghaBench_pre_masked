
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct a10_timer_softc {int timer0_freq; } ;
struct TYPE_3__ {int tc_frequency; struct a10_timer_softc* tc_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct a10_timer_softc*,int ) ;
 int FUNC_6 (struct a10_timer_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct a10_timer_softc *VAR_7)
{
 uint32_t VAR_8;


 VAR_8 = FUNC_5(VAR_7, FUNC_1(0));
 VAR_8 &= ~VAR_4 | ~VAR_2 | ~VAR_1;
 VAR_8 |= FUNC_0(1) | VAR_3;
 FUNC_6(VAR_7, FUNC_1(0), VAR_8);


 FUNC_6(VAR_7, FUNC_3(0), ~0);
 VAR_8 = FUNC_5(VAR_7, FUNC_3(0));


 VAR_8 = FUNC_5(VAR_7, FUNC_1(0));
 VAR_8 |= VAR_0 | VAR_5;
 FUNC_6(VAR_7, FUNC_1(0), VAR_8);

 VAR_8 = FUNC_5(VAR_7, FUNC_2(0));

 VAR_6.tc_priv = VAR_7;
 VAR_6.tc_frequency = VAR_7->timer0_freq;
 FUNC_4(&VAR_6);
}
