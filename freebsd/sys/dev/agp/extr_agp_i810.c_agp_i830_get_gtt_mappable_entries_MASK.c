
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct agp_i810_softc {int gtt_mappable_entries; int bdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
 struct agp_i810_softc *VAR_5;
 uint32_t VAR_6;
 uint16_t VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 VAR_7 = FUNC_1(VAR_5->bdev, VAR_0, 2);
 if ((VAR_7 & VAR_1) == VAR_2)
  VAR_6 = 64;
 else
  VAR_6 = 128;
 VAR_5->gtt_mappable_entries = (VAR_6 * 1024 * 1024) >> VAR_3;
 return (0);
}
