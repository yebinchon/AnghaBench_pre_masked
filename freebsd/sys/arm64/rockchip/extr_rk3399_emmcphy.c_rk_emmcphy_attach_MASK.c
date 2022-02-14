
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_emmcphy_softc {int * syscon; } ;
struct phynode_init_def {void* ofw_node; scalar_t__ id; } ;
struct phynode {int dummy; } ;
typedef int phy_init ;
typedef void* phandle_t ;
typedef int pcell_t ;
typedef int handle ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,char*,void*,int) ;
 scalar_t__ FUNC_1 (void*,char*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct phynode_init_def*,int) ;
 struct rk_emmcphy_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 void* FUNC_6 (int ) ;
 struct phynode* FUNC_7 (int ,int *,struct phynode_init_def*) ;
 intptr_t FUNC_8 (struct phynode*) ;
 int * FUNC_9 (struct phynode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int ,void*,char*,int **) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct phynode_init_def VAR_4;
 struct phynode *VAR_5;
 struct rk_emmcphy_softc *VAR_6;
 phandle_t VAR_7;
 phandle_t VAR_8;
 pcell_t VAR_9;
 intptr_t VAR_10;

 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_6(VAR_3);

 if (FUNC_0(VAR_7, "clocks", (void *)&VAR_9,
     sizeof(VAR_9)) <= 0) {
  FUNC_5(VAR_3, "cannot get clocks handle\n");
  return (VAR_0);
 }
 VAR_8 = FUNC_2(VAR_9);
 if (FUNC_1(VAR_8, "arasan,soc-ctl-syscon") &&
     FUNC_10(VAR_3, VAR_8,
     "arasan,soc-ctl-syscon", &VAR_6->syscon) != 0) {
  FUNC_5(VAR_3, "cannot get grf driver handle\n");
  return (VAR_0);
 }

 if (VAR_6->syscon == ((void*)0)) {
  FUNC_5(VAR_3, "failed to get syscon\n");
  return (VAR_0);
 }


 FUNC_3(&VAR_4, sizeof(VAR_4));
 VAR_4.id = 0;
 VAR_4.ofw_node = FUNC_6(VAR_3);
 VAR_5 = FUNC_7(VAR_3, &VAR_2, &VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_3, "failed to create eMMC PHY\n");
  return (VAR_0);
 }
 if (FUNC_9(VAR_5) == ((void*)0)) {
  FUNC_5(VAR_3, "failed to register eMMC PHY\n");
  return (VAR_0);
 }
 if (VAR_1) {
  VAR_10 = FUNC_8(VAR_5);
  FUNC_5(VAR_3, "Attached phy id: %ld\n", VAR_10);
 }
 return (0);
}
