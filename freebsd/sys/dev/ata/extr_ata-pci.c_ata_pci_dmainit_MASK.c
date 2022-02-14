
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; int stop; int start; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ata_channel* FUNC_1 (int ) ;

void
FUNC_2(device_t VAR_3)
{
    struct ata_channel *VAR_4 = FUNC_1(VAR_3);

    FUNC_0(VAR_3);
    VAR_4->dma.start = VAR_1;
    VAR_4->dma.stop = VAR_2;
    VAR_4->dma.reset = VAR_0;
}
