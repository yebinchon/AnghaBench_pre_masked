
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int svn_wc_entry_t ;
struct TYPE_22__ {TYPE_2__* (* handle_error ) (char const*,TYPE_2__*,void*,int *) ;TYPE_2__* (* found_entry ) (char const*,int const*,void*,int *) ;} ;
typedef TYPE_1__ svn_wc_entry_callbacks2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_23__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (char const*,TYPE_2__*,void*,int *) ;
 TYPE_2__* FUNC_3 (char const*,TYPE_2__*,void*,int *) ;
 TYPE_2__* FUNC_4 (char const*,int const*,void*,int *) ;
 TYPE_2__* FUNC_5 (char const*,TYPE_2__*,void*,int *) ;
 TYPE_2__* FUNC_6 (char const*,TYPE_2__*,void*,int *) ;
 int FUNC_7 (char const**,char const*,int *) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (int const**,int *,char const*,int ,scalar_t__,int *,int *) ;
 TYPE_2__* FUNC_15 (char const*,int *,TYPE_1__ const*,void*,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_16(const char *VAR_10,
                     svn_wc_adm_access_t *VAR_11,
                     const svn_wc_entry_callbacks2_t *VAR_12,
                     void *VAR_13,
                     svn_depth_t VAR_14,
                     svn_boolean_t VAR_15,
                     svn_cancel_func_t VAR_16,
                     void *VAR_17,
                     apr_pool_t *VAR_18)
{
  const char *VAR_19;
  svn_wc__db_t *VAR_20 = FUNC_12(VAR_11);
  svn_error_t *VAR_21;
  svn_node_kind_t VAR_22;
  svn_wc__db_status_t VAR_23;

  FUNC_0(FUNC_7(&VAR_19, VAR_10, VAR_18));
  VAR_21 = FUNC_13(&VAR_23, &VAR_22, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0),
                             VAR_20, VAR_19,
                             VAR_18, VAR_18);
  if (VAR_21)
    {
      if (VAR_21->apr_err != VAR_3)
        return FUNC_11(VAR_21);

      FUNC_9(VAR_21);
      return VAR_12->handle_error(
        VAR_10, FUNC_10(VAR_2, ((void*)0),
                                FUNC_1("'%s' is not under version control"),
                                FUNC_8(VAR_19, VAR_18)),
        VAR_13, VAR_18);
    }

  if (VAR_22 == VAR_6
      || VAR_23 == VAR_7
      || VAR_23 == VAR_9)
    {
      const svn_wc_entry_t *VAR_24;






      if (!VAR_15
          && (VAR_23 == VAR_8
              || VAR_23 == VAR_7
              || VAR_23 == VAR_9))
        {







          return VAR_12->handle_error(
                            VAR_10, FUNC_10(
                              VAR_2, ((void*)0),
                              FUNC_1("'%s' is not under version control"),
                              FUNC_8(VAR_19, VAR_18)),
                            VAR_13, VAR_18);
        }

      FUNC_0(FUNC_14(&VAR_24, VAR_20, VAR_19, VAR_0,
                                VAR_6, VAR_18, VAR_18));

      VAR_21 = VAR_12->found_entry(VAR_10, VAR_24, VAR_13, VAR_18);
      if (VAR_21)
        return VAR_12->handle_error(VAR_10, VAR_21, VAR_13, VAR_18);

      return VAR_4;
    }

  if (VAR_22 == VAR_5)
    return FUNC_15(VAR_10, VAR_11, VAR_12, VAR_13,
                         VAR_14, VAR_15, VAR_16, VAR_17,
                         VAR_18);

  return VAR_12->handle_error(
       VAR_10, FUNC_10(VAR_1, ((void*)0),
                               FUNC_1("'%s' has an unrecognized node kind"),
                               FUNC_8(VAR_19, VAR_18)),
       VAR_13, VAR_18);
}
