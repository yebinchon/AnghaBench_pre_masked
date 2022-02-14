
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usbphy_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbphy_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usbphy_softc*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct usbphy_softc*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct usbphy_softc *VAR_5, bool VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6)
  VAR_7 &= ~VAR_3;
 else
  VAR_7 |= VAR_3;
 FUNC_1(VAR_5, VAR_0, VAR_7);

 VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_4,
     VAR_6 ? VAR_4: 0);
 if (VAR_8 != 0) {
  FUNC_2(VAR_5->dev, "USB phy clock timeout.\n");
  return (VAR_1);
 }
 return (0);
}
