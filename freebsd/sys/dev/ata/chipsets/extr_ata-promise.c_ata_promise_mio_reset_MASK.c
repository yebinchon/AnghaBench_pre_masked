
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ata_promise_sx4 {int mtx; int busy; } ;
struct ata_pci_controller {int r_res2; TYPE_1__* chip; struct ata_promise_sx4* chipset_data; } ;
struct TYPE_4__ {int (* softreset ) (int ,int ) ;} ;
struct ata_channel {int unit; int devices; TYPE_2__ hw; } ;
typedef int device_t ;
struct TYPE_3__ {int cfg2; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;






 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(device_t VAR_5)
{
    struct ata_pci_controller *VAR_6 = FUNC_8(FUNC_7(VAR_5));
    struct ata_channel *VAR_7 = FUNC_8(VAR_5);
    struct ata_promise_sx4 *VAR_8;

    switch (VAR_6->chip->cfg2) {
    case 128:


 VAR_8 = VAR_6->chipset_data;
 FUNC_1(VAR_6->r_res2, 0xc0260 + (VAR_7->unit << 7), VAR_7->unit + 1);
 FUNC_6(1000);
 FUNC_1(VAR_6->r_res2, 0xc0260 + (VAR_7->unit << 7),
   (FUNC_0(VAR_6->r_res2, 0xc0260 + (VAR_7->unit << 7)) &
    ~0x00003f9f) | (VAR_7->unit + 1));


 FUNC_10(&VAR_8->mtx);
 FUNC_1(VAR_6->r_res2, 0xc012c,
   (FUNC_0(VAR_6->r_res2, 0xc012c) & ~0x00000f9f) | (1 << 11));
 FUNC_2(10);
 FUNC_1(VAR_6->r_res2, 0xc012c,
   (FUNC_0(VAR_6->r_res2, 0xc012c) & ~0x00000f9f));
 VAR_8->busy = 0;
 FUNC_11(&VAR_8->mtx);
 FUNC_3(VAR_5);
 break;

    case 131:
    case 133:
    case 130:
 if ((VAR_6->chip->cfg2 == 130) ||
     ((VAR_6->chip->cfg2 == 133) && (VAR_7->unit < 2))) {


     FUNC_1(VAR_6->r_res2, 0x06c, (0x00110000 << VAR_7->unit));
 }


 FUNC_1(VAR_6->r_res2, 0x0260 + (VAR_7->unit << 7), (1 << 11));
 FUNC_6(10000);
 FUNC_1(VAR_6->r_res2, 0x0260 + (VAR_7->unit << 7),
   (FUNC_0(VAR_6->r_res2, 0x0260 + (VAR_7->unit << 7)) &
    ~0x00003f9f) | (VAR_7->unit + 1));

 if ((VAR_6->chip->cfg2 == 130) ||
     ((VAR_6->chip->cfg2 == 133) && (VAR_7->unit < 2))) {

     if (FUNC_5(VAR_5, -1, 1))
  FUNC_3(VAR_5);
     else
  VAR_7->devices = 0;


     FUNC_1(VAR_6->r_res2, 0x06c, (0x00000011 << VAR_7->unit));
 }
 else
     FUNC_3(VAR_5);
 break;

    case 132:
    case 129:
 if ((VAR_6->chip->cfg2 == 129) ||
     ((VAR_6->chip->cfg2 == 132) && (VAR_7->unit < 2))) {




     FUNC_1(VAR_6->r_res2, 0x060, (0x00110000 << VAR_7->unit));
 }


 FUNC_1(VAR_6->r_res2, 0x0260 + (VAR_7->unit << 7), (1 << 11));
 FUNC_6(10000);
 FUNC_1(VAR_6->r_res2, 0x0260 + (VAR_7->unit << 7),
   (FUNC_0(VAR_6->r_res2, 0x0260 + (VAR_7->unit << 7)) &
    ~0x00003f9f) | (VAR_7->unit + 1));

 if ((VAR_6->chip->cfg2 == 129) ||
     ((VAR_6->chip->cfg2 == 132) && (VAR_7->unit < 2))) {


     FUNC_1(VAR_6->r_res2, 0x414 + (VAR_7->unit << 8),
       (FUNC_0(VAR_6->r_res2, 0x414 + (VAR_7->unit << 8)) &
       ~0x00000003) | 0x00000001);

     if (FUNC_5(VAR_5, -1, 1)) {
  u_int32_t VAR_9 = VAR_7->hw.softreset(VAR_5, VAR_2);

  if (1 | VAR_4)
             FUNC_9(VAR_5, "SIGNATURE: %08x\n", VAR_9);

  switch (VAR_9 >> 16) {
  case 0x0000:
      VAR_7->devices = VAR_1;
      break;
  case 0x9669:
      VAR_7->devices = VAR_3;
      FUNC_4(VAR_5);
      break;
  case 0xeb14:
      VAR_7->devices = VAR_0;
      break;
  default:
      if (VAR_4)
   FUNC_9(VAR_5,
          "No signature, assuming disk device\n");
      VAR_7->devices = VAR_1;
  }
  if (VAR_4)
      FUNC_9(VAR_5, "promise_mio_reset devices=%08x\n",
          VAR_7->devices);

     } else
  VAR_7->devices = 0;


     FUNC_1(VAR_6->r_res2, 0x060, (0x00000011 << VAR_7->unit));


     FUNC_1(VAR_6->r_res2, 0x4e8 + (VAR_7->unit << 8), 0x00);
 }
 else
     FUNC_3(VAR_5);
 break;

    }
}
