
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_vf_info {int req_spoofchk_val; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 struct ecore_vf_info* FUNC_2 (struct ecore_hwfn*,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,int) ;
 int FUNC_4 (struct ecore_hwfn*,int) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_2,
         int VAR_3, bool VAR_4)
{
 struct ecore_vf_info *VAR_5;
 enum _ecore_status_t VAR_6 = VAR_0;

 if (!FUNC_3(VAR_2, VAR_3)) {
  FUNC_0(VAR_2, 1,
     "SR-IOV sanity check failed, can't set spoofchk\n");
  goto out;
 }

 VAR_5 = FUNC_2(VAR_2, (u16)VAR_3, 1);
 if (!VAR_5)
  goto out;

 if (!FUNC_4(VAR_2, VAR_3)) {

  VAR_5->req_spoofchk_val = VAR_4;
  VAR_6 = VAR_1;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_4);

out:
 return VAR_6;
}
