
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_5__ {int quiet; } ;
typedef TYPE_1__ svn_cl__opt_state_t ;
struct TYPE_6__ {int * ctx; TYPE_1__* opt_state; } ;
typedef TYPE_2__ svn_cl__cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {scalar_t__ ind; scalar_t__ argc; } ;
typedef TYPE_3__ apr_getopt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char const*,int,int *,int *) ;
 int FUNC_2 (char const**,char*,int *) ;
 int * FUNC_3 (int ,int ,int *) ;

svn_error_t *
FUNC_4(apr_getopt_t *VAR_2,
                void *VAR_3,
                apr_pool_t *VAR_4)
{
  svn_cl__opt_state_t *VAR_5 = ((svn_cl__cmd_baton_t *) VAR_3)->opt_state;
  svn_client_ctx_t *VAR_6 = ((svn_cl__cmd_baton_t *) VAR_3)->ctx;
  const char *VAR_7;


  if (VAR_2->ind < VAR_2->argc)
    return FUNC_3(VAR_0, 0, ((void*)0));

  FUNC_0(FUNC_2(&VAR_7, "", VAR_4));
  FUNC_0(FUNC_1(VAR_7, ! VAR_5->quiet ,
                       VAR_6, VAR_4));

  return VAR_1;
}
