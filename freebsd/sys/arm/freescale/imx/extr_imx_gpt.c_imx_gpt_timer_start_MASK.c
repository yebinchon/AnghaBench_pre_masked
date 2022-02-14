
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct imx_gpt_softc {int sc_period; int ir_reg; } ;
struct eventtimer {scalar_t__ et_frequency; scalar_t__ et_priv; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct imx_gpt_softc*,int ) ;
 int FUNC_1 (struct imx_gpt_softc*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_7, sbintime_t VAR_8, sbintime_t VAR_9)
{
 struct imx_gpt_softc *VAR_10;
 uint32_t VAR_11;

 VAR_10 = (struct imx_gpt_softc *)VAR_7->et_priv;

 if (VAR_9 != 0) {
  VAR_10->sc_period = ((uint32_t)VAR_7->et_frequency * VAR_9) >> 32;

  FUNC_1(VAR_10, VAR_5, FUNC_0(VAR_10, VAR_3) + VAR_10->sc_period);

  VAR_10->ir_reg |= VAR_1;
  FUNC_1(VAR_10, VAR_4, VAR_10->ir_reg);
  return (0);
 } else if (VAR_8 != 0) {

  if ((VAR_10->ir_reg & VAR_2) == 0) {
   VAR_10->ir_reg |= VAR_2;
   FUNC_1(VAR_10, VAR_4, VAR_10->ir_reg);
  }
  VAR_11 = ((uint32_t)VAR_7->et_frequency * VAR_8) >> 32;

  FUNC_2();

  FUNC_1(VAR_10, VAR_6, FUNC_0(VAR_10, VAR_3) + VAR_11);

  FUNC_3();
  return (0);
 }

 return (VAR_0);
}
