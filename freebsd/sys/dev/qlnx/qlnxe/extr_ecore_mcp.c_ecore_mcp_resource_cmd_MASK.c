
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_7,
         struct ecore_ptt *VAR_8,
         u32 VAR_9, u32 *VAR_10,
         u32 *VAR_11)
{
 enum _ecore_status_t VAR_12;

 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_0, VAR_9,
      VAR_10, VAR_11);
 if (VAR_12 != VAR_3)
  return VAR_12;

 if (*VAR_10 == VAR_4) {
  FUNC_0(VAR_7,
   "The resource command is unsupported by the MFW\n");
  return VAR_2;
 }

 if (*VAR_11 == VAR_6) {
  u8 VAR_13 = FUNC_2(VAR_9, VAR_5);

  FUNC_1(VAR_7, 0,
     "The resource command is unknown to the MFW [param 0x%08x, opcode %d]\n",
     VAR_9, VAR_13);
  return VAR_1;
 }

 return VAR_12;
}
