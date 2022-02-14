
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_mem_reg {int * mem_h; } ;
struct icl_iser_pdu {TYPE_1__* iser_conn; struct iser_mem_reg* rdma_reg; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
struct TYPE_2__ {int ib_conn; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct icl_iser_pdu *VAR_0,
      enum iser_data_dir VAR_1)
{
 struct iser_mem_reg *VAR_2 = &VAR_0->rdma_reg[VAR_1];

 if (!VAR_2->mem_h)
  return;

 FUNC_0(&VAR_0->iser_conn->ib_conn,
     VAR_2->mem_h);
 VAR_2->mem_h = ((void*)0);
}
