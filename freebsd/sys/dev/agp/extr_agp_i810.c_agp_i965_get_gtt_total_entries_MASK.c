
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_i810_softc {int gtt_total_entries; int * sc_res; } ;
typedef int device_t ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct agp_i810_softc *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_6 = 0;
 VAR_5 = FUNC_0(VAR_4->sc_res[0], VAR_0);
 switch (VAR_5 & VAR_1) {
 case 133:
  VAR_4->gtt_total_entries = 128 * 1024 / 4;
  break;
 case 130:
  VAR_4->gtt_total_entries = 256 * 1024 / 4;
  break;
 case 128:
  VAR_4->gtt_total_entries = 512 * 1024 / 4;
  break;

 case 132:
  VAR_4->gtt_total_entries = 1024 * 1024 / 4;
  break;
 case 129:
  VAR_4->gtt_total_entries = 2 * 1024 * 1024 / 4;
  break;
 case 131:
  VAR_4->gtt_total_entries = (1024 + 512) * 1024 / 4;
  break;
 default:
  FUNC_2(VAR_3, "Unknown page table size\n");
  VAR_6 = VAR_2;
 }
 return (VAR_6);
}
