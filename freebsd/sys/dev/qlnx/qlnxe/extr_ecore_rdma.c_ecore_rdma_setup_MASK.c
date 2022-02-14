
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_start_in_params {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_rdma_start_in_params*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_rdma_start_in_params*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_rdma_start_in_params*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_rdma_start_in_params*) ;
 int FUNC_9 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_2,
    struct ecore_ptt *VAR_3,
    struct ecore_rdma_start_in_params *VAR_4)
{
 enum _ecore_status_t VAR_5 = 0;

 FUNC_0(VAR_2, VAR_0, "RDMA setup\n");

 FUNC_3(VAR_2, VAR_4);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2, VAR_4);

 VAR_5 = FUNC_7(VAR_2);
 if (VAR_5 != VAR_1)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (VAR_5 != VAR_1)
  return VAR_5;

 if (FUNC_1(VAR_2)) {
  VAR_5 = FUNC_2(VAR_2, VAR_4);
  if (VAR_5 != VAR_1)
   return VAR_5;
 } else {
  VAR_5 = FUNC_9(VAR_2);
  if (VAR_5 != VAR_1)
   return VAR_5;
 }

 return FUNC_8(VAR_2, VAR_3, VAR_4);
}
