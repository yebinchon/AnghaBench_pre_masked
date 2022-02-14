
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_12__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef char const* svn_client_conflict_option_id_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const**,scalar_t__*,scalar_t__*,int *,int *,int *) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char* FUNC_8 (int ,int *) ;
 int FUNC_9 (char const*,char const*) ;
 TYPE_1__* FUNC_10 (int ,TYPE_1__*,int ,char const*,...) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char const**,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_14 (scalar_t__*,scalar_t__*,char const**,int *,int *,int *,int ,char const*,int ,int *,int *) ;
 int FUNC_15 (int *,int ,char const*,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_16(
  svn_client_conflict_t *VAR_7,
  svn_client_conflict_option_t *VAR_8,
  svn_client_ctx_t *VAR_9,
  apr_pool_t *VAR_10)
{
  const char *VAR_11;
  svn_client_conflict_option_id_t VAR_12;
  const char *VAR_13;
  svn_wc_operation_t VAR_14;
  const char *VAR_15;
  svn_revnum_t VAR_16;
  svn_node_kind_t VAR_17;
  const char *VAR_18;
  svn_revnum_t VAR_19;
  svn_node_kind_t VAR_20;
  const char *VAR_21;
  svn_boolean_t VAR_22;
  svn_error_t *VAR_23;

  VAR_11 = FUNC_5(VAR_7);
  VAR_12 = FUNC_7(VAR_8);
  FUNC_0(FUNC_13(&VAR_13, VAR_9->wc_ctx,
                             VAR_11, VAR_10,
                             VAR_10));
  VAR_14 = FUNC_6(VAR_7);
  FUNC_1(VAR_14 == VAR_6);

  FUNC_0(FUNC_4(
            &VAR_15, &VAR_16,
            &VAR_17, VAR_7, VAR_10,
            VAR_10));

  VAR_21 = FUNC_8(
                          FUNC_9(VAR_13,
                                                   VAR_11),
                          VAR_10);


  VAR_23 = FUNC_14(&VAR_20, &VAR_19, &VAR_18,
                              ((void*)0), ((void*)0), ((void*)0), VAR_9->wc_ctx, VAR_11,
                              VAR_0, VAR_10, VAR_10);
  if (VAR_23 && VAR_23->apr_err == VAR_2)
    {
      if (VAR_12 == VAR_4)
        return FUNC_10(VAR_1, VAR_23,
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected a base node but found none)"),
                                 VAR_21);
      else if (VAR_12 ==
               VAR_5)
        return FUNC_10(VAR_1, VAR_23,
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected a base node but found none)"),
                                 VAR_21);
      else
        return FUNC_10(VAR_1, VAR_23,
                                 FUNC_2("Unexpected option id '%d'"), VAR_12);
    }
  else if (VAR_23)
    return FUNC_11(VAR_23);

  if (VAR_20 != VAR_17)
    {
      if (VAR_12 == VAR_4)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected base node kind '%s', "
                                   "but found '%s')"),
                                 VAR_21,
                                 FUNC_12(VAR_17),
                                 FUNC_12(VAR_20));
      else if (VAR_12 ==
               VAR_5)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected base node kind '%s', "
                                   "but found '%s')"),
                                  VAR_21,
                                 FUNC_12(VAR_17),
                                 FUNC_12(VAR_20));
      else
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Unexpected option id '%d'"), VAR_12);
    }

  if (FUNC_3(VAR_18, VAR_15) != 0 ||
      VAR_19 != VAR_16)
    {
      if (VAR_12 == VAR_4)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected base node from '^/%s@%ld', "
                                   "but found '^/%s@%ld')"),
                                 VAR_21,
                                 VAR_15,
                                 VAR_16,
                                 VAR_18, VAR_19);
      else if (VAR_12 ==
               VAR_5)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected base node from '^/%s@%ld', "
                                   "but found '^/%s@%ld')"),
                                 VAR_21,
                                 VAR_15,
                                 VAR_16,
                                 VAR_18, VAR_19);
      else
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Unexpected option id '%d'"), VAR_12);
    }

  FUNC_0(FUNC_15(&VAR_22, VAR_9->wc_ctx, VAR_11,
                                VAR_10));
  if (!VAR_22)
    {
      if (VAR_12 == VAR_4)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected an added item, but the item "
                                   "is not added)"),
                                 VAR_21);

      else if (VAR_12 ==
               VAR_5)
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Cannot resolve tree conflict on '%s' "
                                   "(expected an added item, but the item "
                                   "is not added)"),
                                 VAR_21);
      else
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_2("Unexpected option id '%d'"), VAR_12);
    }

  return VAR_3;
}
