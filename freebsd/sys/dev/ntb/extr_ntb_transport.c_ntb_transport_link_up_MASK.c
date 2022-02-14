
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int client_ready; int link_work; int qp_num; struct ntb_transport_ctx* transport; } ;
struct ntb_transport_ctx {scalar_t__ link_is_up; } ;


 int FUNC_0 (int *,int ,int ,struct ntb_transport_qp*) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct ntb_transport_qp *VAR_1)
{
 struct ntb_transport_ctx *VAR_2 = VAR_1->transport;

 VAR_1->client_ready = 1;

 FUNC_1(2, "qp %d client ready\n", VAR_1->qp_num);

 if (VAR_2->link_is_up)
  FUNC_0(&VAR_1->link_work, 0, VAR_0, VAR_1);
}
