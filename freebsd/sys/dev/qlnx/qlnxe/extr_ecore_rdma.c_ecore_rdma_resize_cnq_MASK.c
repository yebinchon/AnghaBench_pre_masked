
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_resize_cnq_in_params {int cnq_id; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

enum _ecore_status_t FUNC_1(void *VAR_2,
    struct ecore_rdma_resize_cnq_in_params *VAR_3)
{
 struct ecore_hwfn *VAR_4 = (struct ecore_hwfn *)VAR_2;

 FUNC_0(VAR_4, VAR_0, "cnq_id = %08x\n", VAR_3->cnq_id);


 return VAR_1;
}
