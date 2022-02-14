
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resolved_props; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int svn_client_conflict_option_id_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,char const*) ;

svn_client_conflict_option_id_t
FUNC_2(svn_client_conflict_t *VAR_1,
                                        const char *VAR_2)
{
  svn_client_conflict_option_t *VAR_3;

  VAR_3 = FUNC_1(VAR_1->resolved_props, VAR_2);
  if (VAR_3 == ((void*)0))
    return VAR_0;

  return FUNC_0(VAR_3);
}
