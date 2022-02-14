
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_rdma_op {scalar_t__ op_mapped; scalar_t__ op_write; int op_nents; int op_sg; } ;
struct rds_iw_connection {TYPE_1__* i_cm_id; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rds_iw_connection *VAR_2,
       struct rm_rdma_op *VAR_3)
{
 if (VAR_3->op_mapped) {
  FUNC_0(VAR_2->i_cm_id->device,
   VAR_3->op_sg, VAR_3->op_nents,
   VAR_3->op_write ? VAR_1 : VAR_0);
  VAR_3->op_mapped = 0;
 }
}
