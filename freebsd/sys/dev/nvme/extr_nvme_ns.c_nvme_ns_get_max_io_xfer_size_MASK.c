
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nvme_namespace {TYPE_1__* ctrlr; } ;
struct TYPE_2__ {int max_xfer_size; } ;



uint32_t
FUNC_0(struct nvme_namespace *VAR_0)
{
 return VAR_0->ctrlr->max_xfer_size;
}
