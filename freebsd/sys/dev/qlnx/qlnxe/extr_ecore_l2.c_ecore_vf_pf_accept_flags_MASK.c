
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_sp_vport_update_params {int accept_flags; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_accept_flags {int dummy; } ;
typedef int s_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int *,struct ecore_filter_accept_flags*,int) ;
 int FUNC_1 (struct ecore_sp_vport_update_params*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_0,
    struct ecore_filter_accept_flags *VAR_1)
{
 struct ecore_sp_vport_update_params VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_2.accept_flags, VAR_1,
      sizeof(struct ecore_filter_accept_flags));

 return FUNC_2(VAR_0, &VAR_2);
}
