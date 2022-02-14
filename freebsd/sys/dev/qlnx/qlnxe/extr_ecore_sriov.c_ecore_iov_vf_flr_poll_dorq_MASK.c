
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ecore_vf_info {int abs_vf_id; scalar_t__ concrete_fid; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {scalar_t__ concrete_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_3,
      struct ecore_vf_info *VAR_4,
      struct ecore_ptt *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_3, VAR_5, (u16)VAR_4->concrete_fid);

 for (VAR_6 = 0; VAR_6 < 50; VAR_6++) {
  VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_0);
  if (!VAR_7)
   break;
  FUNC_1(20);
 }
 FUNC_2(VAR_3, VAR_5, (u16)VAR_3->hw_info.concrete_fid);

 if (VAR_6 == 50) {
  FUNC_0(VAR_3, "VF[%d] - dorq failed to cleanup [usage 0x%08x]\n",
         VAR_4->abs_vf_id, VAR_7);
  return VAR_2;
 }

 return VAR_1;
}
