
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_opt_revision_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_14__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 TYPE_1__* FUNC_8 (int **,char const*,char const*,int const*,int const*,scalar_t__*,int ,int const*,TYPE_2__*,int *,int *) ;
 TYPE_1__* FUNC_9 (char const**,char const*,int *) ;
 char* FUNC_10 (char const*,int ,int *) ;
 int FUNC_11 (char const*,char const*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,char const*,int *) ;
 scalar_t__ FUNC_14 (char const*) ;
 TYPE_1__* FUNC_15 (scalar_t__*,int ,char const*,int *) ;

svn_error_t *
FUNC_16(apr_hash_t **VAR_3,
                    const char *VAR_4,
                    const char *VAR_5,
                    const svn_opt_revision_t *VAR_6,
                    const svn_opt_revision_t *VAR_7,
                    svn_revnum_t *VAR_8,
                    svn_depth_t VAR_9,
                    const apr_array_header_t *VAR_10,
                    svn_client_ctx_t *VAR_11,
                    apr_pool_t *VAR_12)
{
  const char *VAR_13;
  apr_hash_t *VAR_14;
  svn_error_t *VAR_15;

  if (FUNC_14(VAR_5))
    VAR_13 = VAR_5;
  else
    FUNC_0(FUNC_9(&VAR_13, VAR_5, VAR_12));

  VAR_15 = FUNC_8(&VAR_14, VAR_4, VAR_13,
                            VAR_6, VAR_7, VAR_8,
                            VAR_9, VAR_10, VAR_11, VAR_12, VAR_12);

  if (VAR_15 && VAR_15->apr_err == VAR_1)
    {
      VAR_15->apr_err = VAR_0;
      return FUNC_12(VAR_15);
    }
  else
    FUNC_0(VAR_15);

  if (VAR_8
        && !FUNC_14(VAR_5)
        && !FUNC_1(*VAR_8))
    {


      svn_boolean_t VAR_16;

      FUNC_0(FUNC_15(&VAR_16, VAR_11->wc_ctx, VAR_13, VAR_12));
      if (VAR_16)
        *VAR_8 = 0;
    }


  if (!FUNC_14(VAR_5) && FUNC_7(VAR_13, VAR_5) != 0)
    {
      apr_hash_index_t *VAR_17;

      *VAR_3 = FUNC_3(VAR_12);
      for (VAR_17 = FUNC_2(VAR_12, VAR_14); VAR_17;
            VAR_17 = FUNC_4(VAR_17))
        {
          const char *VAR_18 = FUNC_5(VAR_17);
          svn_string_t *VAR_19 = FUNC_6(VAR_17);
          const char *VAR_20 = FUNC_10(VAR_5,
                                     FUNC_11(VAR_13, VAR_18),
                                     VAR_12);

          FUNC_13(*VAR_3, VAR_20, VAR_19);
        }
    }
  else
    *VAR_3 = VAR_14;

  return VAR_2;
}
