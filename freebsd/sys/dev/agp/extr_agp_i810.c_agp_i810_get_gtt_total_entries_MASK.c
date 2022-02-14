
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_softc {int gtt_mappable_entries; int gtt_total_entries; } ;
typedef int device_t ;


 struct agp_i810_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0)
{
 struct agp_i810_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->gtt_total_entries = VAR_1->gtt_mappable_entries;
 return (0);
}
