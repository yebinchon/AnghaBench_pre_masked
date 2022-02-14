
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int dummy; } ;
struct nvme_consumer {int dummy; } ;
typedef int device_t ;


 struct nvme_controller* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int **,int*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct nvme_consumer*,struct nvme_controller*) ;

__attribute__((used)) static void
FUNC_4(struct nvme_consumer *VAR_2)
{
 device_t *VAR_3;
 struct nvme_controller *VAR_4;
 int VAR_5, VAR_6;

 if (FUNC_1(VAR_1, &VAR_3, &VAR_6))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3[VAR_5]);
  FUNC_3(VAR_2, VAR_4);
 }

 FUNC_2(VAR_3, VAR_0);
}
