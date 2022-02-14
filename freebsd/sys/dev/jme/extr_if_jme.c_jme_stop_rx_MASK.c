
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int jme_dev; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct jme_softc *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if ((VAR_4 & VAR_2) == 0)
  return;
 VAR_4 &= ~VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4);
 for (VAR_5 = VAR_1; VAR_5 > 0; VAR_5--) {
  FUNC_2(1);
  if ((FUNC_0(VAR_3, VAR_0) & VAR_2) == 0)
   break;
 }
 if (VAR_5 == 0)
  FUNC_3(VAR_3->jme_dev, "stopping recevier timeout!\n");
}
