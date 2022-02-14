
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnxr_pbl_info {int num_pbls; int pbl_size; } ;
struct qlnxr_pbl {int pa; int va; } ;
struct qlnxr_dev {TYPE_1__* ha; } ;
struct TYPE_3__ {int cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct qlnxr_pbl*) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_0, struct qlnxr_pbl_info *VAR_1,
 struct qlnxr_pbl *VAR_2)
{
 int VAR_3;
 qlnx_host_t *VAR_4;

 VAR_4 = VAR_0->ha;

 FUNC_0(VAR_4, "enter\n");

 for (VAR_3 = 0; VAR_3 < VAR_1->num_pbls; VAR_3++) {
  if (!VAR_2[VAR_3].va)
   continue;
  FUNC_2(&VAR_0->ha->cdev, VAR_2[VAR_3].va, VAR_2[VAR_3].pa,
   VAR_1->pbl_size);
 }
 FUNC_1(VAR_2);

 FUNC_0(VAR_4, "exit\n");
 return;
}
