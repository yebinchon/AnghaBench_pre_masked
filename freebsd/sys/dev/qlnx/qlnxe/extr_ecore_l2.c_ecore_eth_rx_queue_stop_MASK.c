
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_cid {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_queue_cid*,int,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_queue_cid*,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_2,
          void *VAR_3,
          bool VAR_4,
          bool VAR_5)
{
 struct ecore_queue_cid *VAR_6 = (struct ecore_queue_cid *)VAR_3;
 enum _ecore_status_t VAR_7 = VAR_0;

 if (FUNC_0(VAR_2->p_dev))
  VAR_7 = FUNC_1(VAR_2, VAR_6,
      VAR_4,
      VAR_5);
 else
  VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_5);

 if (VAR_7 == VAR_1)
  FUNC_2(VAR_2, VAR_6);
 return VAR_7;
}
