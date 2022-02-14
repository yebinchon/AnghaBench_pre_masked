
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stge_softc {int sc_dev; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct stge_softc *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_3) & VAR_0;
 if ((VAR_6 & VAR_2) == 0)
  return;
 VAR_6 |= VAR_1;
 FUNC_1(VAR_5, VAR_3, VAR_6);
 for (VAR_7 = VAR_4; VAR_7 > 0; VAR_7--) {
  FUNC_2(10);
  VAR_6 = FUNC_0(VAR_5, VAR_3) & VAR_0;
  if ((VAR_6 & VAR_2) == 0)
   break;
 }
 if (VAR_7 == 0)
  FUNC_3(VAR_5->sc_dev, "Stopping Rx MAC timed out\n");
}
