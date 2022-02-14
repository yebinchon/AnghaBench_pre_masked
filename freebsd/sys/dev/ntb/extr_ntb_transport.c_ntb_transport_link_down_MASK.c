
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_transport_qp {int client_ready; int link_work; scalar_t__ link_is_up; int dev; struct ntb_transport_ctx* transport; } ;
struct ntb_transport_ctx {int qp_count; TYPE_1__* qp_vec; } ;
struct TYPE_2__ {scalar_t__ client_ready; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ntb_transport_qp*) ;

void
FUNC_3(struct ntb_transport_qp *VAR_1)
{
 struct ntb_transport_ctx *VAR_2 = VAR_1->transport;
 int VAR_3;
 uint32_t VAR_4;

 VAR_1->client_ready = 0;
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2->qp_count; VAR_3++) {
  if (VAR_2->qp_vec[VAR_3].client_ready)
   VAR_4 |= (1 << VAR_3);
 }
 FUNC_1(VAR_1->dev, VAR_0, VAR_4);

 if (VAR_1->link_is_up)
  FUNC_2(VAR_1);
 else
  FUNC_0(&VAR_1->link_work);
}
