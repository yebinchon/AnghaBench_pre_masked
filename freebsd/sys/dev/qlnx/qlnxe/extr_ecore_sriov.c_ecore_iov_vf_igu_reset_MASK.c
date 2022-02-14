
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_vf_info {int num_sbs; int opaque_fid; int * igu_sbs; scalar_t__ concrete_fid; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {scalar_t__ concrete_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_1,
       struct ecore_ptt *VAR_2,
       struct ecore_vf_info *VAR_3)
{
 int VAR_4;


 FUNC_0(VAR_1, VAR_2, (u16)VAR_3->concrete_fid);

 FUNC_2(VAR_1, VAR_2, VAR_0, 0);


 FUNC_0(VAR_1, VAR_2, (u16)VAR_1->hw_info.concrete_fid);


 for (VAR_4 = 0; VAR_4 < VAR_3->num_sbs; VAR_4++)
  FUNC_1(VAR_1, VAR_2,
        VAR_3->igu_sbs[VAR_4],
        VAR_3->opaque_fid, 1);
}
