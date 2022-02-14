
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum res_mtt_states { ____Placeholder_res_mtt_states } res_mtt_states ;





__attribute__((used)) static inline const char *FUNC_0(enum res_mtt_states VAR_0)
{
 switch (VAR_0) {
 case 128: return "RES_MTT_BUSY";
 case 129: return "RES_MTT_ALLOCATED";
 default: return "Unknown";
 }
}
