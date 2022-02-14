
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ale_softc {int ale_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ale_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ale_softc*,int ) ;
 int FUNC_2 (struct ale_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct ale_softc *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_5);

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if ((VAR_6 & (VAR_4 | VAR_3)) != 0) {
  VAR_6 &= ~(VAR_4 | VAR_3);
  FUNC_2(VAR_5, VAR_1, VAR_6);
 }

 for (VAR_7 = VAR_2; VAR_7 > 0; VAR_7--) {
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  if (VAR_6 == 0)
   break;
  FUNC_3(10);
 }
 if (VAR_7 == 0)
  FUNC_4(VAR_5->ale_dev,
      "could not disable Tx/Rx MAC(0x%08x)!\n", VAR_6);
}
