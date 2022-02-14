
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ibv_qp_attr {scalar_t__ sq_psn; int qp_state; int qkey; int port_num; int pkey_index; } ;
struct ibv_qp {int dummy; } ;
struct TYPE_6__ {int pkey; } ;
struct TYPE_7__ {TYPE_1__ ibaddr; } ;
struct TYPE_8__ {TYPE_2__ addr; } ;
struct TYPE_9__ {TYPE_3__ addr; } ;
struct TYPE_10__ {int port_num; TYPE_4__ route; } ;
struct cma_id_private {TYPE_5__ id; int cma_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ibv_qp*,struct ibv_qp_attr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cma_id_private *VAR_9, struct ibv_qp *VAR_10)
{
 struct ibv_qp_attr VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_9->cma_dev, VAR_9->id.port_num,
        VAR_9->id.route.addr.addr.ibaddr.pkey,
        &VAR_11.pkey_index);
 if (VAR_12)
  return VAR_12;

 VAR_11.port_num = VAR_9->id.port_num;
 VAR_11.qp_state = VAR_0;
 VAR_11.qkey = VAR_8;

 VAR_12 = FUNC_1(VAR_10, &VAR_11, VAR_7 | VAR_5 |
       VAR_3 | VAR_4);
 if (VAR_12)
  return FUNC_0(VAR_12);

 VAR_11.qp_state = VAR_1;
 VAR_12 = FUNC_1(VAR_10, &VAR_11, VAR_7);
 if (VAR_12)
  return FUNC_0(VAR_12);

 VAR_11.qp_state = VAR_2;
 VAR_11.sq_psn = 0;
 VAR_12 = FUNC_1(VAR_10, &VAR_11, VAR_7 | VAR_6);
 return FUNC_2(VAR_12);
}
