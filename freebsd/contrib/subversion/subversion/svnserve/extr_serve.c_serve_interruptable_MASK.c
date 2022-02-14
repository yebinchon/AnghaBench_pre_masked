
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cmdname; } ;
typedef TYPE_1__ svn_ra_svn__cmd_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {int conn; int baton; TYPE_8__* params; int pool; int usock; } ;
typedef TYPE_2__ connection_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_11__ {int max_response_size; int max_request_size; int error_check_interval; int zero_copy_limit; int compression_level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int *,int ,TYPE_8__*,int *) ;
 TYPE_1__* VAR_3 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,TYPE_1__ const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__*,int *,int ,int ,scalar_t__,int *) ;
 int * FUNC_9 (scalar_t__*,scalar_t__*,int ,int *) ;
 int FUNC_10 (int ,int *,int *,int ,int ,int ,int ,int ,int ) ;

svn_error_t *
FUNC_11(svn_boolean_t *VAR_4,
                    connection_t *VAR_5,
                    svn_boolean_t (* VAR_6)(connection_t *),
                    apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8 = VAR_1;
  svn_error_t *VAR_9 = ((void*)0);
  const svn_ra_svn__cmd_entry_t *VAR_10;
  apr_pool_t *VAR_11 = FUNC_6(VAR_7);


  apr_hash_t *VAR_12 = FUNC_0(VAR_7);
  for (VAR_10 = VAR_3; VAR_10->cmdname; VAR_10++)
    FUNC_4(VAR_12, VAR_10->cmdname, VAR_10);


  if (! VAR_5->conn)
    {
      apr_status_t VAR_13;
      VAR_13 = FUNC_1(VAR_5->usock, VAR_0, 1);
      if (VAR_13)
        {

        }


      VAR_5->conn
        = FUNC_10(VAR_5->usock, ((void*)0), ((void*)0),
                                  VAR_5->params->compression_level,
                                  VAR_5->params->zero_copy_limit,
                                  VAR_5->params->error_check_interval,
                                  VAR_5->params->max_request_size,
                                  VAR_5->params->max_response_size,
                                  VAR_5->pool);


      VAR_9 = FUNC_2(&VAR_5->baton, VAR_5->conn,
                                   VAR_5->params, VAR_7);
    }


  if (VAR_9)
    VAR_8 = VAR_2;


  while (!VAR_8 && !VAR_9)
    {
      FUNC_5(VAR_11);
      if (VAR_6 && VAR_6(VAR_5))
        {
          svn_boolean_t VAR_14;




          VAR_9 = FUNC_9(&VAR_14, &VAR_8,
                                        VAR_5->conn, VAR_11);
          if (!VAR_9 && VAR_14)
            VAR_9 = FUNC_8(&VAR_8, VAR_12,
                                             VAR_5->baton,
                                             VAR_5->conn,
                                             VAR_1, VAR_11);

          break;
        }
      else
        {





          VAR_9 = FUNC_8(&VAR_8, VAR_12,
                                           VAR_5->baton,
                                           VAR_5->conn,
                                           VAR_1, VAR_11);
        }
    }


  FUNC_7(VAR_11);
  if (VAR_4)
    *VAR_4 = VAR_8;

  return FUNC_3(VAR_9);
}
