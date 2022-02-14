
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_status3_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_3__ {struct conflict_status_walker_baton* notify_baton2; int (* notify_func2 ) (struct conflict_status_walker_baton*,int ,int *) ;int wc_ctx; int cancel_baton; int * (* cancel_func ) (int ) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_client_conflict_walk_func_t ;
struct conflict_status_walker_baton {struct conflict_status_walker_baton* notify_baton; int (* notify_func ) (struct conflict_status_walker_baton*,int ,int *) ;int * unresolved_tree_conflicts; void* resolved_a_tree_conflict; TYPE_1__* ctx; void* conflict_walk_func_baton; int conflict_walk_func; } ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (struct conflict_status_walker_baton*,char const*,int *,int *) ;
 int FUNC_8 (struct conflict_status_walker_baton*,int ,int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (struct conflict_status_walker_baton*,int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (char const*,int *) ;
 int * FUNC_12 (int ,int *,int ,int ) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char const*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_18 (int **,int ,char const*,int *,int *) ;
 int * FUNC_19 (int ,char const*,scalar_t__,void*,void*,int ,int *,int * (*) (struct conflict_status_walker_baton*,char const*,int *,int *),struct conflict_status_walker_baton*,int * (*) (int ),int ,int *) ;
 int FUNC_20 (struct conflict_status_walker_baton*,int ,int *) ;

svn_error_t *
FUNC_21(const char *VAR_8,
                         svn_depth_t VAR_9,
                         svn_client_conflict_walk_func_t VAR_10,
                         void *VAR_11,
                         svn_client_ctx_t *VAR_12,
                         apr_pool_t *VAR_13)
{
  struct conflict_status_walker_baton VAR_14;
  apr_pool_t *VAR_15 = ((void*)0);
  svn_error_t *VAR_16 = VAR_2;

  if (VAR_9 == VAR_5)
    VAR_9 = VAR_4;

  VAR_14.conflict_walk_func = VAR_10;
  VAR_14.conflict_walk_func_baton = VAR_11;
  VAR_14.ctx = VAR_12;
  VAR_14.resolved_a_tree_conflict = VAR_0;
  VAR_14.unresolved_tree_conflicts = FUNC_4(VAR_13);

  if (VAR_12->notify_func2)
    VAR_12->notify_func2(VAR_12->notify_baton2,
                      FUNC_17(
                        VAR_8,
                        VAR_7,
                        VAR_13),
                      VAR_13);


  VAR_14.notify_func = VAR_12->notify_func2;
  VAR_14.notify_baton = VAR_12->notify_baton2;
  VAR_12->notify_func2 = FUNC_20;
  VAR_12->notify_baton2 = &VAR_14;

  VAR_16 = FUNC_19(VAR_12->wc_ctx,
                           VAR_8,
                           VAR_9,
                           VAR_0 ,
                           VAR_0 ,
                           VAR_3 ,
                           ((void*)0) ,
                           FUNC_7, &VAR_14,
                           VAR_12->cancel_func, VAR_12->cancel_baton,
                           VAR_13);



  while (!VAR_16 && VAR_14.unresolved_tree_conflicts &&
         FUNC_2(VAR_14.unresolved_tree_conflicts))
    {
      apr_hash_index_t *VAR_17;
      svn_wc_status3_t *VAR_18 = ((void*)0);
      const char *VAR_19 = ((void*)0);

      if (VAR_15)
        FUNC_14(VAR_15);
      else
        VAR_15 = FUNC_15(VAR_13);

      VAR_17 = FUNC_3(VAR_13, VAR_14.unresolved_tree_conflicts);
      VAR_14.unresolved_tree_conflicts = FUNC_4(VAR_13);
      VAR_14.resolved_a_tree_conflict = VAR_0;

      for (; VAR_17 && !VAR_16; VAR_17 = FUNC_5(VAR_17))
        {
          FUNC_14(VAR_15);

          VAR_19 = FUNC_6(VAR_17);

          if (VAR_12->cancel_func)
            {
              VAR_16 = VAR_12->cancel_func(VAR_12->cancel_baton);
              if (VAR_16)
                break;
            }

          VAR_16 = FUNC_13(FUNC_18(&VAR_18, VAR_12->wc_ctx,
                                               VAR_19,
                                               VAR_15, VAR_15));
          if (VAR_16)
            break;

          VAR_16 = FUNC_13(FUNC_7(&VAR_14, VAR_19,
                                                       VAR_18, VAR_13));
          if (VAR_16)
            break;
        }

      if (!VAR_16 && !VAR_14.resolved_a_tree_conflict && VAR_19 &&
          FUNC_2(VAR_14.unresolved_tree_conflicts))
        {


          VAR_14.unresolved_tree_conflicts = ((void*)0);




          VAR_16 = FUNC_13(FUNC_7(&VAR_14, VAR_19,
                                                       VAR_18, VAR_13));
          FUNC_0(VAR_16 != ((void*)0));

          VAR_16 = FUNC_12(
                    VAR_1, VAR_16,
                    FUNC_1("Unable to resolve pending conflict on '%s'"),
                    FUNC_11(VAR_19, VAR_13));
          break;
        }
    }

  if (VAR_15)
    FUNC_16(VAR_15);

  VAR_12->notify_func2 = VAR_14.notify_func;
  VAR_12->notify_baton2 = VAR_14.notify_baton;

  if (!VAR_16 && VAR_12->notify_func2)
    VAR_12->notify_func2(VAR_12->notify_baton2,
                      FUNC_17(VAR_8,
                                          VAR_6,
                                          VAR_13),
                      VAR_13);

  return FUNC_13(VAR_16);
}
