
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_pf_iov {int dummy; } ;
struct ecore_hwfn {struct ecore_pf_iov* pf_iov_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ecore_hwfn*) ;
 struct ecore_pf_iov* FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,int ,int ) ;
 int VAR_5 ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_6)
{
 struct ecore_pf_iov *VAR_7;

 if (!FUNC_2(VAR_6)) {
  FUNC_1(VAR_6, VAR_0,
      "No SR-IOV - no need for IOV db\n");
  return VAR_2;
 }

 VAR_7 = FUNC_3(VAR_6->p_dev, VAR_3, sizeof(*VAR_7));
 if (!VAR_7) {
  FUNC_0(VAR_6, 0, "Failed to allocate `struct ecore_sriov'\n");
  return VAR_1;
 }

 VAR_6->pf_iov_info = VAR_7;

 FUNC_5(VAR_6, VAR_4,
        VAR_5);

 return FUNC_4(VAR_6);
}
