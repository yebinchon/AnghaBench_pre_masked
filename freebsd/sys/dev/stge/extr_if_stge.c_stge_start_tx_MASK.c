
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stge_softc {int sc_dev; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int FUNC_2 (struct stge_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct stge_softc *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_3) & VAR_0;
 if ((VAR_7 & VAR_2) != 0)
  return;
 VAR_7 |= VAR_1;
 FUNC_2(VAR_6, VAR_3, VAR_7);
 FUNC_1(VAR_6, VAR_5, 127);
 for (VAR_8 = VAR_4; VAR_8 > 0; VAR_8--) {
  FUNC_3(10);
  VAR_7 = FUNC_0(VAR_6, VAR_3) & VAR_0;
  if ((VAR_7 & VAR_2) != 0)
   break;
 }
 if (VAR_8 == 0)
  FUNC_4(VAR_6->sc_dev, "Starting Tx MAC timed out\n");
}
