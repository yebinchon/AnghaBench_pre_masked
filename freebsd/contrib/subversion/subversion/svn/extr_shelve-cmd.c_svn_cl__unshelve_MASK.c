
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_14__ {int * notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_15__ {scalar_t__ quiet; int dry_run; int keep_local; int targets; scalar_t__ list; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
struct TYPE_16__ {TYPE_1__* ctx; TYPE_2__* opt_state; } ;
typedef TYPE_3__ svn_cl__cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {scalar_t__ ind; scalar_t__ argc; } ;
typedef TYPE_4__ apr_getopt_t ;
struct TYPE_18__ {scalar_t__ nelts; } ;
typedef TYPE_5__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const**,TYPE_4__*,int *,int *) ;
 int FUNC_3 (char const**,char const*,TYPE_1__*,int *,int *) ;
 int FUNC_4 (char const*,int,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_5__**,TYPE_4__*,int ,TYPE_1__*,int ,int *) ;
 int FUNC_6 (char const*,char const*,int ,int ,TYPE_1__*,int *) ;
 int FUNC_7 (int *,char*,char const*) ;
 int FUNC_8 (char const**,char*,int *) ;
 int * FUNC_9 (int ,int ,int *) ;

svn_error_t *
FUNC_10(apr_getopt_t *VAR_3,
                 void *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_cl__opt_state_t *VAR_6 = ((svn_cl__cmd_baton_t *) VAR_4)->opt_state;
  svn_client_ctx_t *VAR_7 = ((svn_cl__cmd_baton_t *) VAR_4)->ctx;
  const char *VAR_8;
  const char *VAR_9;
  apr_array_header_t *VAR_10;

  FUNC_0(FUNC_8(&VAR_8, "", VAR_5));

  if (VAR_6->list)
    {
      if (VAR_3->ind < VAR_3->argc)
        return FUNC_9(VAR_1, 0, ((void*)0));

      FUNC_0(FUNC_4(VAR_8,
                           ! VAR_6->quiet ,
                           VAR_7, VAR_5));
      return VAR_2;
    }

  if (VAR_3->ind < VAR_3->argc)
    {
      FUNC_0(FUNC_2(&VAR_9, VAR_3, VAR_5, VAR_5));
    }
  else
    {
      FUNC_0(FUNC_3(&VAR_9, VAR_8, VAR_7, VAR_5, VAR_5));
      FUNC_0(FUNC_7(VAR_5,
                                 FUNC_1("unshelving the youngest change, '%s'\n"),
                                 VAR_9));
    }


  FUNC_0(FUNC_5(&VAR_10, VAR_3,
                                                      VAR_6->targets,
                                                      VAR_7, VAR_0, VAR_5));
  if (VAR_10->nelts)
    return FUNC_9(VAR_1, 0, ((void*)0));

  if (VAR_6->quiet)
    VAR_7->notify_func2 = ((void*)0);

  FUNC_0(FUNC_6(VAR_9, VAR_8,
                              VAR_6->keep_local, VAR_6->dry_run,
                              VAR_7, VAR_5));
  if (! VAR_6->quiet)
    FUNC_0(FUNC_7(VAR_5, "unshelved '%s'\n", VAR_9));

  return VAR_2;
}
