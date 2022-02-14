
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int num_io_queues; int * tag; int * res; int dev; scalar_t__ rid; scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct nvme_controller*,int **) ;
 int VAR_6 ;
 int FUNC_2 (struct nvme_controller*,char*) ;

__attribute__((used)) static int
FUNC_3(struct nvme_controller *VAR_7)
{

 VAR_7->msix_enabled = 0;
 VAR_7->num_io_queues = 1;
 VAR_7->rid = 0;
 VAR_7->res = FUNC_0(VAR_7->dev, VAR_5,
     &VAR_7->rid, VAR_4 | VAR_3);

 if (VAR_7->res == ((void*)0)) {
  FUNC_2(VAR_7, "unable to allocate shared IRQ\n");
  return (VAR_0);
 }

 FUNC_1(VAR_7->dev, VAR_7->res,
     VAR_2 | VAR_1, ((void*)0), VAR_6,
     VAR_7, &VAR_7->tag);

 if (VAR_7->tag == ((void*)0)) {
  FUNC_2(VAR_7, "unable to setup intx handler\n");
  return (VAR_0);
 }

 return (0);
}
