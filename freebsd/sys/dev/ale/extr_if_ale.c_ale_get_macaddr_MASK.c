
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ale_softc {int* ale_eaddr; int ale_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ale_softc*,int ) ;
 int FUNC_1 (struct ale_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static void
FUNC_5(struct ale_softc *VAR_8)
{
 uint32_t VAR_9[2], VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 if ((VAR_10 & VAR_5) != 0) {
  VAR_10 &= ~VAR_5;
  FUNC_1(VAR_8, VAR_2, VAR_10);
 }

 if (FUNC_4(VAR_8->ale_dev, VAR_4, &VAR_12) == 0) {




  FUNC_1(VAR_8, VAR_3, FUNC_0(VAR_8, VAR_3) |
      VAR_6);
  for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
   FUNC_2(1000);
   VAR_10 = FUNC_0(VAR_8, VAR_3);
   if ((VAR_10 & VAR_6) == 0)
    break;
  }
  if (VAR_11 == 0)
   FUNC_3(VAR_8->ale_dev,
       "reloading EEPROM timeout!\n");
 } else {
  if (VAR_7)
   FUNC_3(VAR_8->ale_dev,
       "PCI VPD capability not found!\n");
 }

 VAR_9[0] = FUNC_0(VAR_8, VAR_0);
 VAR_9[1] = FUNC_0(VAR_8, VAR_1);
 VAR_8->ale_eaddr[0] = (VAR_9[1] >> 8) & 0xFF;
 VAR_8->ale_eaddr[1] = (VAR_9[1] >> 0) & 0xFF;
 VAR_8->ale_eaddr[2] = (VAR_9[0] >> 24) & 0xFF;
 VAR_8->ale_eaddr[3] = (VAR_9[0] >> 16) & 0xFF;
 VAR_8->ale_eaddr[4] = (VAR_9[0] >> 8) & 0xFF;
 VAR_8->ale_eaddr[5] = (VAR_9[0] >> 0) & 0xFF;
}
