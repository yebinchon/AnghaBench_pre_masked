
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_hwfn {int dummy; } ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_7(struct ecore_hwfn *VAR_8,
     u32 VAR_9, u16 VAR_10,
     enum dcbx_protocol_type *VAR_11, bool VAR_12)
{
 if (FUNC_2(VAR_9, VAR_10, VAR_12)) {
  *VAR_11 = VAR_2;
 } else if (FUNC_5(VAR_9, VAR_10, VAR_12)) {
  *VAR_11 = VAR_5;
 } else if (FUNC_3(VAR_9, VAR_10, VAR_12)) {
  *VAR_11 = VAR_3;
 } else if (FUNC_1(VAR_9, VAR_10, VAR_12)) {
  *VAR_11 = VAR_1;
 } else if (FUNC_6(VAR_9, VAR_10, VAR_12)) {
  *VAR_11 = VAR_6;
 } else if (FUNC_4(VAR_8, VAR_9, VAR_10, VAR_12)) {
  *VAR_11 = VAR_4;
 } else {
  *VAR_11 = VAR_0;
  FUNC_0(VAR_8, VAR_7,
      "No action required, App TLV entry = 0x%x\n",
      VAR_9);
  return 0;
 }

 return 1;
}
