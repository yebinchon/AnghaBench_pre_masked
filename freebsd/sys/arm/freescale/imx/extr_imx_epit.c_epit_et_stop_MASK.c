
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {scalar_t__ et_priv; } ;
struct epit_softc {int ctlreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct epit_softc*,int ,int ) ;
 int FUNC_1 (struct epit_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_3)
{
 struct epit_softc *VAR_4;

 VAR_4 = (struct epit_softc *)VAR_3->et_priv;


 FUNC_0(VAR_4, VAR_0, VAR_4->ctlreg);
 FUNC_1(VAR_4, VAR_1, VAR_2);

 return (0);
}
