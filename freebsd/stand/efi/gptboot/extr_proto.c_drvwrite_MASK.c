
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct dsk {scalar_t__ devinfo; } ;
struct TYPE_7__ {TYPE_3__* dev; } ;
typedef TYPE_2__ dev_info_t ;
typedef unsigned int daddr_t ;
struct TYPE_8__ {scalar_t__ (* WriteBlocks ) (TYPE_3__*,int ,unsigned int,int,void*) ;TYPE_1__* Media; } ;
struct TYPE_6__ {unsigned int BlockSize; int MediaId; scalar_t__ ReadOnly; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_3__ EFI_BLOCK_IO ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*,int ,int ,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,unsigned int,int,void*) ;

int
FUNC_3(struct dsk *VAR_2, void *VAR_3, daddr_t VAR_4, unsigned VAR_5)
{
 int VAR_6;
 EFI_STATUS VAR_7;
 dev_info_t *VAR_8 = (dev_info_t *)VAR_2->devinfo;
 EFI_BLOCK_IO *VAR_9 = VAR_8->dev;

 if (VAR_9->Media->ReadOnly)
  return -1;

 VAR_4 = VAR_4 / (VAR_9->Media->BlockSize / VAR_0);
 VAR_6 = VAR_5 * VAR_0;

 VAR_7 = VAR_9->WriteBlocks(VAR_9, VAR_9->Media->MediaId, VAR_4, VAR_6, VAR_3);
 if (VAR_7 != VAR_1) {
  FUNC_0("dskread: failed dev: %p, id: %u, lba: %ju, size: %d, "
      "status: %lu\n", VAR_8->dev,
      VAR_9->Media->MediaId, (uintmax_t)VAR_4, VAR_6,
      FUNC_1(VAR_7));
  return (-1);
 }

 return (0);
}
