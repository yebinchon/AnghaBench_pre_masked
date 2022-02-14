
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_wugen_sc {int * sc_mem_res; int * sc_parent; int sc_dev; } ;
typedef int phandle_t ;
typedef int parent_xref ;
typedef int device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 struct omap4_wugen_sc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct omap4_wugen_sc *VAR_4;
 phandle_t VAR_5;
 phandle_t VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_4(VAR_3);
 VAR_4->sc_dev = VAR_3;
 VAR_5 = FUNC_7(VAR_3);

 VAR_8 = FUNC_1(VAR_5, "interrupt-parent", &VAR_6,
     sizeof(VAR_6));
 if (VAR_8 <= 0) {
  FUNC_5(VAR_3, "can't read parent node property\n");
  goto fail;
 }
 VAR_4->sc_parent = FUNC_0(VAR_6);
 if (VAR_4->sc_parent == ((void*)0)) {
  FUNC_5(VAR_3, "can't find parent controller\n");
  goto fail;
 }

 VAR_7 = 0;
 VAR_4->sc_mem_res = FUNC_3(VAR_3, VAR_2, &VAR_7,
     VAR_1);
 if (VAR_4->sc_mem_res == ((void*)0)) {
  FUNC_5(VAR_3, "can't allocate resources\n");
  return (VAR_0);
 }

 if (FUNC_6(VAR_3, FUNC_2(VAR_5)) == ((void*)0)) {
  FUNC_5(VAR_3, "can't register PIC\n");
  goto fail;
 }
 return (0);

fail:
 FUNC_8(VAR_3);
 return (VAR_0);
}
