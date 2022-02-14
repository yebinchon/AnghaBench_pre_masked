
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt1310_timer_softc {int lt_oneshot; int lt_period; } ;
struct eventtimer {scalar_t__ et_frequency; scalar_t__ et_priv; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt1310_timer_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_5, sbintime_t VAR_6, sbintime_t VAR_7)
{
 struct rt1310_timer_softc *VAR_8 = (struct rt1310_timer_softc *)VAR_5->et_priv;
 uint32_t VAR_9;

 if (VAR_7 == 0) {
  VAR_8->lt_oneshot = 1;
  VAR_8->lt_period = 0;
 } else {
  VAR_8->lt_oneshot = 0;
  VAR_8->lt_period = ((uint32_t)VAR_5->et_frequency * VAR_7) >> 32;
 }

 if (VAR_6 == 0)
  VAR_9 = VAR_8->lt_period;
 else
  VAR_9 = ((uint32_t)VAR_5->et_frequency * VAR_6) >> 32;


 FUNC_0(VAR_8, VAR_0, 0);


 FUNC_0(VAR_8, VAR_3, VAR_9);
 FUNC_0(VAR_8, VAR_4, VAR_9);
 FUNC_0(VAR_8, VAR_0,
  VAR_1 | VAR_2);

 return (0);
}
