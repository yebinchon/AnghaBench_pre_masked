
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_error_t ;
struct log_message_baton {char* log_message; TYPE_1__* ctx; scalar_t__ non_interactive; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_8__ {int config; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__**,int *,int *,char*,TYPE_2__*,char*,int ,int ,int *,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 TYPE_2__* FUNC_5 (char*,int *) ;
 int FUNC_6 (TYPE_2__**,int *,int *,TYPE_2__*,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char **VAR_4,
                 const char **VAR_5,
                 const apr_array_header_t *VAR_6,
                 void *VAR_7,
                 apr_pool_t *VAR_8)
{
  struct log_message_baton *VAR_9 = VAR_7;

  *VAR_5 = ((void*)0);

  if (VAR_9->log_message)
    {
      svn_string_t *VAR_10 = FUNC_5(VAR_9->log_message, VAR_8);

      FUNC_1(FUNC_6(&VAR_10, ((void*)0), ((void*)0),
                                            VAR_10, ((void*)0), VAR_0,
                                            VAR_8, VAR_8),
                FUNC_2("Error normalizing log message to internal format"));

      *VAR_4 = VAR_10->data;

      return VAR_2;
    }

  if (VAR_9->non_interactive)
    {
      return FUNC_4(VAR_1, ((void*)0),
                              FUNC_2("Cannot invoke editor to get log message "
                                "when non-interactive"));
    }
  else
    {
      svn_string_t *VAR_11 = FUNC_5("", VAR_8);

      FUNC_0(FUNC_3(
                      &VAR_11, ((void*)0), ((void*)0), "", VAR_11, "svnmucc-commit",
                      VAR_9->ctx->config, VAR_3, ((void*)0), VAR_8));

      if (VAR_11 && VAR_11->data)
        *VAR_4 = VAR_11->data;
      else
        *VAR_4 = ((void*)0);

      return VAR_2;
    }
}
