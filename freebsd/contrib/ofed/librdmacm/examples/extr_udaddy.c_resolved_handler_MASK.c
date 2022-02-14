
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ah_attr; int qkey; int qp_num; } ;
struct TYPE_5__ {TYPE_1__ ud; } ;
struct rdma_cm_event {TYPE_2__ param; } ;
struct cmatest_node {int connected; int ah; int pd; int remote_qkey; int remote_qpn; } ;
struct TYPE_6__ {int connects_left; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct cmatest_node *VAR_1,
       struct rdma_cm_event *VAR_2)
{
 VAR_1->remote_qpn = VAR_2->param.ud.qp_num;
 VAR_1->remote_qkey = VAR_2->param.ud.qkey;
 VAR_1->ah = FUNC_1(VAR_1->pd, &VAR_2->param.ud.ah_attr);
 if (!VAR_1->ah) {
  FUNC_2("udaddy: failure creating address handle\n");
  goto err;
 }

 VAR_1->connected = 1;
 VAR_0.connects_left--;
 return 0;
err:
 FUNC_0();
 return -1;
}
