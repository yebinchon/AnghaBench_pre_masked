
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucom_super_softc {int sc_tq; } ;
struct ucom_softc {struct ucom_super_softc* sc_super; } ;


 int FUNC_0 (int *) ;

uint8_t
FUNC_1(struct ucom_softc *VAR_0)
{
 struct ucom_super_softc *VAR_1 = VAR_0->sc_super;

 return (FUNC_0(&VAR_1->sc_tq));
}
