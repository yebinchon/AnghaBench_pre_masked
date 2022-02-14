
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int signature ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;

__attribute__((used)) static enum dbg_status FUNC_2(struct ecore_hwfn *VAR_3,
             struct ecore_ptt *VAR_4,
             u32 VAR_5,
             u32 VAR_6,
             u32 *VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10, *VAR_11 = (u8 *)VAR_7;
 enum dbg_status VAR_12;
 u32 VAR_13;


 VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_12 != VAR_1)
  return VAR_12;


 VAR_13 = FUNC_1(VAR_11);
 VAR_11 += sizeof(VAR_13);
 if (VAR_13 != VAR_2)
  return VAR_0;


 VAR_8 = *(VAR_11++);


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_9 = *(VAR_11++);
  VAR_11 += VAR_9;
 }


 VAR_13 = FUNC_1(VAR_11);
 VAR_11 += sizeof(VAR_13);
 if (VAR_13 != VAR_2)
  return VAR_0;

 return VAR_1;
}
