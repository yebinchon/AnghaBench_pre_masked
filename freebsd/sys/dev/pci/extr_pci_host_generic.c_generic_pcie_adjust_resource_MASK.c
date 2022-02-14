
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct generic_pcie_core_softc {int ecam; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct resource*,int ,int ) ;
 struct generic_pcie_core_softc* FUNC_1 (int ) ;
 struct rman* FUNC_2 (struct generic_pcie_core_softc*,int) ;
 int FUNC_3 (int ,int ,struct resource*,int ,int ) ;
 int FUNC_4 (struct resource*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3,
    struct resource *VAR_4, rman_res_t VAR_5, rman_res_t VAR_6)
{
 struct generic_pcie_core_softc *VAR_7;
 struct rman *VAR_8;

 VAR_7 = FUNC_1(VAR_1);






 VAR_8 = FUNC_2(VAR_7, VAR_3);
 if (VAR_8 != ((void*)0))
  return (FUNC_4(VAR_4, VAR_5, VAR_6));
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}
