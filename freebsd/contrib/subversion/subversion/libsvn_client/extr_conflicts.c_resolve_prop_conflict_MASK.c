
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_wc_conflict_choice_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int wc_ctx; int notify_baton2; int notify_func2; } ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_15__ {int * legacy_prop_conflict_propname; int prop_conflicts; int resolved_props; } ;
typedef TYPE_4__ svn_client_conflict_t ;
struct TYPE_12__ {char* propname; int * merged_propval; } ;
struct TYPE_13__ {TYPE_1__ prop; } ;
struct TYPE_16__ {TYPE_2__ type_data; } ;
typedef TYPE_5__ svn_client_conflict_option_t ;
typedef scalar_t__ svn_client_conflict_option_id_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int *) ;
 char const* FUNC_6 (int ,char const*) ;
 int FUNC_7 (scalar_t__) ;
 char* FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,char const*,TYPE_5__*) ;
 int FUNC_12 (char const*,int *) ;
 int * FUNC_13 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_14 (int ,char const*,char const*,int ,int const*,int ,int ,int *) ;
 int FUNC_15 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_client_conflict_option_t *VAR_2,
                      svn_client_conflict_t *VAR_3,
                      svn_client_ctx_t *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_client_conflict_option_id_t VAR_6;
  svn_wc_conflict_choice_t VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10 = VAR_2->type_data.prop.propname;
  svn_error_t *VAR_11;
  const svn_string_t *VAR_12;

  VAR_6 = FUNC_9(VAR_2);
  VAR_7 = FUNC_7(VAR_6);
  VAR_8 = FUNC_8(VAR_3);

  if (VAR_6 == VAR_1)
    VAR_12 = VAR_2->type_data.prop.merged_propval;
  else
    VAR_12 = ((void*)0);

  FUNC_0(FUNC_13(&VAR_9, VAR_4->wc_ctx,
                                                 VAR_8,
                                                 VAR_5, VAR_5));
  VAR_11 = FUNC_14(VAR_4->wc_ctx, VAR_8,
                                            VAR_10, VAR_7,
                                            VAR_12,
                                            VAR_4->notify_func2,
                                            VAR_4->notify_baton2,
                                            VAR_5);
  VAR_11 = FUNC_10(VAR_11, FUNC_15(VAR_4->wc_ctx,
                                                                 VAR_9,
                                                                 VAR_5));
  FUNC_12(VAR_8, VAR_5);
  FUNC_0(VAR_11);

  if (VAR_10[0] == '\0')
    {
      apr_hash_index_t *VAR_13;


      for (VAR_13 = FUNC_2(VAR_5, VAR_3->prop_conflicts);
           VAR_13;
           VAR_13 = FUNC_3(VAR_13))
        {
          const char *VAR_14 = FUNC_5(VAR_13);

          FUNC_11(VAR_3->resolved_props,
                        FUNC_6(FUNC_4(VAR_3->resolved_props),
                                    VAR_14),
                        VAR_2);
          FUNC_11(VAR_3->prop_conflicts, VAR_14, ((void*)0));
        }

      VAR_3->legacy_prop_conflict_propname = ((void*)0);
    }
  else
    {
      FUNC_11(VAR_3->resolved_props,
                    FUNC_6(FUNC_4(VAR_3->resolved_props),
                                VAR_10),
                   VAR_2);
      FUNC_11(VAR_3->prop_conflicts, VAR_10, ((void*)0));

      if (FUNC_1(VAR_3->prop_conflicts) > 0)
        VAR_3->legacy_prop_conflict_propname =
            FUNC_5(FUNC_2(VAR_5,
                                             VAR_3->prop_conflicts));
      else
        VAR_3->legacy_prop_conflict_propname = ((void*)0);
    }

  return VAR_0;
}
