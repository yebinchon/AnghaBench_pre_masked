
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct TYPE_6__ {scalar_t__ mode; int tc; } ;
struct TYPE_5__ {int offload_tc; } ;
struct TYPE_4__ {int ooo_tc; } ;
struct ecore_hwfn {TYPE_3__ ufp_info; TYPE_2__ hw_info; TYPE_1__ qm_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_4 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_5, struct ecore_ptt *VAR_6)
{
 FUNC_2(VAR_5, VAR_6);

 if (VAR_5->ufp_info.mode == VAR_4) {
  VAR_5->qm_info.ooo_tc = VAR_5->ufp_info.tc;
  VAR_5->hw_info.offload_tc = VAR_5->ufp_info.tc;

  FUNC_3(VAR_5, VAR_6);
 } else if (VAR_5->ufp_info.mode == VAR_3) {

  FUNC_1(VAR_5, VAR_6,
         VAR_0);
 } else {
  FUNC_0(VAR_5, "Invalid sched type, discard the UFP config\n");
  return VAR_1;
 }


 FUNC_4(VAR_5);

 return VAR_2;
}
