
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct dsk {scalar_t__ devinfo; } ;
struct TYPE_5__ {TYPE_3__* dev; } ;
typedef TYPE_2__ dev_info_t ;
struct TYPE_6__ {TYPE_1__* Media; } ;
struct TYPE_4__ {scalar_t__ LastBlock; } ;
typedef TYPE_3__ EFI_BLOCK_IO ;



uint64_t
FUNC_0(struct dsk *VAR_0)
{
 dev_info_t *VAR_1 = (dev_info_t *)VAR_0->devinfo;
 EFI_BLOCK_IO *VAR_2 = VAR_1->dev;

 return (VAR_2->Media->LastBlock + 1);
}
