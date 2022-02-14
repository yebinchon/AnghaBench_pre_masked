
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int number; } ;
struct TYPE_15__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int (* svn_log_message_receiver_t ) (void*,int *,int ,char*,char*,int ,int *) ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int const*,TYPE_2__ const*,TYPE_2__ const*,int ,int ,int ,int (*) (void*,int *,int ,char*,char*,int ,int *),void*,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_5(const apr_array_header_t *VAR_4,
               const svn_opt_revision_t *VAR_5,
               const svn_opt_revision_t *VAR_6,
               svn_boolean_t VAR_7,
               svn_boolean_t VAR_8,
               svn_log_message_receiver_t VAR_9,
               void *VAR_10,
               svn_client_ctx_t *VAR_11,
               apr_pool_t *VAR_12)
{
  svn_error_t *VAR_13 = VAR_1;

  VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_6, 0, VAR_7,
                        VAR_8, VAR_9, VAR_10, VAR_11,
                        VAR_12);
  if (VAR_13 && (VAR_13->apr_err == VAR_0)
      && (VAR_5->kind == VAR_2)
      && ((VAR_6->kind == VAR_3)
          && (VAR_6->value.number == 1)))
    {
      FUNC_3(VAR_13);
      VAR_13 = VAR_1;



      FUNC_0(VAR_9(VAR_10,
                       ((void*)0), 0, "", "", FUNC_1("No commits in repository"),
                       VAR_12));
    }

  return FUNC_4(VAR_13);
}
