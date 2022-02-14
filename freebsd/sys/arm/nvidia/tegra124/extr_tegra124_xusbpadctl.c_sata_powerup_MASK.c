
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct padctl_softc {int dev; } ;
struct padctl_lane {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct padctl_softc*,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct padctl_softc*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct padctl_softc *VAR_12, struct padctl_lane *VAR_13)
{
 uint32_t VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(VAR_12, VAR_9);
 VAR_14 &= ~VAR_2;
 VAR_14 &= ~VAR_1;
 FUNC_2(VAR_12, VAR_9, VAR_14);

 VAR_14 = FUNC_1(VAR_12, VAR_10);
 VAR_14 &= ~VAR_6;
 VAR_14 &= ~VAR_5;
 FUNC_2(VAR_12, VAR_10, VAR_14);

 VAR_14 = FUNC_1(VAR_12, VAR_10);
 VAR_14 |= VAR_4;
 FUNC_2(VAR_12, VAR_10, VAR_14);

 VAR_14 = FUNC_1(VAR_12, VAR_10);
 VAR_14 |= VAR_7;
 FUNC_2(VAR_12, VAR_10, VAR_14);

 for (VAR_15 = 100; VAR_15 >= 0; VAR_15--) {
  VAR_14 = FUNC_1(VAR_12, VAR_10);
  if (VAR_14 & VAR_3)
   break;
  FUNC_0(100);
 }
 if (VAR_15 <= 0) {
  FUNC_3(VAR_12->dev, "Failed to power up SATA phy\n");
  return (VAR_0);
 }
 VAR_14 = FUNC_1(VAR_12, VAR_11);
 VAR_14 |= VAR_7;
 FUNC_2(VAR_12, VAR_11, VAR_14);

 VAR_14 = FUNC_1(VAR_12, VAR_11);
 VAR_14 |= VAR_8;
 FUNC_2(VAR_12, VAR_11, VAR_14);

 return (0);
}
