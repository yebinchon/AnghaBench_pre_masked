
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct ecore_mdump_retain_data {int status; int pf; int epoch; scalar_t__ valid; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ allow_mdump; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_0 ;
 struct ecore_hwfn* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mdump_retain_data*) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_2,
         struct ecore_ptt *VAR_3)
{
 struct ecore_mdump_retain_data VAR_4;
 enum _ecore_status_t VAR_5;




 if (VAR_2 != FUNC_1(VAR_2->p_dev))
  return;

 VAR_5 = FUNC_4(VAR_2, VAR_3, &VAR_4);
 if (VAR_5 == VAR_1 && VAR_4.valid) {
  FUNC_0(VAR_2, 0,
     "The MFW notified that a critical error occurred in the device [epoch 0x%08x, pf 0x%x, status 0x%08x]\n",
     VAR_4.epoch, VAR_4.pf,
     VAR_4.status);
 } else {
  FUNC_0(VAR_2, 0,
     "The MFW notified that a critical error occurred in the device\n");
 }

 if (VAR_2->p_dev->allow_mdump) {
  FUNC_0(VAR_2, 0,
     "Not acknowledging the notification to allow the MFW crash dump\n");
  return;
 }

 FUNC_0(VAR_2, 0,
    "Acknowledging the notification to not allow the MFW crash dump [driver debug data collection is preferable]\n");
 FUNC_3(VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_0);
}
