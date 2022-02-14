
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dx_souid; int dx_ptrid; } ;
typedef TYPE_1__ dt_xlator_t ;
typedef int dt_ident_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

dt_ident_t *
FUNC_2(dt_xlator_t *VAR_1, ctf_file_t *VAR_2, ctf_id_t VAR_3)
{
 if (FUNC_0(VAR_2, FUNC_1(VAR_2, VAR_3)) == VAR_0)
  return (&VAR_1->dx_ptrid);
 else
  return (&VAR_1->dx_souid);
}
