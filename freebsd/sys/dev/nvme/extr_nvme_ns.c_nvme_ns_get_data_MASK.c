
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_namespace_data {int dummy; } ;
struct nvme_namespace {struct nvme_namespace_data const data; } ;



const struct nvme_namespace_data *
FUNC_0(struct nvme_namespace *VAR_0)
{

 return (&VAR_0->data);
}
