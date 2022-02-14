
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_registers {int dummy; } ;
struct nvme_controller {void* bar4_resource_id; int dev; void* bar4_resource; scalar_t__ bus_handle; struct nvme_registers* regs; int * resource; int bus_tag; void* resource_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,void**,int ) ;
 int FUNC_2 (struct nvme_controller*,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nvme_controller *VAR_3)
{

 VAR_3->resource_id = FUNC_0(0);

 VAR_3->resource = FUNC_1(VAR_3->dev, VAR_2,
     &VAR_3->resource_id, VAR_1);

 if(VAR_3->resource == ((void*)0)) {
  FUNC_2(VAR_3, "unable to allocate pci resource\n");
  return (VAR_0);
 }

 VAR_3->bus_tag = FUNC_4(VAR_3->resource);
 VAR_3->bus_handle = FUNC_3(VAR_3->resource);
 VAR_3->regs = (struct nvme_registers *)VAR_3->bus_handle;
 VAR_3->bar4_resource_id = FUNC_0(4);
 VAR_3->bar4_resource = FUNC_1(VAR_3->dev, VAR_2,
     &VAR_3->bar4_resource_id, VAR_1);

 return (0);
}
