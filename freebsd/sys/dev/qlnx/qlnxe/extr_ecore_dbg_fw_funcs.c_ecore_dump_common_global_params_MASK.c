
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; size_t platform_id; } ;
struct ecore_hwfn {int abs_pf_id; struct dbg_tools_data dbg_info; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_2 (int*,int,char*,int ) ;
 int FUNC_3 (int*,int,char*,scalar_t__) ;
 int FUNC_4 (int*,int,char*,int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u32 FUNC_5(struct ecore_hwfn *VAR_4,
             struct ecore_ptt *VAR_5,
             u32 *VAR_6,
             bool VAR_7,
             u8 VAR_8)
{
 struct dbg_tools_data *VAR_9 = &VAR_4->dbg_info;
 u32 VAR_10 = 0;
 u8 VAR_11;


 VAR_11 = VAR_0 + VAR_8;
 VAR_10 += FUNC_3(VAR_6 + VAR_10, VAR_7, "global_params", VAR_11);


 VAR_10 += FUNC_0(VAR_4, VAR_5, VAR_6 + VAR_10, VAR_7);
 VAR_10 += FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_10, VAR_7);
 VAR_10 += FUNC_2(VAR_6 + VAR_10, VAR_7, "tools-version", VAR_1);
 VAR_10 += FUNC_4(VAR_6 + VAR_10, VAR_7, "chip", VAR_2[VAR_9->chip_id].name);
 VAR_10 += FUNC_4(VAR_6 + VAR_10, VAR_7, "platform", VAR_3[VAR_9->platform_id].name);
 VAR_10 += FUNC_2(VAR_6 + VAR_10, VAR_7, "pci-func", VAR_4->abs_pf_id);

 return VAR_10;
}
