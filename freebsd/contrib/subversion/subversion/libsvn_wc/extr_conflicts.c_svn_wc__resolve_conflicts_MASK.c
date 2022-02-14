
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,int ,int *) ;
struct TYPE_22__ {int db; } ;
typedef TYPE_2__ svn_wc_context_t ;
typedef int svn_wc_conflict_resolver_func2_t ;
typedef int svn_wc_conflict_choice_t ;
struct TYPE_23__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef TYPE_3__* (* svn_cancel_func_t ) (void*) ;
typedef void* svn_boolean_t ;
struct conflict_status_walker_baton {char const* resolve_prop; int * resolve_later; void* resolved_one; void* notify_baton; int (* notify_func ) (void*,int ,int *) ;void* cancel_baton; TYPE_3__* (* cancel_func ) (void*) ;void* conflict_baton; int conflict_func; int conflict_choice; void* resolve_tree; void* resolve_text; int db; } ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (struct conflict_status_walker_baton*,char const*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_9 (char const*,char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (char const*,int *) ;
 char* FUNC_11 (char const*,char const*) ;
 TYPE_3__* FUNC_12 (scalar_t__,TYPE_3__*,int ,int ) ;
 TYPE_3__* FUNC_13 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char const*,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_18 (TYPE_1__**,TYPE_2__*,char const*,int *,int *) ;
 TYPE_3__* FUNC_19 (TYPE_2__*,char const*,scalar_t__,void*,void*,int ,int *,int (*) (struct conflict_status_walker_baton*,char const*,TYPE_1__*,int *),struct conflict_status_walker_baton*,TYPE_3__* (*) (void*),void*,int *) ;

svn_error_t *
FUNC_20(svn_wc_context_t *VAR_11,
                          const char *VAR_12,
                          svn_depth_t VAR_13,
                          svn_boolean_t VAR_14,
                          const char *VAR_15,
                          svn_boolean_t VAR_16,
                          svn_wc_conflict_choice_t VAR_17,
                          svn_wc_conflict_resolver_func2_t VAR_18,
                          void *VAR_19,
                          svn_cancel_func_t VAR_20,
                          void *VAR_21,
                          svn_wc_notify_func2_t VAR_22,
                          void *VAR_23,
                          apr_pool_t *VAR_24)
{
  struct conflict_status_walker_baton VAR_25;
  apr_pool_t *VAR_26 = ((void*)0);
  svn_error_t *VAR_27;

  if (VAR_13 == VAR_7)
    VAR_13 = VAR_6;

  VAR_25.db = VAR_11->db;
  VAR_25.resolve_text = VAR_14;
  VAR_25.resolve_prop = VAR_15;
  VAR_25.resolve_tree = VAR_16;
  VAR_25.conflict_choice = VAR_17;

  VAR_25.conflict_func = VAR_18;
  VAR_25.conflict_baton = VAR_19;

  VAR_25.cancel_func = VAR_20;
  VAR_25.cancel_baton = VAR_21;

  VAR_25.notify_func = VAR_22;
  VAR_25.notify_baton = VAR_23;

  VAR_25.resolved_one = VAR_0;
  VAR_25.resolve_later = (VAR_13 != VAR_4)
                          ? FUNC_5(VAR_24)
                          : ((void*)0);

  if (VAR_22)
    VAR_22(VAR_23,
                FUNC_17(VAR_12,
                                    VAR_10,
                                    VAR_24),
                VAR_24);

  VAR_27 = FUNC_19(VAR_11,
                           VAR_12,
                           VAR_13,
                           VAR_0 ,
                           VAR_0 ,
                           VAR_3 ,
                           ((void*)0) ,
                           FUNC_8, &VAR_25,
                           VAR_20, VAR_21,
                           VAR_24);



  while (!VAR_27 && VAR_25.resolve_later && FUNC_3(VAR_25.resolve_later))
    {
      apr_hash_index_t *VAR_28;
      svn_wc_status3_t *VAR_29 = ((void*)0);
      const char *VAR_30 = ((void*)0);

      if (VAR_26)
        FUNC_14(VAR_26);
      else
        VAR_26 = FUNC_15(VAR_24);

      VAR_28 = FUNC_4(VAR_24, VAR_25.resolve_later);
      VAR_25.resolve_later = FUNC_5(VAR_24);
      VAR_25.resolved_one = VAR_0;

      for (; VAR_28 && !VAR_27; VAR_28 = FUNC_6(VAR_28))
        {
          const char *VAR_31;
          FUNC_14(VAR_26);

          VAR_30 = FUNC_7(VAR_28);

          if (VAR_20)
            FUNC_0(VAR_20(VAR_21));

          VAR_31 = FUNC_11(VAR_12,
                                             VAR_30);

          if (!VAR_31
              || (VAR_13 >= VAR_4
                  && VAR_13 < VAR_6
                  && FUNC_9(VAR_31, '/')))
            {
              continue;
            }

          FUNC_0(FUNC_18(&VAR_29, VAR_11, VAR_30,
                                 VAR_26, VAR_26));

          if (VAR_13 == VAR_5
              && VAR_29->kind == VAR_8)
            continue;

          VAR_27 = FUNC_13(FUNC_8(&VAR_25, VAR_30,
                                                       VAR_29, VAR_24));
        }






      if (!VAR_25.resolved_one && !VAR_27 && VAR_30
          && FUNC_3(VAR_25.resolve_later))
        {



          VAR_25.resolve_later = ((void*)0);


          VAR_27 = FUNC_13(FUNC_8(&VAR_25, VAR_30,
                                                       VAR_29, VAR_24));

          FUNC_1(VAR_27 != ((void*)0));

          VAR_27 = FUNC_12(
                    VAR_1, VAR_27,
                    FUNC_2("Unable to resolve pending conflict on '%s'"),
                    FUNC_10(VAR_30, VAR_24));
          break;
        }
    }

  if (VAR_26)
    FUNC_16(VAR_26);

  if (VAR_27 && VAR_27->apr_err != VAR_1)
    VAR_27 = FUNC_12(
                VAR_1, VAR_27,
                FUNC_2("Unable to resolve conflicts on '%s'"),
                FUNC_10(VAR_12, VAR_24));

  FUNC_0(VAR_27);

  if (VAR_22)
    VAR_22(VAR_23,
                FUNC_17(VAR_12,
                                    VAR_9,
                                    VAR_24),
                VAR_24);

  return VAR_2;
}
