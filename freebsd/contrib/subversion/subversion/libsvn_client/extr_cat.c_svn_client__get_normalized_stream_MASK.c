
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ node_status; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_wc_context_t ;
typedef int svn_subst_eol_style_t ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,char*,int ) ;
 TYPE_2__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char const*,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char* FUNC_9 (char const*,char const*,int *) ;
 int FUNC_10 (int **,char const*,int *,int *) ;
 int FUNC_11 (int **,int ,char const*,char const*,char const*,int ,char const*,int *) ;
 int FUNC_12 (int *,char const**,int ) ;
 int * FUNC_13 (int *,char const*,scalar_t__,int *,scalar_t__,int *) ;
 int FUNC_14 (int *,int *,char const**,int *,char const*,int *,int *) ;
 int FUNC_15 (int *,char const**,char const**,int *,int *,char const*,int *,int *) ;
 int FUNC_16 (int **,int *,char const*,int *,int *) ;
 int FUNC_17 (int **,int *,char const*,int *,int *) ;
 int FUNC_18 (int **,int *,char const*,int *,int *) ;
 int FUNC_19 (scalar_t__*,int *,char const*,int,scalar_t__,int *) ;
 int FUNC_20 (TYPE_1__**,int *,char const*,int *,int *) ;
 scalar_t__ VAR_14 ;

svn_error_t *
FUNC_21(svn_stream_t **VAR_15,
                                  svn_wc_context_t *VAR_16,
                                  const char *VAR_17,
                                  const svn_opt_revision_t *VAR_18,
                                  svn_boolean_t VAR_19,
                                  svn_boolean_t VAR_20,
                                  svn_cancel_func_t VAR_21,
                                  void *VAR_22,
                                  apr_pool_t *VAR_23,
                                  apr_pool_t *VAR_24)
{
  apr_hash_t *VAR_25 = ((void*)0);
  svn_subst_eol_style_t VAR_26;
  apr_hash_t *VAR_27;
  svn_string_t *VAR_28, *VAR_29, *VAR_30;
  const char *VAR_31 = ((void*)0);
  svn_boolean_t VAR_32 = VAR_0;
  svn_stream_t *VAR_33;
  svn_node_kind_t VAR_34;

  FUNC_2(FUNC_0(VAR_18->kind));

  FUNC_1(FUNC_19(&VAR_34, VAR_16, VAR_17,
                            (VAR_18->kind != VAR_13),
                            VAR_0, VAR_24));

  if (VAR_34 == VAR_12 || VAR_34 == VAR_11)
    return FUNC_6(VAR_3, ((void*)0),
                             FUNC_3("'%s' is not under version control"),
                             FUNC_5(VAR_17,
                                                    VAR_24));
  if (VAR_34 != VAR_10)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_3("'%s' refers to a directory"),
                             FUNC_5(VAR_17,
                                                    VAR_24));

  if (VAR_18->kind != VAR_13)
    {
      FUNC_1(FUNC_16(&VAR_33, VAR_16, VAR_17,
                                            VAR_23, VAR_24));
      if (VAR_33 == ((void*)0))
        return FUNC_6(VAR_2, ((void*)0),
                 FUNC_3("'%s' has no pristine version until it is committed"),
                 FUNC_5(VAR_17, VAR_24));

      FUNC_1(FUNC_17(&VAR_27, VAR_16, VAR_17,
                                        VAR_24, VAR_24));
    }
  else
    {
      svn_wc_status3_t *VAR_35;

      FUNC_1(FUNC_10(&VAR_33, VAR_17, VAR_24,
                                       VAR_23));

      FUNC_1(FUNC_18(&VAR_27, VAR_16, VAR_17, VAR_24,
                                VAR_24));
      FUNC_1(FUNC_20(&VAR_35, VAR_16, VAR_17, VAR_24,
                             VAR_24));
      if (VAR_35->node_status != VAR_14)
        VAR_32 = VAR_9;
    }

  VAR_28 = FUNC_7(VAR_27, VAR_5);
  VAR_29 = FUNC_7(VAR_27, VAR_6);
  VAR_30 = FUNC_7(VAR_27, VAR_7);

  if (VAR_28)
    FUNC_12(&VAR_26, &VAR_31, VAR_28->data);

  if (VAR_29)
    {
      svn_revnum_t VAR_36;
      const char *VAR_37;
      const char *VAR_38;
      const char *VAR_39;
      apr_time_t VAR_40;
      const char *VAR_41;
      const char *VAR_42;

      FUNC_1(FUNC_14(&VAR_36, &VAR_40, &VAR_38, VAR_16,
                                            VAR_17, VAR_24,
                                            VAR_24));
      FUNC_1(FUNC_15(((void*)0), &VAR_42, &VAR_41,
                                          ((void*)0),
                                          VAR_16, VAR_17, VAR_24,
                                          VAR_24));
      VAR_39 = FUNC_9(VAR_41, VAR_42,
                                        VAR_24);

      if (VAR_32)
        {




          VAR_37 = FUNC_4(VAR_24, "%ldM", VAR_36);
          VAR_38 = FUNC_3("(local)");

          if (! VAR_30)
            {

              FUNC_1(FUNC_8(&VAR_40, VAR_17,
                                                VAR_24));
            }
        }
      else
        {
          VAR_37 = FUNC_4(VAR_24, "%ld", VAR_36);
        }

      FUNC_1(FUNC_11(&VAR_25, VAR_29->data, VAR_37, VAR_39,
                                        VAR_41, VAR_40, VAR_38,
                                        VAR_24));
    }


  if (VAR_31 != ((void*)0) || VAR_25 != ((void*)0))
    VAR_33 = FUNC_13(
      VAR_33,
      (VAR_28 && VAR_20) ? VAR_8 : VAR_31,
      VAR_0, VAR_25, VAR_19, VAR_23);

  *VAR_15 = VAR_33;

  return VAR_4;
}
