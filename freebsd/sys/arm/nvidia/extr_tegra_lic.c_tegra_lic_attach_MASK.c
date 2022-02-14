
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_lic_sc {int ** mem_res; int * parent; int dev; } ;
typedef int phandle_t ;
typedef int parent_xref ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_lic_sc*,int,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int ,int ,int **) ;
 struct tegra_lic_sc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int * FUNC_8 (int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 struct tegra_lic_sc *VAR_5;
 phandle_t VAR_6;
 phandle_t VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = FUNC_6(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_6 = FUNC_10(VAR_4);

 VAR_9 = FUNC_1(VAR_6, "interrupt-parent", &VAR_7,
     sizeof(VAR_7));
 if (VAR_9 <= 0) {
  FUNC_7(VAR_4, "Cannot read parent node property\n");
  goto fail;
 }
 VAR_5->parent = FUNC_0(VAR_7);
 if (VAR_5->parent == ((void*)0)) {
  FUNC_7(VAR_4, "Cannott find parent controller\n");
  goto fail;
 }

 if (FUNC_4(VAR_4, VAR_3, VAR_5->mem_res)) {
  FUNC_7(VAR_4, "Cannott allocate resources\n");
  goto fail;
 }


 for (VAR_8 = 0; VAR_8 < FUNC_9(VAR_3); VAR_8++) {
  if (VAR_5->mem_res[VAR_8] == ((void*)0))
   continue;
  FUNC_3(VAR_5, VAR_8, VAR_2, 0xFFFFFFFF);
  FUNC_3(VAR_5, VAR_8, VAR_1, 0);
 }


 if (FUNC_8(VAR_4, FUNC_2(VAR_6)) == ((void*)0)) {
  FUNC_7(VAR_4, "Cannot register PIC\n");
  goto fail;
 }
 return (0);

fail:
 FUNC_5(VAR_4, VAR_3, VAR_5->mem_res);
 return (VAR_0);
}
