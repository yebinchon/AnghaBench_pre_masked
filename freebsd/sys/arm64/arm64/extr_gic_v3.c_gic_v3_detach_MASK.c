
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nregions; int * regions; int ** pcpu; } ;
struct gic_v3_softc {TYPE_1__ gic_redists; int * gic_res; scalar_t__ gic_registered; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 struct gic_v3_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 size_t VAR_2 ;
 int FUNC_4 (char*) ;

int
FUNC_5(device_t VAR_3)
{
 struct gic_v3_softc *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_3)) {



  if (VAR_4->gic_registered)
   FUNC_4("Trying to detach registered PIC");
 }
 for (VAR_6 = 0; VAR_6 < (VAR_4->gic_redists.nregions + 1); VAR_6++)
  FUNC_0(VAR_3, VAR_1, VAR_6, VAR_4->gic_res[VAR_6]);

 for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5++)
  FUNC_3(VAR_4->gic_redists.pcpu[VAR_5], VAR_0);

 FUNC_3(VAR_4->gic_res, VAR_0);
 FUNC_3(VAR_4->gic_redists.regions, VAR_0);

 return (0);
}
