
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int dummy; } ;
struct TYPE_2__ {int (* unload ) (struct ata_request*) ;int flags; } ;
struct ata_channel {TYPE_1__ dma; struct ata_request* running; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ata_request*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_6)
{
    struct ata_channel *VAR_7 = FUNC_2(VAR_6);
    struct ata_request *VAR_8;

    FUNC_1(VAR_7, VAR_0,
   FUNC_0(VAR_7, VAR_0) & ~VAR_1);
    VAR_7->dma.flags &= ~VAR_5;
    FUNC_1(VAR_7, VAR_4, VAR_3 | VAR_2);
    if ((VAR_8 = VAR_7->running)) {
 FUNC_3(VAR_6, "DMA reset calling unload\n");
 VAR_7->dma.unload(VAR_8);
    }
}
