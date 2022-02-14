
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int is_resetting; } ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nvme_controller*) ;
 int FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (struct nvme_controller*,int) ;
 int FUNC_4 (struct nvme_controller*,char*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, int VAR_2)
{
 struct nvme_controller *VAR_3 = VAR_1;
 int VAR_4;

 FUNC_4(VAR_3, "resetting controller\n");
 VAR_4 = FUNC_2(VAR_3);
 FUNC_5("nvmereset", VAR_0 / 10);
 if (VAR_4 == 0)
  FUNC_3(VAR_3, 1);
 else
  FUNC_1(VAR_3);

 FUNC_0(&VAR_3->is_resetting, 1, 0);
}
