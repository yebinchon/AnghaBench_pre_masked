
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_softc {int sc_flags; int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hifn_softc*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct hifn_softc *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_0;

 if (VAR_4->sc_flags & VAR_2) {
  VAR_6 = VAR_1;
 }

 for (VAR_5 = 5000; VAR_5 > 0; VAR_5--) {
  FUNC_0(1);
  if (!(FUNC_1(VAR_4, VAR_6) & VAR_3))
   break;
 }
 if (!VAR_5)
  FUNC_2(VAR_4->sc_dev, "proc unit did not reset\n");
}
