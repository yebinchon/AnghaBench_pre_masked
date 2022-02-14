
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct umct_softc {int sc_mcr; } ;
struct ucom_softc {struct umct_softc* sc_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct umct_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_2, uint8_t VAR_3)
{
 struct umct_softc *VAR_4 = VAR_2->sc_parent;

 if (VAR_3)
  VAR_4->sc_mcr |= 0x02;
 else
  VAR_4->sc_mcr &= ~0x02;

 FUNC_0(VAR_4, VAR_0, VAR_1, VAR_4->sc_mcr);
}
