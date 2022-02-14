
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_uhh_softc {int * uhh_mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 struct omap_uhh_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct omap_uhh_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct omap_uhh_softc *VAR_2 = FUNC_2(VAR_1);


 FUNC_1(VAR_1);

 if (VAR_2->uhh_mem_res) {
  FUNC_0(VAR_1, VAR_0, 0, VAR_2->uhh_mem_res);
  VAR_2->uhh_mem_res = ((void*)0);
 }

 FUNC_3(VAR_2);

 return (0);
}
