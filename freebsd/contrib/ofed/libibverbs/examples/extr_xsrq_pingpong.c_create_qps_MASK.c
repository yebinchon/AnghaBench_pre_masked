
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_send_wr; int max_send_sge; } ;
struct ibv_qp_init_attr_ex {int pd; int comp_mask; TYPE_1__ cap; int send_cq; int qp_type; int xrcd; } ;
struct ibv_qp_attr {int qp_access_flags; int port_num; scalar_t__ pkey_index; void* qp_state; } ;
struct TYPE_4__ {int num_clients; int num_tests; void** send_qp; int ib_port; int context; int pd; int send_cq; void** recv_qp; int xrcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int,...) ;
 void* FUNC_1 (int ,struct ibv_qp_init_attr_ex*) ;
 scalar_t__ FUNC_2 (void*,struct ibv_qp_attr*,int) ;
 int FUNC_3 (struct ibv_qp_init_attr_ex*,int ,int) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct ibv_qp_init_attr_ex VAR_14;
 struct ibv_qp_attr VAR_15;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_11.num_clients; ++VAR_16) {

  FUNC_3(&VAR_14, 0, sizeof VAR_14);
  VAR_14.qp_type = VAR_3;
  VAR_14.comp_mask = VAR_7;
  VAR_14.xrcd = VAR_11.xrcd;

  VAR_11.recv_qp[VAR_16] = FUNC_1(VAR_11.context, &VAR_14);
  if (!VAR_11.recv_qp[VAR_16]) {
   FUNC_0(VAR_13, "Couldn't create recv QP[%d] errno %d\n",
    VAR_16, VAR_12);
   return 1;
  }

  VAR_15.qp_state = VAR_2;
  VAR_15.pkey_index = 0;
  VAR_15.port_num = VAR_11.ib_port;
  VAR_15.qp_access_flags = VAR_1 | VAR_0;

  if (FUNC_2(VAR_11.recv_qp[VAR_16], &VAR_15,
      VAR_10 | VAR_8 |
      VAR_9 | VAR_5)) {
   FUNC_0(VAR_13, "Failed to modify recv QP[%d] to INIT\n", VAR_16);
   return 1;
  }

  FUNC_3(&VAR_14, 0, sizeof VAR_14);
  VAR_14.qp_type = VAR_4;
  VAR_14.send_cq = VAR_11.send_cq;
  VAR_14.cap.max_send_wr = VAR_11.num_clients * VAR_11.num_tests;
  VAR_14.cap.max_send_sge = 1;
  VAR_14.comp_mask = VAR_6;
  VAR_14.pd = VAR_11.pd;

  VAR_11.send_qp[VAR_16] = FUNC_1(VAR_11.context, &VAR_14);
  if (!VAR_11.send_qp[VAR_16]) {
   FUNC_0(VAR_13, "Couldn't create send QP[%d] errno %d\n",
    VAR_16, VAR_12);
   return 1;
  }

  VAR_15.qp_state = VAR_2;
  VAR_15.pkey_index = 0;
  VAR_15.port_num = VAR_11.ib_port;
  VAR_15.qp_access_flags = 0;

  if (FUNC_2(VAR_11.send_qp[VAR_16], &VAR_15,
      VAR_10 | VAR_8 |
      VAR_9 | VAR_5)) {
   FUNC_0(VAR_13, "Failed to modify send QP[%d] to INIT\n", VAR_16);
   return 1;
  }
 }

 return 0;
}
