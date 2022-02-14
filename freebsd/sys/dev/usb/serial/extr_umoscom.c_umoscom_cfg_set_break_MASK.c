
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct umoscom_softc {int sc_lcr; } ;
struct ucom_softc {struct umoscom_softc* sc_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct umoscom_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_3, uint8_t VAR_4)
{
 struct umoscom_softc *VAR_5 = VAR_3->sc_parent;
 uint16_t VAR_6;

 VAR_6 = VAR_5->sc_lcr;
 if (VAR_4)
  VAR_6 |= VAR_1;

 FUNC_0(VAR_5, VAR_0, VAR_6 | VAR_2);
}
