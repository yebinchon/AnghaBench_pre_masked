
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mdump_cmd_params {int data_src_size; int * p_data_src; int cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mdump_cmd_params ;
typedef int epoch ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_mdump_cmd_params*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mdump_cmd_params*) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
      struct ecore_ptt *VAR_2,
      u32 VAR_3)
{
 struct ecore_mdump_cmd_params VAR_4;

 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.cmd = VAR_0;
 VAR_4.p_data_src = &VAR_3;
 VAR_4.data_src_size = sizeof(VAR_3);

 return FUNC_1(VAR_1, VAR_2, &VAR_4);
}
