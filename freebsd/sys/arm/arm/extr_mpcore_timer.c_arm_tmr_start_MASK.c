
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct eventtimer {int et_frequency; struct arm_tmr_softc* et_priv; } ;
struct arm_tmr_softc {int dummy; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct arm_tmr_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_8, sbintime_t VAR_9, sbintime_t VAR_10)
{
 struct arm_tmr_softc *VAR_11;
 uint32_t VAR_12, VAR_13;
 uint32_t VAR_14;

 VAR_11 = VAR_8->et_priv;
 FUNC_0(VAR_11, VAR_1, 0);
 FUNC_0(VAR_11, VAR_5, VAR_6);

 VAR_14 = VAR_3 | VAR_4;

 if (VAR_10 != 0) {
  VAR_12 = ((uint32_t)VAR_8->et_frequency * VAR_10) >> 32;
  VAR_14 |= VAR_2;
 } else
  VAR_12 = 0;

 if (VAR_9 != 0)
  VAR_13 = (uint32_t)((VAR_8->et_frequency * VAR_9) >> 32);
 else
  VAR_13 = VAR_12;

 FUNC_0(VAR_11, VAR_7, VAR_12);
 FUNC_0(VAR_11, VAR_0, VAR_13);
 FUNC_0(VAR_11, VAR_1, VAR_14);

 return (0);
}
