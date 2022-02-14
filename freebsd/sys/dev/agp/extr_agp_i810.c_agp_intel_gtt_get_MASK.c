
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gtt {scalar_t__ gma_bus_addr; int scratch_page_dma; scalar_t__ do_idle_maps; int gtt_mappable_entries; int gtt_total_entries; int stolen_size; } ;
struct TYPE_2__ {int * as_aperture; } ;
struct agp_i810_softc {TYPE_1__ agp; int gtt_mappable_entries; int gtt_total_entries; int stolen_size; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

struct intel_gtt
FUNC_3(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 struct intel_gtt VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3.stolen_size = VAR_2->stolen_size;
 VAR_3.gtt_total_entries = VAR_2->gtt_total_entries;
 VAR_3.gtt_mappable_entries = VAR_2->gtt_mappable_entries;
 VAR_3.do_idle_maps = 0;
 VAR_3.scratch_page_dma = FUNC_0(VAR_0);
 if (VAR_2->agp.as_aperture != ((void*)0))
  VAR_3.gma_bus_addr = FUNC_2(VAR_2->agp.as_aperture);
 else
  VAR_3.gma_bus_addr = 0;
 return (VAR_3);
}
