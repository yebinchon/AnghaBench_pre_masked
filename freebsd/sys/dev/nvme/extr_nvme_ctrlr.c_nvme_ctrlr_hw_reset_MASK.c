
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvme_controller*) ;
 int FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (struct nvme_controller*) ;

int
FUNC_4(struct nvme_controller *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);

 FUNC_0(100*1000);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != 0)
  return VAR_1;
 return (FUNC_3(VAR_0));
}
