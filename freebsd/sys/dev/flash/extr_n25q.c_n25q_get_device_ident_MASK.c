
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct n25q_softc {int dev; } ;
struct n25q_flash_ident {int manufacturer_id; int device_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int FUNC_1 (int ) ;
 struct n25q_flash_ident* VAR_1 ;
 int FUNC_2 (struct n25q_flash_ident*) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static struct n25q_flash_ident*
FUNC_4(struct n25q_softc *VAR_2)
{
 uint8_t VAR_3;
 uint16_t VAR_4;
 device_t VAR_5;
 uint8_t VAR_6[4];
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2->dev);

 FUNC_0(VAR_5, VAR_2->dev, VAR_0, (uint8_t *)&VAR_6[0], 4);

 VAR_3 = VAR_6[0];
 VAR_4 = (VAR_6[1] << 8) | (VAR_6[2]);

 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_1); VAR_7++) {
  if ((VAR_1[VAR_7].manufacturer_id == VAR_3) &&
      (VAR_1[VAR_7].device_id == VAR_4))
   return &VAR_1[VAR_7];
 }

 FUNC_3("Unknown SPI flash device. Vendor: %02x, device id: %04x\n",
     VAR_3, VAR_4);

 return (((void*)0));
}
