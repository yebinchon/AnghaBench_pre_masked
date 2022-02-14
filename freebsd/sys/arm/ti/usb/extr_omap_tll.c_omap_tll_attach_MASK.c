
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_tll_softc {int tll_mem_res; scalar_t__ tll_mem_rid; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*,int ) ;
 struct omap_tll_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap_tll_softc*) ;
 struct omap_tll_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct omap_tll_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 VAR_5->sc_dev = VAR_4;


 VAR_5->tll_mem_rid = 0;
 VAR_5->tll_mem_res = FUNC_0(VAR_4, VAR_2,
     &VAR_5->tll_mem_rid, VAR_1);
 if (!VAR_5->tll_mem_res) {
  FUNC_2(VAR_4, "Error: Could not map TLL memory\n");
  goto error;
 }

 FUNC_4(VAR_5);

 VAR_3 = VAR_5;

 return (0);

error:
 FUNC_3(VAR_4);
 return (VAR_0);
}
