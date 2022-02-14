
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {int command; } ;
struct TYPE_8__ {TYPE_2__ ata; } ;
struct ata_request {int unit; TYPE_4__* dma; TYPE_3__ u; int parent; } ;
struct ata_pci_controller {int r_res2; TYPE_1__* chip; } ;
struct TYPE_10__ {int work_bus; scalar_t__ work; } ;
struct ata_channel {int unit; TYPE_5__ dma; } ;
struct TYPE_9__ {int sg_bus; } ;
struct TYPE_6__ {scalar_t__ cfg2; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ata_request*) ;
 int FUNC_3 (int *,struct ata_request*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ata_request *VAR_2)
{
    struct ata_pci_controller *VAR_3=FUNC_5(FUNC_4(VAR_2->parent));
    struct ata_channel *VAR_4 = FUNC_5(VAR_2->parent);

    u_int32_t *VAR_5 = (u_int32_t *)VAR_4->dma.work;

    FUNC_1(VAR_3->r_res2, (VAR_4->unit + 1) << 2, 0x00000001);

    if ((VAR_3->chip->cfg2 == VAR_1) ||
        ((VAR_3->chip->cfg2 == VAR_0) && (VAR_4->unit < 2))) {

 FUNC_0(VAR_3->r_res2, 0x4e8 + (VAR_4->unit << 8), VAR_2->unit & 0x0f);
    }


    switch (VAR_2->u.ata.command) {
    default:
 return FUNC_2(VAR_2);

    case 131:
    case 130:
 VAR_5[0] = FUNC_6(0x04 | ((VAR_4->unit + 1) << 16) | (0x00 << 24));
 break;

    case 129:
    case 128:
 VAR_5[0] = FUNC_6(0x00 | ((VAR_4->unit + 1) << 16) | (0x00 << 24));
 break;
    }
    VAR_5[1] = FUNC_6(VAR_2->dma->sg_bus);
    VAR_5[2] = 0;
    FUNC_3((u_int8_t*)VAR_5, VAR_2);

    FUNC_1(VAR_3->r_res2, 0x0240 + (VAR_4->unit << 7), VAR_4->dma.work_bus);
    return 0;
}
