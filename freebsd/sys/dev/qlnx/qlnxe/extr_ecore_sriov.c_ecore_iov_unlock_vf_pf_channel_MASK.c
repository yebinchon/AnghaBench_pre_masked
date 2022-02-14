
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ecore_vf_info {int abs_vf_id; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,size_t) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_2,
        struct ecore_vf_info *VAR_3,
        u16 VAR_4)
{
 if (FUNC_1(VAR_4))
  FUNC_0(VAR_2,
      VAR_0,
      "VF[%d]: vf pf channel unlocked by %s\n",
      VAR_3->abs_vf_id,
      VAR_1[VAR_4]);
 else
  FUNC_0(VAR_2,
      VAR_0,
      "VF[%d]: vf pf channel unlocked by %04x\n",
      VAR_3->abs_vf_id, VAR_4);



}
