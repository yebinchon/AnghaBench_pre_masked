
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_uhh_softc {int * port_mode; int uhh_mem_res; int sc_dev; } ;
typedef int propname ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,void**) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct omap_uhh_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct omap_uhh_softc*) ;
 int FUNC_11 (int ,int,int ,int *,int,int *) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_8)
{
 struct omap_uhh_softc *VAR_9 = FUNC_6(VAR_8);
 int VAR_10;
 int VAR_11;
 int VAR_12;
 phandle_t VAR_13;
 char VAR_14[16];
 char *VAR_15;


 VAR_9->sc_dev = VAR_8;


 VAR_11 = 0;
 VAR_9->uhh_mem_res = FUNC_3(VAR_8, VAR_7, &VAR_11, VAR_6);
 if (!VAR_9->uhh_mem_res) {
  FUNC_7(VAR_8, "Error: Could not map UHH memory\n");
  goto error;
 }

 VAR_13 = FUNC_8(VAR_8);

 if (VAR_13 == -1)
  goto error;


 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_9->port_mode[VAR_12] = VAR_3;
  FUNC_13(VAR_14, sizeof(VAR_14),
      "port%d-mode", VAR_12+1);

  if (FUNC_1(VAR_13, VAR_14, (void**)&VAR_15) <= 0)
   continue;
  if (FUNC_14(VAR_15, "ehci-phy") == 0)
   VAR_9->port_mode[VAR_12] = VAR_1;
  else if (FUNC_14(VAR_15, "ehci-tll") == 0)
   VAR_9->port_mode[VAR_12] = VAR_2;
  else if (FUNC_14(VAR_15, "ehci-hsic") == 0)
   VAR_9->port_mode[VAR_12] = VAR_0;
 }


 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10) {
  FUNC_7(VAR_8, "Error: could not setup OMAP EHCI, %d\n", VAR_10);
  goto error;
 }

 FUNC_12(VAR_8, VAR_13);




 FUNC_5(VAR_8);




 for (VAR_13 = FUNC_0(VAR_13); VAR_13 > 0; VAR_13 = FUNC_2(VAR_13))
  FUNC_11(VAR_8, VAR_13, 0, ((void*)0), -1, ((void*)0));
 return (FUNC_4(VAR_8));

error:
 FUNC_9(VAR_8);
 return (VAR_4);
}
