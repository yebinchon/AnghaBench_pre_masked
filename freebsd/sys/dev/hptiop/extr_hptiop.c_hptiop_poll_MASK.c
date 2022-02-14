
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpt_iop_hba {TYPE_1__* ops; } ;
struct cam_sim {int dummy; } ;
struct TYPE_2__ {int (* iop_intr ) (struct hpt_iop_hba*) ;} ;


 struct hpt_iop_hba* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (struct hpt_iop_hba*) ;

__attribute__((used)) static void FUNC_2(struct cam_sim *VAR_0)
{
 struct hpt_iop_hba *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->ops->iop_intr(VAR_1);
}
