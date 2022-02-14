
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ibv_qp_attr {scalar_t__ qp_access_flags; int qp_state; int port_num; int pkey_index; } ;
struct ibv_qp {int dummy; } ;
struct TYPE_9__ {int pkey; } ;
struct TYPE_8__ {TYPE_4__ ibaddr; } ;
struct TYPE_10__ {TYPE_3__ addr; } ;
struct TYPE_6__ {TYPE_5__ addr; } ;
struct TYPE_7__ {int port_num; TYPE_1__ route; } ;
struct cma_id_private {TYPE_2__ id; int cma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ibv_qp*,struct ibv_qp_attr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cma_id_private *VAR_5, struct ibv_qp *VAR_6)
{
 struct ibv_qp_attr VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->cma_dev, VAR_5->id.port_num,
        VAR_5->id.route.addr.addr.ibaddr.pkey,
        &VAR_7.pkey_index);
 if (VAR_8)
  return VAR_8;

 VAR_7.port_num = VAR_5->id.port_num;
 VAR_7.qp_state = VAR_0;
 VAR_7.qp_access_flags = 0;

 VAR_8 = FUNC_0(VAR_6, &VAR_7, VAR_4 | VAR_1 |
       VAR_2 | VAR_3);
 return FUNC_1(VAR_8);
}
