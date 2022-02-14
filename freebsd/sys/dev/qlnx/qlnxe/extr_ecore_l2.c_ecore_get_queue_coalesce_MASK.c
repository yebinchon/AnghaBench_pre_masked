
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_queue_cid {scalar_t__ b_is_rx; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_queue_cid*,int *) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_queue_cid*,int *) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,int *,struct ecore_queue_cid*) ;

enum _ecore_status_t
FUNC_7(struct ecore_hwfn *VAR_2, u16 *VAR_3,
    void *VAR_4)
{
 struct ecore_queue_cid *VAR_5 = (struct ecore_queue_cid *)VAR_4;
 enum _ecore_status_t VAR_6 = VAR_1;
 struct ecore_ptt *VAR_7;
 VAR_7 = FUNC_4(VAR_2);
 if (!VAR_7)
  return VAR_0;

 if (VAR_5->b_is_rx) {
  VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_5, VAR_3);
  if (VAR_6 != VAR_1)
   goto out;
 } else {
  VAR_6 = FUNC_3(VAR_2, VAR_7, VAR_5, VAR_3);
  if (VAR_6 != VAR_1)
   goto out;
 }

out:
 FUNC_5(VAR_2, VAR_7);

 return VAR_6;
}
