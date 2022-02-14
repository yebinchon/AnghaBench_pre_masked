
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_namespace {TYPE_2__* ctrlr; } ;
struct TYPE_3__ {scalar_t__ sn; } ;
struct TYPE_4__ {TYPE_1__ cdata; } ;



const char *
FUNC_0(struct nvme_namespace *VAR_0)
{
 return ((const char *)VAR_0->ctrlr->cdata.sn);
}
