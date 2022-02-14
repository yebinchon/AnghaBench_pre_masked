
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_super_softc {int sc_flag; int sc_unit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_super_softc *VAR_1)
{
 if (!(VAR_1->sc_flag & VAR_0))
  return;

 FUNC_0(VAR_1->sc_unit);

 VAR_1->sc_flag &= ~VAR_0;
}
