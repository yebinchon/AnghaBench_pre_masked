
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int is_resetting; scalar_t__ is_failed; } ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct nvme_controller*) ;
 scalar_t__ FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (struct nvme_controller*,int) ;
 int FUNC_4 (struct nvme_controller*,char*) ;

int
FUNC_5(struct nvme_controller *VAR_0)
{




 if (VAR_0->is_failed)
  return (0);





 if (FUNC_2(VAR_0) != 0)
  goto fail;
 if (FUNC_2(VAR_0) != 0)
  goto fail;






 FUNC_3(VAR_0, 1);
 FUNC_0(&VAR_0->is_resetting, 1, 0);

 return (0);
fail:





 FUNC_4(VAR_0, "Failed to reset on resume, failing.\n");
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->is_resetting, 1, 0);
 return (0);
}
