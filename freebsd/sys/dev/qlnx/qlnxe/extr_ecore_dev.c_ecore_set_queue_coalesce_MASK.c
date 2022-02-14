
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {void* tx_coalesce_usecs; void* rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct ecore_ptt* FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,void*,struct ecore_queue_cid*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,void*,struct ecore_queue_cid*) ;
 int FUNC_5 (struct ecore_hwfn*,void*,void*,struct ecore_queue_cid*) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_2,
           u16 VAR_3, u16 VAR_4,
           void *VAR_5)
{
 struct ecore_queue_cid *VAR_6 = (struct ecore_queue_cid *)VAR_5;
 enum _ecore_status_t VAR_7 = VAR_1;
 struct ecore_ptt *VAR_8;
 VAR_8 = FUNC_1(VAR_2);
 if (!VAR_8)
  return VAR_0;

 if (VAR_3) {
  VAR_7 = FUNC_3(VAR_2, VAR_8, VAR_3, VAR_6);
  if (VAR_7)
   goto out;
  VAR_2->p_dev->rx_coalesce_usecs = VAR_3;
 }

 if (VAR_4) {
  VAR_7 = FUNC_4(VAR_2, VAR_8, VAR_4, VAR_6);
  if (VAR_7)
   goto out;
  VAR_2->p_dev->tx_coalesce_usecs = VAR_4;
 }
out:
 FUNC_2(VAR_2, VAR_8);

 return VAR_7;
}
