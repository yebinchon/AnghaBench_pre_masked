
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_19__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_20__ {int * url; int rev; int repos_uuid; int repos_root_url; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct TYPE_21__ {TYPE_3__ loc; int abspath; } ;
typedef TYPE_4__ merge_target_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const*,TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_3__**,char const*,TYPE_2__*,int *,int *) ;
 int FUNC_6 (char const*,int *) ;
 TYPE_1__* FUNC_7 (int ,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int *,int *,int *,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(merge_target_t **VAR_6,
               const char *VAR_7,
               svn_boolean_t VAR_8,
               svn_boolean_t VAR_9,
               svn_boolean_t VAR_10,
               svn_client_ctx_t *VAR_11,
               apr_pool_t *VAR_12,
               apr_pool_t *VAR_13)
{
  merge_target_t *VAR_14 = FUNC_2(VAR_12, sizeof(*VAR_14));
  svn_client__pathrev_t *VAR_15;

  VAR_14->abspath = FUNC_3(VAR_12, VAR_7);

  FUNC_0(FUNC_5(&VAR_15, VAR_7, VAR_11,
                                         VAR_12, VAR_13));
  if (VAR_15)
    {
      VAR_14->loc = *VAR_15;
    }
  else
    {
      svn_error_t *VAR_16;






      VAR_16 = FUNC_9(((void*)0), ((void*)0),
                                        &VAR_14->loc.repos_root_url,
                                        &VAR_14->loc.repos_uuid,
                                        VAR_11->wc_ctx, VAR_7,
                                        VAR_12, VAR_13);

      if (VAR_16)
        {
          if (VAR_16->apr_err != VAR_2
              && VAR_16->apr_err != VAR_1
              && VAR_16->apr_err != VAR_3)
            return FUNC_8(VAR_16);

          return FUNC_7(VAR_0, VAR_16,
                                   FUNC_1("Merge target '%s' does not exist in the "
                                     "working copy"),
                                   FUNC_6(VAR_7,
                                                          VAR_13));
        }

      VAR_14->loc.rev = VAR_4;
      VAR_14->loc.url = ((void*)0);
    }

  FUNC_0(FUNC_4(
            VAR_7, VAR_11,
            VAR_8, VAR_9, VAR_10,
            VAR_13));

  *VAR_6 = VAR_14;
  return VAR_5;
}
