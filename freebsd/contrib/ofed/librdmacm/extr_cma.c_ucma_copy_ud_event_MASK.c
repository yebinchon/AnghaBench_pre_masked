
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucma_abi_ud_param {int qkey; int qp_num; int ah_attr; scalar_t__ private_data_len; int private_data; } ;
struct rdma_ud_param {int qkey; int qp_num; int ah_attr; int * private_data; scalar_t__ private_data_len; } ;
struct TYPE_4__ {struct rdma_ud_param ud; } ;
struct TYPE_3__ {TYPE_2__ param; } ;
struct cma_event {int private_data; TYPE_1__ event; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cma_event *VAR_0,
          struct ucma_abi_ud_param *VAR_1)
{
 struct rdma_ud_param *VAR_2 = &VAR_0->event.param.ud;

 VAR_2->private_data_len = VAR_1->private_data_len;
 if (VAR_1->private_data_len) {
  VAR_2->private_data = &VAR_0->private_data;
  FUNC_1(&VAR_0->private_data, VAR_1->private_data,
         VAR_1->private_data_len);
 }

 FUNC_0(&VAR_2->ah_attr, &VAR_1->ah_attr);
 VAR_2->qp_num = VAR_1->qp_num;
 VAR_2->qkey = VAR_1->qkey;
}
