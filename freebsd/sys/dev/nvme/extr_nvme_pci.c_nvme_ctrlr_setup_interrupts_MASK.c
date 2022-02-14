
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int msix_enabled; int num_io_queues; int dev; } ;
typedef int device_t ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (struct nvme_controller*) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct nvme_controller *VAR_3)
{
 device_t VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_4 = VAR_3->dev;

 VAR_5 = 0;
 FUNC_0("hw.nvme.force_intx", &VAR_5);
 if (VAR_5 || FUNC_5(VAR_4) < 2) {
  FUNC_3(VAR_3);
  return;
 }

 VAR_6 = VAR_0;
 FUNC_0("hw.nvme.num_io_queues", &VAR_6);
 if (VAR_6 < 1 || VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_7 = 1;
 FUNC_0("hw.nvme.per_cpu_io_queues", &VAR_7);
 if (VAR_7 == 0)
  VAR_6 = 1;

 VAR_8 = VAR_1;
 FUNC_0("hw.nvme.min_cpus_per_ioq", &VAR_8);
 if (VAR_8 > 1) {
  VAR_6 = FUNC_2(VAR_6,
      FUNC_1(1, VAR_0 / VAR_8));
 }

 VAR_6 = FUNC_2(VAR_6, FUNC_5(VAR_4) - 1);

again:
 if (VAR_6 > VAR_2)
  VAR_6 -= VAR_6 % VAR_2;

 VAR_9 = VAR_6 + 1;
 VAR_10 = VAR_9;
 if (FUNC_4(VAR_4, &VAR_10) != 0) {
  FUNC_3(VAR_3);
  return;
 }
 if (VAR_10 < 2) {
  FUNC_6(VAR_4);
  FUNC_3(VAR_3);
  return;
 }
 if (VAR_10 != VAR_9) {
  FUNC_6(VAR_4);
  VAR_6 = VAR_10 - 1;
  goto again;
 }

 VAR_3->msix_enabled = 1;
 VAR_3->num_io_queues = VAR_6;
}
