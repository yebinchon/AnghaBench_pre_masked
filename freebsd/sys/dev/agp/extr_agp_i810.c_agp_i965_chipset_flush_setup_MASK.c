
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct agp_i810_softc {int sc_bios_allocated_flush_page; int bdev; int sc_flush_page_res; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct agp_i810_softc *VAR_5;
 uint64_t VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = FUNC_1(VAR_4);

 VAR_7 = FUNC_3(VAR_5->bdev, VAR_0 + 4, 4);
 VAR_8 = FUNC_3(VAR_5->bdev, VAR_0, 4);

 if ((VAR_8 & 1) != 0) {
  VAR_6 = ((uint64_t)VAR_7 << 32) | (VAR_8 & ~1);
  if (VAR_3)
   FUNC_2(VAR_4,
       "Found already configured flush page at 0x%jx\n",
       (uintmax_t)VAR_6);
  VAR_5->sc_bios_allocated_flush_page = 1;





  VAR_9 = FUNC_0(VAR_4, VAR_6,
      VAR_6 + VAR_1 - 1);
  if (VAR_9 != 0)
   return (VAR_9);
 } else {
  VAR_5->sc_bios_allocated_flush_page = 0;
  VAR_9 = FUNC_0(VAR_4, 0, ~0);
  if (VAR_9 != 0)
   return (VAR_9);
  VAR_6 = FUNC_5(VAR_5->sc_flush_page_res);
  FUNC_4(VAR_5->bdev, VAR_0 + 4,
      (VAR_6 >> 32) & VAR_2, 4);
  FUNC_4(VAR_5->bdev, VAR_0,
      (VAR_6 & VAR_2) | 1, 4);
 }
 return (0);
}
