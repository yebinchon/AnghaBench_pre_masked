
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvme_controller* ich_arg; int ich_func; } ;
struct nvme_controller {TYPE_1__ config_hook; } ;
typedef int device_t ;


 struct nvme_controller* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nvme_controller*,int ) ;
 int FUNC_3 (struct nvme_controller*,int ) ;
 int FUNC_4 (struct nvme_controller*) ;
 int VAR_0 ;

int
FUNC_5(device_t VAR_1)
{
 struct nvme_controller *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);

 if (VAR_3 != 0) {
  FUNC_3(VAR_2, VAR_1);
  return (VAR_3);
 }







 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 != 0) {
  FUNC_3(VAR_2, VAR_1);
  return (VAR_3);
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 != 0) {
  FUNC_3(VAR_2, VAR_1);
  return (VAR_3);
 }

 VAR_2->config_hook.ich_func = VAR_0;
 VAR_2->config_hook.ich_arg = VAR_2;

 FUNC_1(&VAR_2->config_hook);

 return (0);
}
