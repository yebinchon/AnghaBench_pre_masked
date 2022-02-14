
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_qp_attr {int dummy; } ;
struct ibv_qp {TYPE_1__* context; } ;
struct ibv_modify_qp {int base; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_modify_qp*,size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ibv_qp*,struct ibv_qp_attr*,int,int *) ;
 int VAR_3 ;
 size_t FUNC_2 (int ,struct ibv_modify_qp*,size_t) ;

int FUNC_3(struct ibv_qp *VAR_4, struct ibv_qp_attr *VAR_5,
        int VAR_6,
        struct ibv_modify_qp *VAR_7, size_t VAR_8)
{




 if (VAR_6 & ~((VAR_1 << 1) - 1))
  return VAR_0;

 FUNC_0(VAR_7, VAR_8, VAR_2);

 FUNC_1(VAR_4, VAR_5, VAR_6, &VAR_7->base);

 if (FUNC_2(VAR_4->context->cmd_fd, VAR_7, VAR_8) != VAR_8)
  return VAR_3;

 return 0;
}
