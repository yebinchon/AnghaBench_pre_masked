
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct public_func {scalar_t__ ovlan_stag; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_6__ {int ovlan; int hw_mode; } ;
struct ecore_hwfn {TYPE_3__ hw_info; TYPE_2__* mcp_info; } ;
struct TYPE_4__ {int ovlan; } ;
struct TYPE_5__ {TYPE_1__ func_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct public_func*,int ) ;
 int FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ecore_hwfn *VAR_9,
      struct ecore_ptt *VAR_10)
{
 struct public_func VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;

 FUNC_4(VAR_9, VAR_10, &VAR_11,
     FUNC_1(VAR_9));

 VAR_9->mcp_info->func_info.ovlan = (u16)VAR_11.ovlan_stag &
       VAR_6;
 VAR_9->hw_info.ovlan = VAR_9->mcp_info->func_info.ovlan;
 if ((VAR_9->hw_info.hw_mode & (1 << VAR_7)) &&
     (VAR_9->hw_info.ovlan != VAR_4)) {
  FUNC_6(VAR_9, VAR_10,
    VAR_8,
    VAR_9->hw_info.ovlan);
  FUNC_5(VAR_9);

  FUNC_6(VAR_9, VAR_10, VAR_1, 1);
  FUNC_6(VAR_9, VAR_10, VAR_0,
    VAR_9->hw_info.ovlan);
 }

 FUNC_0(VAR_9, VAR_5, "ovlan  = %d hw_mode = 0x%x\n",
     VAR_9->mcp_info->func_info.ovlan, VAR_9->hw_info.hw_mode);
 FUNC_2(VAR_9, VAR_3);


 FUNC_3(VAR_9, VAR_10, VAR_2, 0,
        &VAR_12, &VAR_13);
}
