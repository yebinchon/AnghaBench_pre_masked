
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct ibv_port_attr {int link_layer; } ;
struct ibv_device_attr {int phys_port_cnt; scalar_t__ max_qp_rd_atom; scalar_t__ max_qp_init_rd_atom; int max_qp_wr; } ;
struct cma_device {int port_cnt; int * verbs; void* max_responder_resources; void* max_initiator_depth; int max_qpsize; TYPE_1__* port; int guid; } ;
struct TYPE_2__ {int link_layer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ibv_device_attr*) ;
 scalar_t__ FUNC_3 (int *,int,struct ibv_port_attr*) ;
 TYPE_1__* FUNC_4 (int) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct cma_device *VAR_4)
{
 struct ibv_port_attr VAR_5;
 struct ibv_device_attr VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4->verbs)
  return 0;

 VAR_4->verbs = FUNC_5(VAR_4->guid);
 if (!VAR_4->verbs)
  return FUNC_0(VAR_0);

 VAR_8 = FUNC_2(VAR_4->verbs, &VAR_6);
 if (VAR_8) {
  VAR_8 = FUNC_0(VAR_8);
  goto err;
 }

 VAR_4->port = FUNC_4(sizeof(*VAR_4->port) * VAR_6.phys_port_cnt);
 if (!VAR_4->port) {
  VAR_8 = FUNC_0(VAR_1);
  goto err;
 }

 for (VAR_7 = 1; VAR_7 <= VAR_6.phys_port_cnt; VAR_7++) {
  if (FUNC_3(VAR_4->verbs, VAR_7, &VAR_5))
   VAR_4->port[VAR_7 - 1].link_layer = VAR_2;
  else
   VAR_4->port[VAR_7 - 1].link_layer = VAR_5.link_layer;
 }

 VAR_4->port_cnt = VAR_6.phys_port_cnt;
 VAR_4->max_qpsize = VAR_6.max_qp_wr;
 VAR_4->max_initiator_depth = (uint8_t) VAR_6.max_qp_init_rd_atom;
 VAR_4->max_responder_resources = (uint8_t) VAR_6.max_qp_rd_atom;
 VAR_3++;
 return 0;

err:
 FUNC_1(VAR_4->verbs);
 VAR_4->verbs = ((void*)0);
 return VAR_8;
}
