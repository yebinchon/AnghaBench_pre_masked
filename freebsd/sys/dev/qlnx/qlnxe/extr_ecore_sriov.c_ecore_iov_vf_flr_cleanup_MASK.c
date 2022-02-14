
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_2__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {TYPE_1__* p_iov_info; } ;
struct TYPE_3__ {scalar_t__ total_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int *) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_2,
           struct ecore_ptt *VAR_3)

{
 u32 VAR_4[VAR_1 / 32];
 enum _ecore_status_t VAR_5 = VAR_0;
 u16 VAR_6;

 FUNC_0(VAR_4, 0, sizeof(u32) * (VAR_1 / 32));





 FUNC_1(100);

 for (VAR_6 = 0; VAR_6 < VAR_2->p_dev->p_iov_info->total_vfs; VAR_6++)
  FUNC_2(VAR_2, VAR_3, VAR_6, VAR_4);

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
