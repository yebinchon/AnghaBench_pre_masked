
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ale_softc {int ale_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ale_softc*,int) ;
 int FUNC_1 (struct ale_softc*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct ale_softc *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;


 FUNC_1(VAR_4, 0x1008, FUNC_0(VAR_4, 0x1008) | 0x8000);

 FUNC_1(VAR_4, VAR_1, VAR_3);
 for (VAR_6 = VAR_2; VAR_6 > 0; VAR_6--) {
  FUNC_2(10);
  if ((FUNC_0(VAR_4, VAR_1) & VAR_3) == 0)
   break;
 }
 if (VAR_6 == 0)
  FUNC_3(VAR_4->ale_dev, "master reset timeout!\n");

 for (VAR_6 = VAR_2; VAR_6 > 0; VAR_6--) {
  if ((VAR_5 = FUNC_0(VAR_4, VAR_0)) == 0)
   break;
  FUNC_2(10);
 }

 if (VAR_6 == 0)
  FUNC_3(VAR_4->ale_dev, "reset timeout(0x%08x)!\n", VAR_5);
}
