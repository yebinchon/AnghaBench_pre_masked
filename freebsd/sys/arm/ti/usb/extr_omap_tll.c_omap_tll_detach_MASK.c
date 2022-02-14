
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_tll_softc {int * tll_mem_res; int tll_mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct omap_tll_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct omap_tll_softc*) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct omap_tll_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_2(VAR_3);


 if (VAR_3->tll_mem_res) {
  FUNC_0(VAR_2, VAR_0,
      VAR_3->tll_mem_rid, VAR_3->tll_mem_res);
  VAR_3->tll_mem_res = ((void*)0);
 }

 VAR_1 = ((void*)0);

 return (0);
}
