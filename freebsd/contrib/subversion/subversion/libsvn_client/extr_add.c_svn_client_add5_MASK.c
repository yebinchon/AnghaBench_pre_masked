
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_14__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,int ,char const*,scalar_t__,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int ,scalar_t__,scalar_t__,scalar_t__,char const*,TYPE_2__*,int *) ;
 int FUNC_4 (char const**,TYPE_2__*,char const*,int *,int *) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const**,char const*,int *) ;
 char const* FUNC_8 (char const*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int ,int *,int ,char const*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char const*,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_13 (char const*) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (scalar_t__*,int ,char const*,int *) ;

svn_error_t *
FUNC_17(const char *VAR_6,
                svn_depth_t VAR_7,
                svn_boolean_t VAR_8,
                svn_boolean_t VAR_9,
                svn_boolean_t VAR_10,
                svn_boolean_t VAR_11,
                svn_client_ctx_t *VAR_12,
                apr_pool_t *VAR_13)
{
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  svn_boolean_t VAR_17;
  svn_error_t *VAR_18;

  if (FUNC_13(VAR_6))
    return FUNC_10(VAR_2, ((void*)0),
                             FUNC_2("'%s' is not a local path"), VAR_6);

  FUNC_0(FUNC_7(&VAR_15, VAR_6, VAR_13));





  VAR_18 = FUNC_16(&VAR_17, VAR_12->wc_ctx, VAR_15,
                          VAR_13);
  if (VAR_18)
    {
      if (VAR_18->apr_err != VAR_4
          && VAR_18->apr_err != VAR_3)
        {
          return FUNC_11(VAR_18);
        }

      FUNC_9(VAR_18);
      VAR_18 = ((void*)0);
      VAR_17 = VAR_0;
    }
  if (VAR_17)
    {
        {
          if (! VAR_8)
            return FUNC_10(
                                 VAR_1, ((void*)0),
                                 FUNC_2("'%s' is already under version control"),
                                 FUNC_8(VAR_15,
                                                        VAR_13));
        }
    }

  if (VAR_17)
    VAR_14 = VAR_15;
  else
    VAR_14 = FUNC_6(VAR_15, VAR_13);

  VAR_16 = ((void*)0);
  if (VAR_11 && !VAR_17)
    {
      apr_pool_t *VAR_19;
      const char *VAR_20;

      VAR_19 = FUNC_14(VAR_13);
      FUNC_0(FUNC_4(&VAR_20, VAR_12,
                                   VAR_14, VAR_13, VAR_19));
      if (FUNC_5(VAR_20, VAR_14) != 0)
        VAR_16 = VAR_20;
      FUNC_15(VAR_19);
    }

  FUNC_1(
    FUNC_3(VAR_15, VAR_7, VAR_8, VAR_9, VAR_10,
        VAR_16, VAR_12, VAR_13),
    VAR_12->wc_ctx, (VAR_16 ? VAR_16
                                          : VAR_14),
    VAR_0 , VAR_13);
  return VAR_5;
}
