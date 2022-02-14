
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct hpt_iop_hba {scalar_t__ msg_done; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* iop_intr ) (struct hpt_iop_hba*) ;int (* post_msg ) (struct hpt_iop_hba*,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hpt_iop_hba*,scalar_t__) ;
 int FUNC_2 (struct hpt_iop_hba*) ;

__attribute__((used)) static int FUNC_3(struct hpt_iop_hba *VAR_0,
     u_int32_t VAR_1, u_int32_t VAR_2)
{
 u_int32_t VAR_3;

 VAR_0->msg_done = 0;
 VAR_0->ops->post_msg(VAR_0, VAR_1);

 for (VAR_3=0; VAR_3<VAR_2; VAR_3++) {
  VAR_0->ops->iop_intr(VAR_0);
  if (VAR_0->msg_done)
   break;
  FUNC_0(1000);
 }

 return VAR_0->msg_done? 0 : -1;
}
