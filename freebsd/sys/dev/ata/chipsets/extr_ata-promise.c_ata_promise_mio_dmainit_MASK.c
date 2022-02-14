
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_iosize; int setprd; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1)
{
    struct ata_channel *VAR_2 = FUNC_1(VAR_1);


    VAR_2->dma.setprd = VAR_0;
    VAR_2->dma.max_iosize = 65536;
    FUNC_0(VAR_1);
}
