
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {TYPE_1__ dgid; } ;
struct TYPE_8__ {int dlid; int sl; TYPE_2__ grh; } ;
struct rdma_ud_param {TYPE_4__ ah_attr; int qkey; int qp_num; } ;
struct cmatest_node {int connected; int ah; int pd; int remote_qkey; int remote_qpn; } ;
struct TYPE_7__ {int connects_left; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (char*,...) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct cmatest_node *VAR_2,
   struct rdma_ud_param *VAR_3)
{
 char VAR_4[40];

 FUNC_2(VAR_0, VAR_3->ah_attr.grh.dgid.raw, VAR_4, 40);
 FUNC_3("mckey: joined dgid: %s mlid 0x%x sl %d\n", VAR_4,
  VAR_3->ah_attr.dlid, VAR_3->ah_attr.sl);

 VAR_2->remote_qpn = VAR_3->qp_num;
 VAR_2->remote_qkey = VAR_3->qkey;
 VAR_2->ah = FUNC_1(VAR_2->pd, &VAR_3->ah_attr);
 if (!VAR_2->ah) {
  FUNC_3("mckey: failure creating address handle\n");
  goto err;
 }

 VAR_2->connected = 1;
 VAR_1.connects_left--;
 return 0;
err:
 FUNC_0();
 return -1;
}
