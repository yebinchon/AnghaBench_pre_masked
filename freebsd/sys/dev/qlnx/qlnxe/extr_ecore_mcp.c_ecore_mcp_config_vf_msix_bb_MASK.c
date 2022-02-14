
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ num_hwfns; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_9,
       struct ecore_ptt *VAR_10,
       u8 VAR_11, u8 VAR_12)
{
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 enum _ecore_status_t VAR_16;


 if (!FUNC_2(VAR_9))
  return VAR_7;
 VAR_12 *= VAR_9->p_dev->num_hwfns;

 VAR_14 |= (VAR_11 << VAR_3) &
   VAR_2;
 VAR_14 |= (VAR_12 << VAR_1) &
   VAR_0;

 VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_4, VAR_14,
      &VAR_13, &VAR_15);

 if (VAR_13 != VAR_8) {
  FUNC_0(VAR_9, 1, "VF[%d]: MFW failed to set MSI-X\n",
     VAR_11);
  VAR_16 = VAR_5;
 } else {
  FUNC_1(VAR_9, VAR_6,
      "Requested 0x%02x MSI-x interrupts from VF 0x%02x\n",
       VAR_12, VAR_11);
 }

 return VAR_16;
}
