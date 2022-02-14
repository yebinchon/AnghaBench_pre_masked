
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int num_io_queues; int * ioq; int adminq; int is_failed; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nvme_controller *VAR_1)
{
 int VAR_2;

 VAR_1->is_failed = VAR_0;
 FUNC_0(&VAR_1->adminq);
 FUNC_3(&VAR_1->adminq);
 if (VAR_1->ioq != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_io_queues; VAR_2++) {
   FUNC_1(&VAR_1->ioq[VAR_2]);
   FUNC_3(&VAR_1->ioq[VAR_2]);
  }
 }
 FUNC_2(VAR_1);
}
