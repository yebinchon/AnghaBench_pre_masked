
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode {int dummy; } ;
struct padctl_softc {int phy_ena_cnt; } ;
struct padctl_pad {int (* powerup ) (struct padctl_softc*,struct padctl_lane*) ;int (* powerdown ) (struct padctl_softc*,struct padctl_lane*) ;} ;
struct padctl_lane {intptr_t name; struct padctl_pad* pad; int enabled; } ;
typedef int device_t ;


 int VAR_0 ;
 struct padctl_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,intptr_t) ;
 struct padctl_lane* VAR_1 ;
 intptr_t FUNC_2 (struct padctl_lane*) ;
 int FUNC_3 (struct padctl_softc*) ;
 int FUNC_4 (struct padctl_softc*) ;
 int FUNC_5 (struct phynode*) ;
 intptr_t FUNC_6 (struct phynode*) ;
 int FUNC_7 (struct padctl_softc*,struct padctl_lane*) ;
 int FUNC_8 (struct padctl_softc*,struct padctl_lane*) ;

__attribute__((used)) static int
FUNC_9(struct phynode *VAR_2, bool VAR_3)
{
 device_t VAR_4;
 intptr_t VAR_5;
 struct padctl_softc *VAR_6;
 struct padctl_lane *VAR_7;
 struct padctl_pad *VAR_8;
 int VAR_9;

 VAR_4 = FUNC_5(VAR_2);
 VAR_5 = FUNC_6(VAR_2);
 VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 < 0 || VAR_5 >= FUNC_2(VAR_1)) {
  FUNC_1(VAR_4, "Unknown phy: %d\n", VAR_5);
  return (VAR_0);
 }
 VAR_7 = VAR_1 + VAR_5;
 if (!VAR_7->enabled) {
  FUNC_1(VAR_4, "Lane is not enabled/configured: %s\n",
      VAR_7->name);
  return (VAR_0);
 }
 VAR_8 = VAR_7->pad;
 if (VAR_3) {
  if (VAR_6->phy_ena_cnt == 0) {
   VAR_9 = FUNC_4(VAR_6);
   if (VAR_9 != 0)
    return (VAR_9);
  }
  VAR_6->phy_ena_cnt++;
 }

 if (VAR_3)
  VAR_9 = VAR_8->powerup(VAR_6, VAR_7);
 else
  VAR_9 = VAR_8->powerdown(VAR_6, VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 if (!VAR_3) {
   if (VAR_6->phy_ena_cnt == 1) {
   VAR_9 = FUNC_3(VAR_6);
   if (VAR_9 != 0)
    return (VAR_9);
  }
  VAR_6->phy_ena_cnt--;
 }

 return (0);
}
