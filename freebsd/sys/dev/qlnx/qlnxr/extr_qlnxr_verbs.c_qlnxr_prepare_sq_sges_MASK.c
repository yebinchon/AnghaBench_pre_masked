
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rdma_sq_sge {void* length; void* l_key; } ;
struct TYPE_3__ {int pbl; } ;
struct qlnxr_qp {TYPE_1__ sq; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_send_wr {int num_sge; TYPE_2__* sg_list; } ;
typedef int qlnx_host_t ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ lkey; int addr; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rdma_sq_sge*,int ,int ) ;
 int VAR_0 ;
 void* FUNC_2 (scalar_t__) ;
 struct rdma_sq_sge* FUNC_3 (int *) ;

__attribute__((used)) static u32
FUNC_4(struct qlnxr_dev *VAR_1, struct qlnxr_qp *VAR_2,
 u8 *VAR_3, struct ib_send_wr *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;
 qlnx_host_t *VAR_7;

 VAR_7 = VAR_1->ha;

 FUNC_0(VAR_7, "enter wr->num_sge = %d \n", VAR_4->num_sge);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_sge; VAR_5++) {
  struct rdma_sq_sge *VAR_8 = FUNC_3(&VAR_2->sq.pbl);

  FUNC_1(VAR_8, VAR_0, VAR_4->sg_list[VAR_5].addr);
  VAR_8->l_key = FUNC_2(VAR_4->sg_list[VAR_5].lkey);
  VAR_8->length = FUNC_2(VAR_4->sg_list[VAR_5].length);
  VAR_6 += VAR_4->sg_list[VAR_5].length;
 }

 if (VAR_3)
  *VAR_3 += VAR_4->num_sge;

 FUNC_0(VAR_7, "exit data_size = %d\n", VAR_6);
 return VAR_6;
}
