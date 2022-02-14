
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chan; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef scalar_t__ uint32_t ;
struct axidma_channel {scalar_t__ descs_used_count; scalar_t__ descs_num; } ;
typedef int device_t ;



__attribute__((used)) static int
FUNC_0(device_t VAR_0, xdma_channel_t *VAR_1,
    uint32_t *VAR_2)
{
 struct axidma_channel *VAR_3;
 uint32_t VAR_4;

 VAR_3 = (struct axidma_channel *)VAR_1->chan;


 VAR_4 = (VAR_3->descs_num - VAR_3->descs_used_count - 1);

 *VAR_2 = VAR_4;

 return (0);
}
