
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct generic_pcie_core_softc {int ecam; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 struct generic_pcie_core_softc* FUNC_2 (int ) ;
 struct rman* FUNC_3 (struct generic_pcie_core_softc*,int) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (struct resource*,struct rman*) ;
 int FUNC_6 (struct resource*) ;

int
FUNC_7(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct resource *VAR_5)
{
 struct generic_pcie_core_softc *VAR_6;
 struct rman *VAR_7;

 VAR_6 = FUNC_2(VAR_1);







 VAR_7 = FUNC_3(VAR_6, VAR_3);
 if (VAR_7 != ((void*)0)) {
  FUNC_0(FUNC_5(VAR_5, VAR_7), ("rman mismatch"));
  FUNC_6(VAR_5);
 }

 return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
