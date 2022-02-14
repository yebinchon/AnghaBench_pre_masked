
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int * mii_bus; int phy_addr; int xlpge_if; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int **,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(device_t VAR_4, struct nlm_xlpge_softc *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, &VAR_5->mii_bus, VAR_5->xlpge_if,
   VAR_2, VAR_3,
   VAR_0, VAR_5->phy_addr, VAR_1, 0);

 if (VAR_6) {
  FUNC_0(VAR_4, "attaching PHYs failed\n");
  VAR_5->mii_bus = ((void*)0);
 }

 if (VAR_5->mii_bus != ((void*)0)) {


 }
}
