
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_mmc_softc {scalar_t__ aw_bus_busy; int aw_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct aw_mmc_softc*) ;
 int FUNC_1 (struct aw_mmc_softc*) ;
 int VAR_0 ;
 struct aw_mmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct aw_mmc_softc*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2)
{
 struct aw_mmc_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_3);
 while (VAR_3->aw_bus_busy) {
  VAR_4 = FUNC_3(VAR_3, &VAR_3->aw_mtx, VAR_0, "mmchw", 0);
  if (VAR_4 != 0) {
   FUNC_1(VAR_3);
   return (VAR_4);
  }
 }
 VAR_3->aw_bus_busy++;
 FUNC_1(VAR_3);

 return (0);
}
