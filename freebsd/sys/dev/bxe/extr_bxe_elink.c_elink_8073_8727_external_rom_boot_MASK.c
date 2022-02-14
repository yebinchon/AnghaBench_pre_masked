
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {scalar_t__ type; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ) ;

__attribute__((used)) static elink_status_t FUNC_5(struct bxe_softc *VAR_10,
          struct elink_phy *VAR_11,
          uint8_t VAR_12)
{
 uint32_t VAR_13 = 0;
 uint16_t VAR_14, VAR_15;
 elink_status_t VAR_16 = VAR_1;



 FUNC_3(VAR_10, VAR_11,
    VAR_2,
    VAR_3,
    0x0001);


 FUNC_3(VAR_10, VAR_11,
    VAR_2,
    VAR_3,
    0x008c);

 FUNC_3(VAR_10, VAR_11,
    VAR_2,
    VAR_7, 0x0001);


 FUNC_3(VAR_10, VAR_11,
    VAR_2,
    VAR_3,
    VAR_4);


 FUNC_3(VAR_10, VAR_11,
    VAR_2,
    VAR_3,
    VAR_5);


 FUNC_0(1000 * 100);


 do {
  VAR_13++;
  if (VAR_13 > 300) {
   FUNC_1(VAR_10,
     "elink_8073_8727_external_rom_boot port %x:"
     "Download failed. fw version = 0x%x\n",
     VAR_12, VAR_14);
   VAR_16 = VAR_0;
   break;
  }

  FUNC_2(VAR_10, VAR_11,
    VAR_2,
    VAR_8, &VAR_14);
  FUNC_2(VAR_10, VAR_11,
    VAR_2,
    VAR_6, &VAR_15);

  FUNC_0(1000 * 1);
 } while (VAR_14 == 0 || VAR_14 == 0x4321 ||
   ((VAR_15 & 0xff) != 0x03 && (VAR_11->type ==
   VAR_9)));


 FUNC_3(VAR_10, VAR_11,
    VAR_2,
    VAR_7, 0x0000);
 FUNC_4(VAR_10, VAR_11, VAR_12);

 FUNC_1(VAR_10,
   "elink_8073_8727_external_rom_boot port %x:"
   "Download complete. fw version = 0x%x\n",
   VAR_12, VAR_14);

 return VAR_16;
}
