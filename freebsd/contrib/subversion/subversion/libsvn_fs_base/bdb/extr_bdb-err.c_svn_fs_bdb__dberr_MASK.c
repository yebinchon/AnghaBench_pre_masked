
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* error_info; } ;
typedef TYPE_2__ bdb_env_baton_t ;
struct TYPE_4__ {int * pending_errors; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int *,int ) ;

svn_error_t *
FUNC_3(bdb_env_baton_t *VAR_0, int VAR_1)
{
  svn_error_t *VAR_2;

  VAR_2 = VAR_0->error_info->pending_errors;
  VAR_0->error_info->pending_errors = ((void*)0);

  return FUNC_2(FUNC_0(VAR_1), VAR_2,
                          FUNC_1(VAR_1));
}
