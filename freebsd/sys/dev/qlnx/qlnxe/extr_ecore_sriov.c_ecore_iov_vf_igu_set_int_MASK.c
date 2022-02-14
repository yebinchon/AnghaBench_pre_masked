
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ecore_vf_info {scalar_t__ concrete_fid; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {scalar_t__ concrete_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_2,
         struct ecore_ptt *VAR_3,
         struct ecore_vf_info *VAR_4,
         bool VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_2, VAR_3, (u16)VAR_4->concrete_fid);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0);

 if (VAR_5) {
  VAR_6 |= VAR_1;
 } else {
  VAR_6 &= ~VAR_1;
 }

 FUNC_2(VAR_2, VAR_3, VAR_0, VAR_6);


 FUNC_0(VAR_2, VAR_3, (u16)VAR_2->hw_info.concrete_fid);
}
