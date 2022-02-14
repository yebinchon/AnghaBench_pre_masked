
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * umem; } ;
struct TYPE_3__ {int * umem; } ;
struct qlnxr_qp {TYPE_2__ urq; TYPE_1__ usq; } ;
struct qlnxr_dev {int * ha; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct qlnxr_dev *VAR_0, struct qlnxr_qp *VAR_1)
{
 qlnx_host_t *VAR_2;

 VAR_2 = VAR_0->ha;

 FUNC_0(VAR_2, "enter\n");

 if (VAR_1->usq.umem)
  FUNC_1(VAR_1->usq.umem);

 VAR_1->usq.umem = ((void*)0);

 if (VAR_1->urq.umem)
  FUNC_1(VAR_1->urq.umem);

 VAR_1->urq.umem = ((void*)0);

 FUNC_0(VAR_2, "exit\n");
 return;
}
