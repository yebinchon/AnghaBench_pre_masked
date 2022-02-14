
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sp804_timer_softc {int et_enabled; } ;
struct eventtimer {scalar_t__ et_frequency; struct sp804_timer_softc* et_priv; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_8, sbintime_t VAR_9, sbintime_t VAR_10)
{
 struct sp804_timer_softc *VAR_11 = VAR_8->et_priv;
 uint32_t VAR_12, VAR_13;

 if (VAR_9 != 0) {
  VAR_11->et_enabled = 1;

  VAR_12 = ((uint32_t)VAR_8->et_frequency * VAR_9) >> 32;

  FUNC_1(VAR_3, VAR_12);
  VAR_13 = VAR_4 | VAR_6 |
      VAR_7 | VAR_0 |
      VAR_5;
  FUNC_1(VAR_2, VAR_13);

  return (0);
 }

 if (VAR_10 != 0) {
  FUNC_0("period");
 }

 return (VAR_1);
}
