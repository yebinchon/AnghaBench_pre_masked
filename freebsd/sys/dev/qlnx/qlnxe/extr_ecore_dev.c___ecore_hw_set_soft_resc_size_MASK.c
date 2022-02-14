
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_resources { ____Placeholder_ecore_resources } ecore_resources ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int,int ,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_2,
         struct ecore_ptt *VAR_3,
         enum ecore_resources VAR_4,
         u32 VAR_5,
         u32 *VAR_6)
{
 enum _ecore_status_t VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6);
 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_2, 0,
     "MFW response failure for a max value setting of resource %d [%s]\n",
     VAR_4, FUNC_2(VAR_4));
  return VAR_7;
 }

 if (*VAR_6 != VAR_1)
  FUNC_0(VAR_2,
   "Failed to set the max value of resource %d [%s]. mcp_resp = 0x%08x.\n",
   VAR_4, FUNC_2(VAR_4), *VAR_6);

 return VAR_0;
}
