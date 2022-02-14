
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int hw_dwords; size_t target; scalar_t__ one_shot_en; int hw_id_mask; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef int hw_id_mask_str ;


 size_t VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,int*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_5 (int*,int,char*,int) ;
 int FUNC_6 (int*,int,char*,int) ;
 int FUNC_7 (int*,int,char*,char*) ;
 char** VAR_2 ;

__attribute__((used)) static u32 FUNC_8(struct ecore_hwfn *VAR_3,
         struct ecore_ptt *VAR_4,
         u32 *VAR_5,
         bool VAR_6)
{
 struct dbg_tools_data *VAR_7 = &VAR_3->dbg_info;
 char VAR_8[16];
 u32 VAR_9 = 0;

 if (FUNC_1(VAR_8, sizeof(VAR_8), "0x%x", VAR_7->bus.hw_id_mask) < 0)
  FUNC_0(VAR_3, 1, "Unexpected debug error: invalid HW ID mask\n");


 VAR_9 += FUNC_4(VAR_3, VAR_4, VAR_5 + VAR_9, VAR_6, 5);
 VAR_9 += FUNC_7(VAR_5 + VAR_9, VAR_6, "dump-type", "debug-bus");
 VAR_9 += FUNC_7(VAR_5 + VAR_9, VAR_6, "wrap-mode", VAR_7->bus.one_shot_en ? "one-shot" : "wrap-around");
 VAR_9 += FUNC_5(VAR_5 + VAR_9, VAR_6, "hw-dwords", VAR_7->bus.hw_dwords);
 VAR_9 += FUNC_7(VAR_5 + VAR_9, VAR_6, "hw-id-mask", VAR_8);
 VAR_9 += FUNC_7(VAR_5 + VAR_9, VAR_6, "target", VAR_2[VAR_7->bus.target]);

 VAR_9 += FUNC_3(VAR_3, VAR_5 + VAR_9, VAR_6);

 if (VAR_7->bus.target != VAR_0) {
  u32 VAR_10 = 0;

  if (VAR_6)
   VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_1, 0);

  VAR_9 += FUNC_6(VAR_5 + VAR_9, VAR_6, "bus_data", 1);
  VAR_9 += FUNC_5(VAR_5 + VAR_9, VAR_6, "size", VAR_10);
 }

 return VAR_9;
}
