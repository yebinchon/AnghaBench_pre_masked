
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_i810_softc {scalar_t__ sc_flush_page_vaddr; } ;
typedef int device_t ;


 struct agp_i810_softc* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0)
{
 struct agp_i810_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 *(uint32_t *)VAR_1->sc_flush_page_vaddr = 1;
}
