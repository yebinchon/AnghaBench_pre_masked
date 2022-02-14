
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ddo_hdl; int ddo_strs; } ;
typedef TYPE_1__ dt_dof_t ;
typedef int dt_buf_t ;
typedef scalar_t__ dof_stridx_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,char const*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static dof_stridx_t
FUNC_3(dt_dof_t *VAR_0, const char *VAR_1)
{
 dt_buf_t *VAR_2 = &VAR_0->ddo_strs;
 dof_stridx_t VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 != 0 && (VAR_1 == ((void*)0) || *VAR_1 == '\0'))
  return (0);

 FUNC_1(VAR_0->ddo_hdl, VAR_2, VAR_1, FUNC_2(VAR_1) + 1, sizeof (char));
 return (VAR_3);
}
