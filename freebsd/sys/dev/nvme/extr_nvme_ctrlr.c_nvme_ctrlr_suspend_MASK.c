
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int is_resetting; scalar_t__ is_failed; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (struct nvme_controller*) ;
 int FUNC_4 (struct nvme_controller*) ;
 int FUNC_5 (struct nvme_controller*,char*) ;
 int FUNC_6 (char*,int) ;

int
FUNC_7(struct nvme_controller *VAR_2)
{
 int VAR_3 = VAR_1;




 if (VAR_2->is_failed)
  return (0);
 while (FUNC_1(&VAR_2->is_resetting, 0, 1) == 0 && VAR_3-- > 0)
  FUNC_6("nvmesusp", 1);
 if (VAR_3 <= 0) {
  FUNC_5(VAR_2,
      "Competing reset task didn't finish. Try again later.\n");
  return (VAR_0);
 }
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(100*1000);
 FUNC_4(VAR_2);

 return (0);
}
