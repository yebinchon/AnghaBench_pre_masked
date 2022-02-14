
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct TYPE_4__ {int command; } ;
struct TYPE_5__ {TYPE_1__ ata; } ;
struct ata_request {int bytecount; int flags; TYPE_3__* dma; TYPE_2__ u; int parent; } ;
struct ata_pci_controller {int r_res2; int r_res1; } ;
struct ata_dma_prdentry {int count; int addr; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
typedef int caddr_t ;
struct TYPE_6__ {struct ata_dma_prdentry* sg; } ;



 int VAR_0 ;


 int FUNC_0 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ata_request*) ;
 int FUNC_2 (int *,struct ata_request*) ;
 int FUNC_3 (struct ata_pci_controller*,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct ata_request *VAR_11)
{
    device_t VAR_12 = FUNC_4(VAR_11->parent);
    struct ata_pci_controller *VAR_13 = FUNC_5(VAR_12);
    struct ata_channel *VAR_14 = FUNC_5(VAR_11->parent);
    struct ata_dma_prdentry *VAR_15;
    caddr_t VAR_16 = FUNC_7(VAR_13->r_res1);
    u_int32_t *VAR_17;
    int VAR_18, VAR_19, VAR_20 = 0;


    switch (VAR_11->u.ata.command) {

    default:
 return -1;

    case 145:
    case 142:
    case 141:
    case 138:
    case 137:
    case 133:
    case 132:
    case 129:
    case 128:
 FUNC_0(VAR_13->r_res2, 0x000c0400 + ((VAR_14->unit + 1) << 2), 0x00000001);
 return FUNC_1(VAR_11);

    case 136:
    case 144:
    case 143:
    case 134:
    case 135:
 VAR_17 = (u_int32_t *)
     (VAR_16 + (VAR_14->unit * VAR_5) + VAR_1);
 VAR_17[0] = FUNC_6(0x08 | ((VAR_14->unit + 1)<<16) | (0x00 << 24));
 VAR_17[1] = 0;
 VAR_17[2] = 0;
 FUNC_2((u_int8_t *)VAR_17, VAR_11);
 FUNC_0(VAR_13->r_res2, 0x000c0484, 0x00000001);
 FUNC_0(VAR_13->r_res2, 0x000c0400 + ((VAR_14->unit + 1) << 2), 0x00000001);
 FUNC_0(VAR_13->r_res2, 0x000c0240 + (VAR_14->unit << 7),
   FUNC_6((VAR_14->unit * VAR_5)+VAR_1));
 return 0;

    case 140:
    case 139:
    case 131:
    case 130:
 VAR_15 = VAR_11->dma->sg;
 VAR_17 = (u_int32_t *)
     (VAR_16 + (VAR_14->unit * VAR_5) + VAR_7);
 VAR_18 = VAR_19 = 0;
 do {
     VAR_17[VAR_19++] = VAR_15[VAR_18].addr;
     VAR_17[VAR_19++] = VAR_15[VAR_18].count;
     VAR_20 += (VAR_15[VAR_18].count & ~VAR_0);
 } while (!(VAR_15[VAR_18++].count & VAR_0));

 VAR_17 = (u_int32_t *)
     (VAR_16 + (VAR_14->unit * VAR_5) + VAR_8);
 VAR_17[0] = FUNC_6((VAR_14->unit * VAR_4) + VAR_3);
 VAR_17[1] = FUNC_6(VAR_11->bytecount | VAR_0);

 VAR_17 = (u_int32_t *)
     (VAR_16 + (VAR_14->unit * VAR_5) + VAR_2);
 VAR_17[0] = FUNC_6((VAR_14->unit * VAR_4) + VAR_3);
 VAR_17[1] = FUNC_6(VAR_11->bytecount | VAR_0);

 VAR_17 = (u_int32_t *)
     (VAR_16 + (VAR_14->unit * VAR_5) + VAR_6);
 if (VAR_11->flags & VAR_9)
     VAR_17[0] = FUNC_6(0x14 | ((VAR_14->unit+9)<<16) | ((VAR_14->unit+5)<<24));
 if (VAR_11->flags & VAR_10)
     VAR_17[0] = FUNC_6(0x00 | ((VAR_14->unit+13)<<16) | (0x00<<24));
 VAR_17[1] = FUNC_6((VAR_14->unit * VAR_5)+VAR_7);
 VAR_17[2] = FUNC_6((VAR_14->unit * VAR_5)+VAR_8);
 VAR_17[3] = 0;

 VAR_17 = (u_int32_t *)
     (VAR_16 + (VAR_14->unit * VAR_5) + VAR_1);
 if (VAR_11->flags & VAR_9)
     VAR_17[0] = FUNC_6(0x04 | ((VAR_14->unit+5)<<16) | (0x00<<24));
 if (VAR_11->flags & VAR_10)
     VAR_17[0] = FUNC_6(0x10 | ((VAR_14->unit+1)<<16) | ((VAR_14->unit+13)<<24));
 VAR_17[1] = FUNC_6((VAR_14->unit * VAR_5)+VAR_2);
 VAR_17[2] = 0;
 FUNC_2((u_int8_t *)VAR_17, VAR_11);
 FUNC_0(VAR_13->r_res2, 0x000c0484, 0x00000001);

 if (VAR_11->flags & VAR_9) {
     FUNC_0(VAR_13->r_res2, 0x000c0400 + ((VAR_14->unit+5)<<2), 0x00000001);
     FUNC_0(VAR_13->r_res2, 0x000c0400 + ((VAR_14->unit+9)<<2), 0x00000001);
     FUNC_0(VAR_13->r_res2, 0x000c0240 + (VAR_14->unit << 7),
  FUNC_6((VAR_14->unit * VAR_5) + VAR_1));
 }
 if (VAR_11->flags & VAR_10) {
     FUNC_0(VAR_13->r_res2, 0x000c0400 + ((VAR_14->unit+1)<<2), 0x00000001);
     FUNC_0(VAR_13->r_res2, 0x000c0400 + ((VAR_14->unit+13)<<2), 0x00000001);
     FUNC_3(VAR_13,
  FUNC_6((VAR_14->unit * VAR_5) + VAR_6));
 }
 return 0;
    }
}
