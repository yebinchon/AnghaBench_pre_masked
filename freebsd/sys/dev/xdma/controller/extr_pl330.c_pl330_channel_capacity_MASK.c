
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chan; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef int uint32_t ;
struct pl330_channel {int capacity; } ;
typedef int device_t ;



__attribute__((used)) static int
FUNC_0(device_t VAR_0, xdma_channel_t *VAR_1,
    uint32_t *VAR_2)
{
 struct pl330_channel *VAR_3;

 VAR_3 = (struct pl330_channel *)VAR_1->chan;

 *VAR_2 = VAR_3->capacity;

 return (0);
}
