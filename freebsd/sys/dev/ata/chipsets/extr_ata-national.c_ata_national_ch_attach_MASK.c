
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alignment; int max_iosize; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct ata_channel *VAR_2 = FUNC_1(VAR_1);

 VAR_2->dma.alignment = 16;
 VAR_2->dma.max_iosize = 64 * VAR_0;
 return (FUNC_0(VAR_1));
}
