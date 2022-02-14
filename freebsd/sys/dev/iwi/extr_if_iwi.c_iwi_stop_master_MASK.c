
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwi_softc {int flags; int sc_dev; } ;


 int FUNC_0 (struct iwi_softc*,int ) ;
 int FUNC_1 (struct iwi_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct iwi_softc *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;


 FUNC_1(VAR_6, VAR_0, 0);

 FUNC_1(VAR_6, VAR_1, VAR_5);
 for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
  if (FUNC_0(VAR_6, VAR_1) & VAR_3)
   break;
  FUNC_2(10);
 }
 if (VAR_8 == 5)
  FUNC_3(VAR_6->sc_dev, "timeout waiting for master\n");

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_1, VAR_7 | VAR_4);

 VAR_6->flags &= ~VAR_2;
}
