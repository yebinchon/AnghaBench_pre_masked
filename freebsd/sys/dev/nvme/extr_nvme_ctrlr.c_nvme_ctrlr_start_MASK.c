
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_controller {int num_io_queues; int * ioq; int adminq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_controller*) ;
 int FUNC_2 (struct nvme_controller*) ;
 scalar_t__ FUNC_3 (struct nvme_controller*) ;
 scalar_t__ FUNC_4 (struct nvme_controller*) ;
 int FUNC_5 (struct nvme_controller*) ;
 scalar_t__ FUNC_6 (struct nvme_controller*) ;
 scalar_t__ FUNC_7 (struct nvme_controller*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int,int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_0, bool VAR_1)
{
 struct nvme_controller *VAR_2 = VAR_0;
 uint32_t VAR_3;
 int VAR_4;
 if (VAR_1)
  FUNC_9(&VAR_2->adminq);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_io_queues; VAR_4++)
  FUNC_9(&VAR_2->ioq[VAR_4]);

 FUNC_0(&VAR_2->adminq);

 if (FUNC_6(VAR_2) != 0) {
  FUNC_5(VAR_2);
  return;
 }
 if (VAR_1) {
  VAR_3 = VAR_2->num_io_queues;
  if (FUNC_7(VAR_2) != 0) {
   FUNC_5(VAR_2);
   return;
  }

  if (VAR_3 != VAR_2->num_io_queues) {
   FUNC_10("num_io_queues changed from %u to %u",
         VAR_3, VAR_2->num_io_queues);
  }
 }

 if (FUNC_4(VAR_2) != 0) {
  FUNC_5(VAR_2);
  return;
 }

 if (FUNC_3(VAR_2) != 0) {
  FUNC_5(VAR_2);
  return;
 }

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_io_queues; VAR_4++)
  FUNC_8(&VAR_2->ioq[VAR_4]);
}
