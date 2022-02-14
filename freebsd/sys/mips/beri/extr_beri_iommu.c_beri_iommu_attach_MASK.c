
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beri_iommu_softc {int * res; int bsh_data; int bst_data; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 struct beri_iommu_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct beri_iommu_softc *VAR_3;
 phandle_t VAR_4, VAR_5;

 VAR_3 = FUNC_3(VAR_2);
 VAR_3->dev = VAR_2;

 if (FUNC_2(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_4(VAR_2, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_3->bst_data = FUNC_7(VAR_3->res[0]);
 VAR_3->bsh_data = FUNC_6(VAR_3->res[0]);

 VAR_5 = FUNC_5(VAR_2);
 VAR_4 = FUNC_1(VAR_5);
 FUNC_0(VAR_4, VAR_2);

 return (0);
}
