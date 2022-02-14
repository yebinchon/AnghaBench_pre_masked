
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_i810_softc {int bdev; int sc_bios_allocated_flush_page; int * sc_flush_page_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2->sc_flush_page_res == ((void*)0))
  return;
 if (!VAR_2->sc_bios_allocated_flush_page) {
  VAR_3 = FUNC_2(VAR_2->bdev, VAR_0, 4);
  VAR_3 &= ~1;
  FUNC_3(VAR_2->bdev, VAR_0, VAR_3, 4);
 }
 FUNC_0(VAR_1);
}
