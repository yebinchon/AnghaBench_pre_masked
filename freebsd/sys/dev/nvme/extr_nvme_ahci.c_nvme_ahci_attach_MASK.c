
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_registers {int dummy; } ;
struct nvme_controller {int num_io_queues; int * res; int dev; int * resource; scalar_t__ resource_id; void* tag; scalar_t__ msix_enabled; scalar_t__ rid; scalar_t__ bus_handle; struct nvme_registers* regs; int bus_tag; } ;
typedef int device_t ;


 struct nvme_controller* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,int ,scalar_t__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,int ,struct nvme_controller*,void**) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (struct nvme_controller*,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8)
{
 struct nvme_controller*VAR_9 = FUNC_0(VAR_8);
 int VAR_10;


 VAR_9->resource_id = 0;

 VAR_9->resource = FUNC_1(VAR_8, VAR_6,
     &VAR_9->resource_id, VAR_3);

 if(VAR_9->resource == ((void*)0)) {
  FUNC_5(VAR_9, "unable to allocate mem resource\n");
  VAR_10 = VAR_0;
  goto bad;
 }
 VAR_9->bus_tag = FUNC_7(VAR_9->resource);
 VAR_9->bus_handle = FUNC_6(VAR_9->resource);
 VAR_9->regs = (struct nvme_registers *)VAR_9->bus_handle;


 VAR_9->rid = 0;
 VAR_9->res = FUNC_1(VAR_8, VAR_5,
     &VAR_9->rid, VAR_4 | VAR_3);

 if (VAR_9->res == ((void*)0)) {
  FUNC_5(VAR_9, "unable to allocate shared IRQ\n");
  VAR_10 = VAR_0;
  goto bad;
 }

 VAR_9->msix_enabled = 0;
 VAR_9->num_io_queues = 1;
 if (FUNC_3(VAR_8, VAR_9->res,
     VAR_2 | VAR_1, ((void*)0), VAR_7,
     VAR_9, &VAR_9->tag) != 0) {
  FUNC_5(VAR_9, "unable to setup intx handler\n");
  VAR_10 = VAR_0;
  goto bad;
 }
 VAR_9->tag = (void *)0x1;

 return FUNC_4(VAR_8);
bad:
 if (VAR_9->resource != ((void*)0)) {
  FUNC_2(VAR_8, VAR_6,
      VAR_9->resource_id, VAR_9->resource);
 }
 if (VAR_9->res)
  FUNC_2(VAR_9->dev, VAR_5,
      FUNC_8(VAR_9->res), VAR_9->res);
 return (VAR_10);
}
