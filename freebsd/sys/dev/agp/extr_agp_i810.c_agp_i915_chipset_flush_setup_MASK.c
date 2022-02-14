
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;
struct agp_i810_softc {int sc_bios_allocated_flush_page; int bdev; int sc_flush_page_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_2 ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct agp_i810_softc *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_3(VAR_4->bdev, VAR_0, 4);
 if ((VAR_5 & 1) != 0) {
  VAR_5 &= ~1;
  if (VAR_2)
   FUNC_2(VAR_3,
       "Found already configured flush page at 0x%jx\n",
       (uintmax_t)VAR_5);
  VAR_4->sc_bios_allocated_flush_page = 1;





  VAR_6 = FUNC_0(VAR_3, VAR_5,
      VAR_5 + VAR_1 - 1);
  if (VAR_6 != 0)
   return (VAR_6);
 } else {
  VAR_4->sc_bios_allocated_flush_page = 0;
  VAR_6 = FUNC_0(VAR_3, 0, 0xffffffff);
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_5 = FUNC_5(VAR_4->sc_flush_page_res);
  FUNC_4(VAR_4->bdev, VAR_0, VAR_5 | 1, 4);
 }
 return (0);
}
