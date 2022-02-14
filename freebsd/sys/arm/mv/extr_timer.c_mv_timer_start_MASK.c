
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ et_frequency; } ;
struct mv_timer_softc {TYPE_1__ et; } ;
struct eventtimer {scalar_t__ et_priv; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_2, sbintime_t VAR_3, sbintime_t VAR_4)
{
 struct mv_timer_softc *VAR_5;
 uint32_t VAR_6, VAR_7;


 VAR_5 = (struct mv_timer_softc *)VAR_2->et_priv;
 if (VAR_4 != 0)
  VAR_6 = ((uint32_t)VAR_5->et.et_frequency * VAR_4) >> 32;
 else
  VAR_6 = 0;
 if (VAR_3 != 0)
  VAR_7 = ((uint32_t)VAR_5->et.et_frequency * VAR_3) >> 32;
 else
  VAR_7 = VAR_6;


 FUNC_3(0, VAR_6);
 FUNC_1(0, VAR_7);
 VAR_6 = FUNC_0();
 VAR_6 |= VAR_1;
 if (VAR_4 != 0)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_2(VAR_6);
 return (0);
}
