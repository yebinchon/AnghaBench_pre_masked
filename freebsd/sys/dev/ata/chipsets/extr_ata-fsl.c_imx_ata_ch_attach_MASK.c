
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int r_res1; } ;
struct ata_channel {int flags; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {int offset; int res; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_17)
{
 struct ata_pci_controller *VAR_18;
 struct ata_channel *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_5(FUNC_4(VAR_17));
 VAR_19 = FUNC_5(VAR_17);
 for (VAR_20 = VAR_7; VAR_20 < VAR_12; VAR_20++)
  VAR_19->r_io[VAR_20].res = VAR_18->r_res1;

 FUNC_3(VAR_18->r_res1, 0x24, 0x80);
 FUNC_0(100);
 FUNC_3(VAR_18->r_res1, 0x24, 0xc0);
 FUNC_0(100);



 FUNC_2(VAR_18->r_res1, 0x00, 3);
 FUNC_2(VAR_18->r_res1, 0x01, 3);
 FUNC_2(VAR_18->r_res1, 0x02, (25 + 15) / 15);
 FUNC_2(VAR_18->r_res1, 0x03, (70 + 15) / 15);


 FUNC_2(VAR_18->r_res1, 0x04, (70 + 15) / 15);
 FUNC_2(VAR_18->r_res1, 0x05, (50 + 15) / 15 + 2);
 FUNC_2(VAR_18->r_res1, 0x06, 1);
 FUNC_2(VAR_18->r_res1, 0x07, (10 + 15) / 15);


 FUNC_2(VAR_18->r_res1, 0x08, (10 + 15) / 15);

 FUNC_3(VAR_18->r_res1, 0x24, 0xc1);
 FUNC_0(30000);


 VAR_19->r_io[VAR_7 ].offset = 0xa0;
 VAR_19->r_io[VAR_10].offset = 0xa4;
 VAR_19->r_io[VAR_9 ].offset = 0xa4;
 VAR_19->r_io[VAR_4 ].offset = 0xa8;
 VAR_19->r_io[VAR_14 ].offset = 0xac;
 VAR_19->r_io[VAR_5].offset = 0xb0;
 VAR_19->r_io[VAR_6].offset = 0xb4;
 VAR_19->r_io[VAR_8 ].offset = 0xb8;
 VAR_19->r_io[VAR_2].offset = 0xbc;

 VAR_19->r_io[VAR_15 ].offset = 0xbc;
 VAR_19->r_io[VAR_0].offset = 0xd8;
 VAR_19->r_io[VAR_3].offset = 0xd8;

 FUNC_1(VAR_17);

 VAR_19->flags |= VAR_13;
 VAR_19->flags |= VAR_16;
 VAR_19->flags |= VAR_1;
 VAR_19->flags |= VAR_11;


 FUNC_3(VAR_18->r_res1, 0x28, 0xf8);

 FUNC_3(VAR_18->r_res1, 0x2c, 0x88);

 return 0;
}
