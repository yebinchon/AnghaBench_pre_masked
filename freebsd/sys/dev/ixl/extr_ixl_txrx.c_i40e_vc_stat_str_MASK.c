
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_hw {char const* err_str; } ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;
 int FUNC_0 (char const*,int,char*,int) ;

const char *
FUNC_1(struct i40e_hw *VAR_0, enum virtchnl_status_code VAR_1)
{
 switch (VAR_1) {
 case 128:
  return "OK";
 case 133:
  return "VIRTCHNL_ERR_PARAM";
 case 130:
  return "VIRTCHNL_STATUS_ERR_OPCODE_MISMATCH";
 case 132:
  return "VIRTCHNL_STATUS_ERR_CQP_COMPL_ERROR";
 case 131:
  return "VIRTCHNL_STATUS_ERR_INVALID_VF_ID";
 case 129:
  return "VIRTCHNL_STATUS_NOT_SUPPORTED";
 }

 FUNC_0(VAR_0->err_str, sizeof(VAR_0->err_str), "%d", VAR_1);
 return VAR_0->err_str;
}
