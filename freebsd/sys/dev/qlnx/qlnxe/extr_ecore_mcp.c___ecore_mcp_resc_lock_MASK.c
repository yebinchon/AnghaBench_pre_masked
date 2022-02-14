
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_resc_lock_params {int timeout; int resource; int b_granted; void* owner; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int,int,...) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ,int *,int *) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_11, struct ecore_ptt *VAR_12,
        struct ecore_resc_lock_params *VAR_13)
{
 u32 VAR_14 = 0, VAR_15, VAR_16;
 u8 VAR_17, VAR_18;
 enum _ecore_status_t VAR_19;

 switch (VAR_13->timeout) {
 case 131:
  VAR_17 = VAR_8;
  VAR_18 = 0;
  break;
 case 130:
  VAR_17 = VAR_9;
  VAR_18 = 0;
  break;
 default:
  VAR_17 = VAR_10;
  VAR_18 = VAR_13->timeout;
  break;
 }

 FUNC_3(VAR_14, VAR_5, VAR_13->resource);
 FUNC_3(VAR_14, VAR_4, VAR_17);
 FUNC_3(VAR_14, VAR_3, VAR_18);

 FUNC_1(VAR_11, VAR_1,
     "Resource lock request: param 0x%08x [age %d, opcode %d, resource %d]\n",
     VAR_14, VAR_18, VAR_17, VAR_13->resource);


 VAR_19 = FUNC_4(VAR_11, VAR_12, VAR_14, &VAR_15,
        &VAR_16);
 if (VAR_19 != VAR_2)
  return VAR_19;


 VAR_13->owner = FUNC_2(VAR_16, VAR_7);
 VAR_17 = FUNC_2(VAR_16, VAR_6);

 FUNC_1(VAR_11, VAR_1,
     "Resource lock response: mcp_param 0x%08x [opcode %d, owner %d]\n",
     VAR_16, VAR_17, VAR_13->owner);

 switch (VAR_17) {
 case 128:
  VAR_13->b_granted = 1;
  break;
 case 129:
  VAR_13->b_granted = 0;
  break;
 default:
  FUNC_0(VAR_11, 0,
     "Unexpected opcode in resource lock response [mcp_param 0x%08x, opcode %d]\n",
     VAR_16, VAR_17);
  return VAR_0;
 }

 return VAR_2;
}
