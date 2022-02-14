
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {TYPE_1__* p_llh_info; } ;
typedef enum ecore_eng { ____Placeholder_ecore_eng } ecore_eng ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ num_ppfid; } ;


 int FUNC_0 (struct ecore_dev*,int,char*,...) ;
 int FUNC_1 (struct ecore_dev*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_dev*,scalar_t__,int) ;
 int FUNC_7 (struct ecore_dev*,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_8(struct ecore_hwfn *VAR_4, struct ecore_ptt *VAR_5,
      bool VAR_6)
{
 struct ecore_dev *VAR_7 = VAR_4->p_dev;
 enum _ecore_status_t VAR_8;






 if (VAR_6) {
  enum ecore_eng VAR_9;
  u8 VAR_10;

  if (FUNC_4(VAR_4)) {
   VAR_9 = VAR_1;
   VAR_8 = FUNC_7(VAR_7, VAR_9);
   if (VAR_8 != VAR_3) {
    FUNC_0(VAR_7, 0,
       "Failed to set the RoCE engine affinity\n");
    return VAR_8;
   }

   FUNC_1(VAR_7, VAR_2,
       "LLH [backwards compatible mode]: Set the engine affinity of RoCE packets as %d\n",
       VAR_9);
  }

  VAR_9 = (FUNC_2(VAR_4) ||
         FUNC_3(VAR_4)) ? VAR_1
          : VAR_0;
  for (VAR_10 = 0; VAR_10 < VAR_7->p_llh_info->num_ppfid; VAR_10++) {
   VAR_8 = FUNC_6(VAR_7, VAR_10, VAR_9);
   if (VAR_8 != VAR_3) {
    FUNC_0(VAR_7, 0,
       "Failed to set the engine affinity of ppfid %d\n",
       VAR_10);
    return VAR_8;
   }
  }

  FUNC_1(VAR_7, VAR_2,
      "LLH [backwards compatible mode]: Set the engine affinity of non-RoCE packets as %d\n",
      VAR_9);

  return VAR_3;
 }

 return FUNC_5(VAR_4, VAR_5);
}
