
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ibv_port_attr {int lmc; } ;
struct ds_dest {TYPE_2__* qp; } ;
struct TYPE_4__ {TYPE_1__* cm_id; } ;
struct TYPE_3__ {int port_num; int verbs; } ;


 int FUNC_0 (int ,int ,struct ibv_port_attr*) ;

__attribute__((used)) static uint8_t FUNC_1(struct ds_dest *VAR_0)
{
 struct ibv_port_attr VAR_1;

 if (!FUNC_0(VAR_0->qp->cm_id->verbs, VAR_0->qp->cm_id->port_num, &VAR_1))
  return (uint8_t) ((1 << VAR_1.lmc) - 1);
 return 0x7f;
}
