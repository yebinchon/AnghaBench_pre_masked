
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_cid {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_queue_cid*) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_1,
          void *VAR_2)
{
 struct ecore_queue_cid *VAR_3 = (struct ecore_queue_cid *)VAR_2;
 enum _ecore_status_t VAR_4;

 if (FUNC_0(VAR_1->p_dev))
  VAR_4 = FUNC_1(VAR_1, VAR_3);
 else
  VAR_4 = FUNC_3(VAR_1, VAR_3);

 if (VAR_4 == VAR_0)
  FUNC_2(VAR_1, VAR_3);
 return VAR_4;
}
