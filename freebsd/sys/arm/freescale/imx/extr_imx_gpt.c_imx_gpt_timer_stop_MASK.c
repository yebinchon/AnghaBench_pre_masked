
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_gpt_softc {int ir_reg; scalar_t__ sc_period; } ;
struct eventtimer {scalar_t__ et_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct imx_gpt_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_4)
{
 struct imx_gpt_softc *VAR_5;

 VAR_5 = (struct imx_gpt_softc *)VAR_4->et_priv;


 VAR_5->ir_reg &= ~(VAR_0 | VAR_1);
 FUNC_0(VAR_5, VAR_2, VAR_5->ir_reg);
 FUNC_0(VAR_5, VAR_3, VAR_0 | VAR_1);
 VAR_5->sc_period = 0;

 return (0);
}
