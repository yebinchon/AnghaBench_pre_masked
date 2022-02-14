
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller_data {int dummy; } ;
struct nvme_controller {struct nvme_controller_data const cdata; } ;



const struct nvme_controller_data *
FUNC_0(struct nvme_controller *VAR_0)
{

 return (&VAR_0->cdata);
}
