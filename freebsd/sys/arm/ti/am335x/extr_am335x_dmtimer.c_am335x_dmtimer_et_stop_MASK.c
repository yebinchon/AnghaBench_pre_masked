
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {struct am335x_dmtimer_softc* et_priv; } ;
struct am335x_dmtimer_softc {int tclr; } ;


 int FUNC_0 (struct am335x_dmtimer_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_6)
{
 struct am335x_dmtimer_softc *VAR_7;

 VAR_7 = VAR_6->et_priv;


 VAR_7->tclr &= ~(VAR_5 | VAR_4);
 FUNC_0(VAR_7, VAR_3, VAR_7->tclr);
 FUNC_0(VAR_7, VAR_0, VAR_2);
 FUNC_0(VAR_7, VAR_1, VAR_2);
 return (0);
}
