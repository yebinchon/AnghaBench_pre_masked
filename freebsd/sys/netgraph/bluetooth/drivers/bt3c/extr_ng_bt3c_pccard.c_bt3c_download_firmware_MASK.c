
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct TYPE_9__ {int block_address; int block_size; scalar_t__ block_alignment; } ;
typedef TYPE_1__ ng_bt3c_firmware_block_ep ;
typedef TYPE_2__* bt3c_softc_p ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_7(bt3c_softc_p VAR_1, char const *VAR_2, int VAR_3)
{
 ng_bt3c_firmware_block_ep const *VAR_4 = ((void*)0);
 u_int16_t const *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;
 u_int8_t VAR_8;


 FUNC_6(VAR_1->dev, "Reseting the card...\n");
 FUNC_3(VAR_1, 0x8040, 0x0404);
 FUNC_3(VAR_1, 0x8040, 0x0400);
 FUNC_0(1);

 FUNC_3(VAR_1, 0x8040, 0x0404);
 FUNC_0(17);


 FUNC_6(VAR_1->dev, "Starting firmware download process...\n");

 for (VAR_7 = 0; VAR_7 < VAR_3; ) {
  VAR_4 = (ng_bt3c_firmware_block_ep const *)(VAR_2 + VAR_7);
  VAR_5 = (u_int16_t const *)(VAR_4 + 1);

  if (VAR_0)
   FUNC_6(VAR_1->dev, "Download firmware block, " "address=%#08x, size=%d words, aligment=%d\n",

    VAR_4->block_address, VAR_4->block_size,
    VAR_4->block_alignment);

  FUNC_2(VAR_1, VAR_4->block_address);
  for (VAR_6 = 0; VAR_6 < VAR_4->block_size; VAR_6++)
   FUNC_5(VAR_1, VAR_5[VAR_6]);

  VAR_7 += (sizeof(*VAR_4) + (VAR_4->block_size * 2) +
    VAR_4->block_alignment);
 }

 FUNC_0(17);
 FUNC_6(VAR_1->dev, "Firmware download process complete\n");


 FUNC_6(VAR_1->dev, "Starting the card...\n");
 FUNC_2(VAR_1, 0x3000);
 FUNC_1(VAR_1, VAR_8);
 FUNC_4(VAR_1, (VAR_8 | 0x40));
 FUNC_0(17);


 FUNC_6(VAR_1->dev, "Clearing card registers...\n");
 FUNC_3(VAR_1, 0x7006, 0x0000);
 FUNC_3(VAR_1, 0x7005, 0x0000);
 FUNC_3(VAR_1, 0x7001, 0x0000);
 FUNC_0(1000);
}
