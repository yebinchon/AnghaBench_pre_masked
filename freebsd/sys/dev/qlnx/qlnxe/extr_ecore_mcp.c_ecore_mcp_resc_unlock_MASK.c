
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_resc_unlock_params {int resource; int b_released; scalar_t__ b_force; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int ,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ,int *,int *) ;

enum _ecore_status_t
FUNC_6(struct ecore_hwfn *VAR_8, struct ecore_ptt *VAR_9,
        struct ecore_resc_unlock_params *VAR_10)
{
 u32 VAR_11 = 0, VAR_12, VAR_13;
 u8 VAR_14;
 enum _ecore_status_t VAR_15;

 VAR_14 = VAR_10->b_force ? VAR_6
       : VAR_7;
 FUNC_4(VAR_11, VAR_4, VAR_10->resource);
 FUNC_4(VAR_11, VAR_3, VAR_14);

 FUNC_2(VAR_8, VAR_1,
     "Resource unlock request: param 0x%08x [opcode %d, resource %d]\n",
     VAR_11, VAR_14, VAR_10->resource);


 VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_11, &VAR_12,
        &VAR_13);
 if (VAR_15 != VAR_2)
  return VAR_15;


 VAR_14 = FUNC_3(VAR_13, VAR_5);

 FUNC_2(VAR_8, VAR_1,
     "Resource unlock response: mcp_param 0x%08x [opcode %d]\n",
     VAR_13, VAR_14);

 switch (VAR_14) {
 case 129:
  FUNC_0(VAR_8,
   "Resource unlock request for an already released resource [%d]\n",
   VAR_10->resource);

 case 130:
  VAR_10->b_released = 1;
  break;
 case 128:
  VAR_10->b_released = 0;
  break;
 default:
  FUNC_1(VAR_8, 0,
     "Unexpected opcode in resource unlock response [mcp_param 0x%08x, opcode %d]\n",
     VAR_13, VAR_14);
  return VAR_0;
 }

 return VAR_2;
}
