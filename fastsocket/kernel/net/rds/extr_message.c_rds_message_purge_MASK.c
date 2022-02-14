
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ op_rdma_mr; scalar_t__ op_active; } ;
struct TYPE_5__ {scalar_t__ op_rdma_mr; scalar_t__ op_active; } ;
struct TYPE_4__ {unsigned long op_nents; int * op_sg; } ;
struct rds_message {TYPE_3__ atomic; TYPE_2__ rdma; TYPE_1__ data; int m_flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,void*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct rds_message *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_7(FUNC_6(VAR_0, &VAR_1->m_flags)))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->data.op_nents; VAR_2++) {
  FUNC_4("putting data page %p\n", (void *)FUNC_5(&VAR_1->data.op_sg[VAR_2]));

  FUNC_0(FUNC_5(&VAR_1->data.op_sg[VAR_2]));
 }
 VAR_1->data.op_nents = 0;

 if (VAR_1->rdma.op_active)
  FUNC_3(&VAR_1->rdma);
 if (VAR_1->rdma.op_rdma_mr)
  FUNC_2(VAR_1->rdma.op_rdma_mr);

 if (VAR_1->atomic.op_active)
  FUNC_1(&VAR_1->atomic);
 if (VAR_1->atomic.op_rdma_mr)
  FUNC_2(VAR_1->atomic.op_rdma_mr);
}
