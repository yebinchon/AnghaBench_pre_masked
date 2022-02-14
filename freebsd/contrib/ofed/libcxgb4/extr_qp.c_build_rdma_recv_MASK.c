
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isgl; } ;
union t4_recv_wr {TYPE_1__ recv; } ;
typedef int u8 ;
struct ibv_recv_wr {int num_sge; int sg_list; } ;
struct fw_ri_sge {int dummy; } ;
struct c4iw_qp {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct c4iw_qp *VAR_0, union t4_recv_wr *VAR_1,
      struct ibv_recv_wr *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_1->recv.isgl, VAR_2->sg_list, VAR_2->num_sge, ((void*)0));
 if (VAR_4)
  return VAR_4;
 *VAR_3 = FUNC_0(sizeof VAR_1->recv +
         VAR_2->num_sge * sizeof(struct fw_ri_sge), 16);
 return 0;
}
