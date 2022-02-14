
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct qlnxr_qp_hwq_info {TYPE_2__ db_data; scalar_t__ wqe_cons; scalar_t__ cons; scalar_t__ prod; int pbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct qlnxr_qp_hwq_info *VAR_0)
{
 FUNC_1(&VAR_0->pbl);
 VAR_0->prod = VAR_0->cons = 0;
 VAR_0->wqe_cons = 0;
 VAR_0->db_data.data.value = FUNC_0(0);

 return;
}
