
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct jme_softc {int jme_dev; int jme_chip_rev; int jme_phyaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct jme_softc*,int ) ;
 int FUNC_2 (struct jme_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_7(struct jme_softc *VAR_6)
{
 uint32_t VAR_7;
 uint16_t VAR_8;

 VAR_8 = FUNC_3(VAR_6->jme_dev, VAR_6->jme_phyaddr, VAR_3);
 VAR_8 &= ~VAR_0;
 FUNC_4(VAR_6->jme_dev, VAR_6->jme_phyaddr, VAR_3, VAR_8);
 if (FUNC_0(VAR_6->jme_chip_rev) >= 5) {
  VAR_7 = FUNC_1(VAR_6, VAR_2);
  VAR_7 &= ~0x0000000F;
  FUNC_2(VAR_6, VAR_2, VAR_7);
  VAR_7 = FUNC_5(VAR_6->jme_dev, VAR_1, 4);
  VAR_7 &= ~VAR_5;
  VAR_7 |= VAR_4;
  FUNC_6(VAR_6->jme_dev, VAR_1, VAR_7, 4);
 }
}
