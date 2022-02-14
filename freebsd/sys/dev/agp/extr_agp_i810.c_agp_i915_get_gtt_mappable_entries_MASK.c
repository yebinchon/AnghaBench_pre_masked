
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_i810_softc {int gtt_mappable_entries; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct agp_i810_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1);
 VAR_2->gtt_mappable_entries = VAR_3 >> VAR_0;
 return (0);
}
