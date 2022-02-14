
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_start_in_params {int desired_cnq; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ecore_ptt* FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_rdma_start_in_params*) ;

enum _ecore_status_t FUNC_7(void *VAR_2,
    struct ecore_rdma_start_in_params *VAR_3)
{
 struct ecore_hwfn *VAR_4 = (struct ecore_hwfn *)VAR_2;
 struct ecore_ptt *VAR_5;
 enum _ecore_status_t VAR_6 = VAR_1;

 FUNC_0(VAR_4, VAR_0,
     "desired_cnq = %08x\n", VAR_3->desired_cnq);

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  goto err;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_6(VAR_4, VAR_5, VAR_3);
 if (VAR_6)
  goto err2;

 FUNC_2(VAR_4, VAR_5);

 FUNC_3(VAR_4);
 return VAR_6;

err2:
 FUNC_5(VAR_4);
err1:
 FUNC_2(VAR_4, VAR_5);
err:
 FUNC_0(VAR_4, VAR_0, "RDMA start - error, rc = %d\n", VAR_6);
 return VAR_6;
}
