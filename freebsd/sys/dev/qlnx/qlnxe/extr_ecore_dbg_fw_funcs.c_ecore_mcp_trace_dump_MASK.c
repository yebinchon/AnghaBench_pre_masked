
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcp_trace {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__ platform_id; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int*,int,char*,int) ;
 int FUNC_7 (int*,int,char*,int) ;
 int FUNC_8 (int*,int,char*,char*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int,int,int) ;
 int FUNC_10 (struct ecore_hwfn*,int ) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*,int*,int*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,int,int*,int*,int*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int*) ;

__attribute__((used)) static enum dbg_status FUNC_16(struct ecore_hwfn *VAR_5,
           struct ecore_ptt *VAR_6,
           u32 *VAR_7,
           bool VAR_8,
           u32 *VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15;
 struct dbg_tools_data *VAR_16 = &VAR_5->dbg_info;
 u32 VAR_17, VAR_18 = 0;
 enum dbg_status VAR_19;
 bool VAR_20;
 int VAR_21 = 0;

 *VAR_9 = 0;

 VAR_20 = VAR_16->platform_id == VAR_4 && !FUNC_10(VAR_5, VAR_1);


 VAR_19 = FUNC_13(VAR_5, VAR_6, &VAR_13, &VAR_14);
 if (VAR_19 != VAR_3)
  return VAR_19;


 VAR_18 += FUNC_4(VAR_5, VAR_6, VAR_7 + VAR_18, VAR_8, 1);
 VAR_18 += FUNC_8(VAR_7 + VAR_18, VAR_8, "dump-type", "mcp-trace");





 if (VAR_8 && VAR_20) {
  VAR_21 = !FUNC_11(VAR_5, VAR_6);
  if (!VAR_21)
   FUNC_2(VAR_5, 0, "MCP halt failed!\n");
 }


 VAR_15 = FUNC_1(VAR_14 + sizeof(struct mcp_trace), VAR_0);


 VAR_18 += FUNC_7(VAR_7 + VAR_18, VAR_8, "mcp_trace_data", 1);
 VAR_18 += FUNC_6(VAR_7 + VAR_18, VAR_8, "size", VAR_15);


 VAR_18 += FUNC_9(VAR_5, VAR_6, VAR_7 + VAR_18, VAR_8, FUNC_0(VAR_13), VAR_15, 0);


 if (VAR_21 && FUNC_12(VAR_5, VAR_6))
  FUNC_2(VAR_5, 0, "Failed to resume MCP after halt!\n");


 VAR_18 += FUNC_7(VAR_7 + VAR_18, VAR_8, "mcp_trace_meta", 1);




 if (FUNC_3(VAR_5) && VAR_20) {
  VAR_19 = FUNC_14(VAR_5, VAR_6, VAR_14, &VAR_17, &VAR_10, &VAR_11);
  if (VAR_19 == VAR_3)
   VAR_12 = FUNC_0(VAR_11);
 }


 VAR_18 += FUNC_6(VAR_7 + VAR_18, VAR_8, "size", VAR_12);


 if (VAR_8 && VAR_12)
  VAR_19 = FUNC_15(VAR_5, VAR_6, VAR_10, VAR_11, VAR_7 + VAR_18);
 if (VAR_19 == VAR_3)
  VAR_18 += VAR_12;


 VAR_18 += FUNC_5(VAR_7, VAR_18, VAR_8);

 *VAR_9 = VAR_18;




 return VAR_20 ? VAR_19 : VAR_2;
}
