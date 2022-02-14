
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_qp {int icid; } ;
struct ecore_rdma_destroy_qp_out_params {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,void*,struct ecore_rdma_qp*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (int ,struct ecore_rdma_qp*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_rdma_qp*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_rdma_qp*,struct ecore_rdma_destroy_qp_out_params*) ;

enum _ecore_status_t FUNC_6(void *VAR_3,
        struct ecore_rdma_qp *VAR_4,
        struct ecore_rdma_destroy_qp_out_params *VAR_5)
{
 struct ecore_hwfn *VAR_6 = (struct ecore_hwfn *)VAR_3;
 enum _ecore_status_t VAR_7 = VAR_2;

 if (!VAR_3 || !VAR_4) {
  FUNC_0(VAR_6,
         "ecore rdma destroy qp failed: invalid NULL input. rdma_cxt=%p, qp=%p\n",
         VAR_3, VAR_4);
  return VAR_0;
 }

 FUNC_1(VAR_6, VAR_1, "QP(0x%x)\n", VAR_4->icid);

 if (FUNC_2(VAR_6))
  VAR_7 = FUNC_4(VAR_6, VAR_4);
 else
  VAR_7 = FUNC_5(VAR_6, VAR_4, VAR_5);


 FUNC_3(VAR_6->p_dev, VAR_4);

 return VAR_7;
}
