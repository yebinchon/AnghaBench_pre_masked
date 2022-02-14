
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_mdump_cmd_params {int cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mdump_cmd_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_mdump_cmd_params*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mdump_cmd_params*) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
      struct ecore_ptt *VAR_2)
{
 struct ecore_mdump_cmd_params VAR_3;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.cmd = VAR_0;

 return FUNC_1(VAR_1, VAR_2, &VAR_3);
}
