
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct eventtimer {scalar_t__ et_frequency; scalar_t__ et_priv; } ;
struct epit_softc {int ctlreg; int oneshot; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct epit_softc*,int ,int) ;
 int FUNC_1 (struct epit_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_6, sbintime_t VAR_7, sbintime_t VAR_8)
{
 struct epit_softc *VAR_9;
 uint32_t VAR_10;

 VAR_9 = (struct epit_softc *)VAR_6->et_priv;






 FUNC_0(VAR_9, VAR_1, VAR_9->ctlreg);
 FUNC_0(VAR_9, VAR_4, VAR_5);
 if (VAR_8 != 0) {
  VAR_9->oneshot = 0;
  VAR_10 = ((uint32_t)VAR_6->et_frequency * VAR_8) >> 32;
 } else if (VAR_7 != 0) {
  VAR_9->oneshot = 1;
  VAR_10 = ((uint32_t)VAR_6->et_frequency * VAR_7) >> 32;
 } else {
  return (VAR_0);
 }


 FUNC_0(VAR_9, VAR_3, VAR_10);
 FUNC_1(VAR_9, VAR_1, VAR_9->ctlreg | VAR_2);

 return (0);
}
