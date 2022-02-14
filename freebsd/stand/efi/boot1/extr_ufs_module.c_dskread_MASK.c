
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
struct TYPE_7__ {TYPE_2__* dev; scalar_t__ partoff; } ;
struct TYPE_6__ {scalar_t__ (* ReadBlocks ) (TYPE_2__*,int ,int,int,void*) ;TYPE_1__* Media; } ;
struct TYPE_5__ {int BlockSize; int MediaId; } ;
typedef scalar_t__ EFI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int,int,void*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, uint64_t VAR_4, int VAR_5)
{
 int VAR_6;
 EFI_STATUS VAR_7;

 VAR_4 += VAR_2->partoff;
 VAR_4 = VAR_4 / (VAR_2->dev->Media->BlockSize / VAR_0);
 VAR_6 = VAR_5 * VAR_0;

 VAR_7 = VAR_2->dev->ReadBlocks(VAR_2->dev,
     VAR_2->dev->Media->MediaId, VAR_4, VAR_6, VAR_3);

 if (VAR_7 != VAR_1) {
  FUNC_0("dskread: failed dev: %p, id: %u, lba: %ju, size: %d, "
      "status: %lu\n", VAR_2->dev,
      VAR_2->dev->Media->MediaId, (uintmax_t)VAR_4, VAR_6,
      FUNC_1(VAR_7));
  return (-1);
 }

 return (0);
}
