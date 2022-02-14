
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_mv_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct pci_mv_softc *VAR_15)
{
 uint32_t VAR_16;



 VAR_16 = FUNC_0(VAR_15->dev, VAR_10);
 VAR_16 &= ~0x000000F0;
 VAR_16 |= 0x000000040;
 FUNC_1(VAR_15->dev, VAR_10, VAR_16);


 FUNC_1(VAR_15->dev, VAR_5, 0x3511);
 FUNC_1(VAR_15->dev, VAR_7, 0x5311);


 FUNC_1(VAR_15->dev, VAR_6, 0x0002);
 FUNC_1(VAR_15->dev, VAR_8, 0x0002);


 VAR_16 = FUNC_0(VAR_15->dev, VAR_13);
 VAR_16 |= VAR_1 | VAR_2 |
        VAR_3 | VAR_4;
 FUNC_1(VAR_15->dev, VAR_13, VAR_16);


 FUNC_1(VAR_15->dev, VAR_0, 0xFFFFFFFF);
 FUNC_1(VAR_15->dev, VAR_13, 0xFFFFFFFF);
 FUNC_1(VAR_15->dev, VAR_14, 0xFFFFFFFF);
 FUNC_1(VAR_15->dev, VAR_11, 0xFFFFFFFF);
 FUNC_1(VAR_15->dev, VAR_12, 0xFFFFFFFF);


 FUNC_1(VAR_15->dev, VAR_9, 0);
}
