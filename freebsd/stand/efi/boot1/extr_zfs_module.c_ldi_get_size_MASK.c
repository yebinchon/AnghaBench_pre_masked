
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {TYPE_2__* dev; } ;
typedef TYPE_3__ dev_info_t ;
struct TYPE_5__ {TYPE_1__* Media; } ;
struct TYPE_4__ {int BlockSize; int LastBlock; } ;



uint64_t
FUNC_0(void *VAR_0)
{
 dev_info_t *VAR_1 = VAR_0;

 return (VAR_1->dev->Media->BlockSize *
     (VAR_1->dev->Media->LastBlock + 1));
}
