
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct eventtimer {scalar_t__ et_frequency; struct am335x_dmtimer_softc* et_priv; } ;
struct am335x_dmtimer_softc {int tclr; } ;
typedef int sbintime_t ;


 int FUNC_0 (struct am335x_dmtimer_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_8, sbintime_t VAR_9, sbintime_t VAR_10)
{
 struct am335x_dmtimer_softc *VAR_11;
 uint32_t VAR_12, VAR_13;

 VAR_11 = VAR_8->et_priv;
 VAR_11->tclr &= ~(VAR_5 | VAR_4);
 FUNC_0(VAR_11, VAR_3, VAR_11->tclr);
 FUNC_0(VAR_11, VAR_1, VAR_2);

 if (VAR_10 != 0) {
  VAR_13 = ((uint32_t)VAR_8->et_frequency * VAR_10) >> 32;
  VAR_11->tclr |= VAR_4;
 } else {
  VAR_13 = 0;
 }

 if (VAR_9 != 0)
  VAR_12 = ((uint32_t)VAR_8->et_frequency * VAR_9) >> 32;
 else
  VAR_12 = VAR_13;





 FUNC_0(VAR_11, VAR_7, 0xFFFFFFFF - VAR_13);
 FUNC_0(VAR_11, VAR_6, 0xFFFFFFFF - VAR_12);


 FUNC_0(VAR_11, VAR_0, VAR_2);
 VAR_11->tclr |= VAR_5;
 FUNC_0(VAR_11, VAR_3, VAR_11->tclr);

 return (0);
}
