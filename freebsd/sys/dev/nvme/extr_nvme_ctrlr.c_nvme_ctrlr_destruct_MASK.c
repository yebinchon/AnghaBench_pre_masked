
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int num_io_queues; int lock; int * resource; int resource_id; int * bar4_resource; int bar4_resource_id; int * res; int dev; scalar_t__ tag; scalar_t__ taskqueue; int adminq; int * ioq; scalar_t__ is_initialized; scalar_t__ cdev; int * ns; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nvme_controller*) ;
 int FUNC_7 (struct nvme_controller*) ;
 int FUNC_8 (struct nvme_controller*) ;
 int FUNC_9 (struct nvme_controller*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nvme_controller*,int ) ;
 int FUNC_12 (struct nvme_controller*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;

void
FUNC_16(struct nvme_controller *VAR_5, device_t VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_5->resource == ((void*)0))
  goto nores;





 VAR_7 = (FUNC_11(VAR_5, VAR_4) == 0xffffffff);
 if (VAR_7)
  FUNC_8(VAR_5);
 else
  FUNC_12(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_13(&VAR_5->ns[VAR_8]);

 if (VAR_5->cdev)
  FUNC_2(VAR_5->cdev);

 if (VAR_5->is_initialized) {
  if (!VAR_7)
   FUNC_6(VAR_5);
  for (VAR_8 = 0; VAR_8 < VAR_5->num_io_queues; VAR_8++)
   FUNC_10(&VAR_5->ioq[VAR_8]);
  FUNC_3(VAR_5->ioq, VAR_0);
  FUNC_5(&VAR_5->adminq);
 }
 if (!VAR_7)
  FUNC_9(VAR_5);

 if (!VAR_7)
  FUNC_7(VAR_5);

 if (VAR_5->taskqueue)
  FUNC_15(VAR_5->taskqueue);

 if (VAR_5->tag)
  FUNC_1(VAR_5->dev, VAR_5->res, VAR_5->tag);

 if (VAR_5->res)
  FUNC_0(VAR_5->dev, VAR_2,
      FUNC_14(VAR_5->res), VAR_5->res);

 if (VAR_5->bar4_resource != ((void*)0)) {
  FUNC_0(VAR_6, VAR_3,
      VAR_5->bar4_resource_id, VAR_5->bar4_resource);
 }

 FUNC_0(VAR_6, VAR_3,
     VAR_5->resource_id, VAR_5->resource);

nores:
 FUNC_4(&VAR_5->lock);
}
