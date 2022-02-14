
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpt_iop_hba {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* iop_intr ) (struct hpt_iop_hba*) ;} ;


 int FUNC_0 (struct hpt_iop_hba*) ;
 int FUNC_1 (struct hpt_iop_hba*) ;
 int FUNC_2 (struct hpt_iop_hba*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct hpt_iop_hba * VAR_1 = (struct hpt_iop_hba *)VAR_0;
 FUNC_0(VAR_1);
 VAR_1->ops->iop_intr(VAR_1);
 FUNC_1(VAR_1);
}
