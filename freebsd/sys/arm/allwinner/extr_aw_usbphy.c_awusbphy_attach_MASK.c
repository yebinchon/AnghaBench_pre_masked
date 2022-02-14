
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phynode_init_def {int id; int ofw_node; } ;
struct phynode {int dummy; } ;
struct awusbphy_softc {TYPE_1__* phy_conf; } ;
typedef int phy_init ;
typedef int device_t ;
struct TYPE_2__ {int num_phys; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct phynode_init_def*,int) ;
 struct awusbphy_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 struct phynode* FUNC_5 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_6 (struct phynode*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 int VAR_3;
 struct phynode *VAR_4;
 struct phynode_init_def VAR_5;
 struct awusbphy_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_2, "failed to initialize USB PHY, error %d\n",
      VAR_3);
  return (VAR_3);
 }


 for (VAR_7 = 0; VAR_7 < VAR_6->phy_conf->num_phys; VAR_7++) {
  FUNC_1(&VAR_5, sizeof(VAR_5));
  VAR_5.id = VAR_7;
  VAR_5.ofw_node = FUNC_4(VAR_2);
  VAR_4 = FUNC_5(VAR_2, &VAR_1,
      &VAR_5);
  if (VAR_4 == ((void*)0)) {
   FUNC_3(VAR_2, "failed to create USB PHY\n");
   return (VAR_0);
  }
  if (FUNC_6(VAR_4) == ((void*)0)) {
   FUNC_3(VAR_2, "failed to create USB PHY\n");
   return (VAR_0);
  }
 }

 return (VAR_3);
}
