
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct qlnxr_qp {size_t sgid_idx; } ;
struct qlnxr_dev {TYPE_1__* sgid_tbl; int * ha; } ;
struct TYPE_8__ {int * raw; } ;
struct TYPE_9__ {TYPE_2__ dgid; } ;
struct TYPE_10__ {TYPE_3__ grh; } ;
struct ib_qp_attr {TYPE_4__ ah_attr; } ;
struct ib_qp {int dummy; } ;
struct TYPE_12__ {void** dwords; int * bytes; } ;
struct TYPE_11__ {void** dwords; int * bytes; } ;
struct ecore_rdma_modify_qp_in_params {TYPE_6__ dgid; TYPE_5__ sgid; int vlan_id; } ;
typedef int qlnx_host_t ;
struct TYPE_7__ {int * raw; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int *,struct ib_qp_attr*,int,int *) ;

__attribute__((used)) static inline void
FUNC_4(struct ib_qp *VAR_0, struct ib_qp_attr *VAR_1,
 int VAR_2,
 struct qlnxr_dev *VAR_3,
 struct qlnxr_qp *VAR_4,
 struct ecore_rdma_modify_qp_in_params *VAR_5)
{
 int VAR_6;
 qlnx_host_t *VAR_7;

 VAR_7 = VAR_3->ha;

 FUNC_0(VAR_7, "enter\n");

 FUNC_1(&VAR_5->sgid.bytes[0],
        &VAR_3->sgid_tbl[VAR_4->sgid_idx].raw[0],
        sizeof(VAR_5->sgid.bytes));
 FUNC_1(&VAR_5->dgid.bytes[0],
        &VAR_1->ah_attr.grh.dgid.raw[0],
        sizeof(VAR_5->dgid));

 FUNC_3(VAR_7, VAR_1, VAR_2, &VAR_5->vlan_id);

 for (VAR_6 = 0; VAR_6 < (sizeof(VAR_5->sgid.dwords)/sizeof(uint32_t)); VAR_6++) {
  VAR_5->sgid.dwords[VAR_6] = FUNC_2(VAR_5->sgid.dwords[VAR_6]);
  VAR_5->dgid.dwords[VAR_6] = FUNC_2(VAR_5->dgid.dwords[VAR_6]);
 }

 FUNC_0(VAR_7, "exit\n");
 return;
}
