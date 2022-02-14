
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_opt_revision_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_19__ {int wc_ctx; scalar_t__ conflict_func2; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int *,TYPE_2__*,int *) ;
 int FUNC_4 (char const**,char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (char const**,int ,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_9 (int ,char const*,int *) ;
 TYPE_1__* FUNC_10 (int *,int *,char const*,char const*,char const*,int const*,int const*,int ,int,int,int,int,int*,TYPE_2__*,int *) ;

svn_error_t *
FUNC_11(svn_revnum_t *VAR_3,
                            const char *VAR_4,
                            const char *VAR_5,
                            const svn_opt_revision_t *VAR_6,
                            const svn_opt_revision_t *VAR_7,
                            svn_depth_t VAR_8,
                            svn_boolean_t VAR_9,
                            svn_boolean_t VAR_10,
                            svn_boolean_t VAR_11,
                            svn_boolean_t VAR_12,
                            svn_boolean_t *VAR_13,
                            svn_client_ctx_t *VAR_14,
                            apr_pool_t *VAR_15)
{
  const char *VAR_16, *VAR_17;
  svn_boolean_t VAR_18;
  svn_error_t *VAR_19, *VAR_20, *VAR_21;
  apr_hash_t *VAR_22
    = VAR_14->conflict_func2 ? FUNC_2(VAR_15) : ((void*)0);

  FUNC_1(VAR_4);

  FUNC_0(FUNC_4(&VAR_16, VAR_4, VAR_15));



  VAR_19 = FUNC_8(&VAR_17,
                                   VAR_14->wc_ctx, VAR_16, VAR_2,
                                   VAR_15, VAR_15);
  if (VAR_19 && VAR_19->apr_err != VAR_0)
    return FUNC_7(VAR_19);

  VAR_18 = (VAR_19 == VAR_1);
  FUNC_5(VAR_19);

  VAR_20 = FUNC_10(VAR_3, VAR_22,
                         VAR_16, VAR_17,
                         VAR_5, VAR_6, VAR_7,
                         VAR_8, VAR_9,
                         VAR_10,
                         VAR_11, VAR_12,
                         VAR_13, VAR_14, VAR_15);



  if (! VAR_20 && VAR_14->conflict_func2)
    {
      VAR_20 = FUNC_3(((void*)0), VAR_22, VAR_14, VAR_15);
    }

  if (VAR_18)
    VAR_21 = FUNC_9(VAR_14->wc_ctx, VAR_17, VAR_15);
  else
    VAR_21 = VAR_1;

  return FUNC_6(VAR_20, VAR_21);
}
