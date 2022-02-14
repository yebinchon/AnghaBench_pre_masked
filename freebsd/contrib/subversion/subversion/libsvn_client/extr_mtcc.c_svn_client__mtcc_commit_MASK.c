
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int svn_wc_notify_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_16__ {int * (* abort_edit ) (void*,int *) ;int * (* close_edit ) (void*,int *) ;int * (* open_root ) (void*,int ,int *,void**) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_client_commit_item3_t ;
struct TYPE_17__ {int pool; TYPE_4__* ctx; int base_revision; TYPE_10__* root_op; int ra_session; } ;
typedef TYPE_2__ svn_client__mtcc_t ;
typedef int item ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_18__ {int notify_baton2; int (* notify_func2 ) (int ,int *,int *) ;} ;
struct TYPE_15__ {scalar_t__ kind; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (TYPE_10__*,char const*,char const*,int *,int *,int *) ;
 int * FUNC_5 (int *,int,int) ;
 int * FUNC_6 (TYPE_1__ const*,TYPE_10__*,char*,int ,void*,char const*,TYPE_4__*,int *) ;
 int * FUNC_7 (char const*,TYPE_2__*,int *) ;
 int * FUNC_8 (void*,int ,int *,void**) ;
 int FUNC_9 (int ,int *,int *) ;
 int * FUNC_10 (void*,int *) ;
 int * FUNC_11 (void*,int *) ;
 int * FUNC_12 (int **,int *,char const*,TYPE_4__*,int *) ;
 int * FUNC_13 (char const**,char const**,int *,TYPE_4__*,int *) ;
 int * FUNC_14 (int *,char const*,int *,TYPE_4__*,int ,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *,int *) ;
 int * FUNC_17 (int ,int *,int ,char const*) ;
 int * FUNC_18 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_19 (int ) ;
 int * FUNC_20 (int ,char*,int ,scalar_t__*,int *) ;
 int * FUNC_21 (int ,TYPE_1__ const**,void**,int *,int ,void*,int *,int ,int ) ;
 int * FUNC_22 (int ,char const**,int *) ;
 int * FUNC_23 (int ,char const*,int *) ;
 int FUNC_24 (char const**,char const**,char const*,int *) ;
 int * FUNC_25 (char const*,int ,int *) ;
 int VAR_5 ;

svn_error_t *
FUNC_26(apr_hash_t *VAR_6,
                        svn_commit_callback2_t VAR_7,
                        void *VAR_8,
                        svn_client__mtcc_t *VAR_9,
                        apr_pool_t *VAR_10)
{
  const svn_delta_editor_t *VAR_11;
  void *VAR_12;
  void *VAR_13;
  apr_hash_t *VAR_14;
  svn_node_kind_t VAR_15;
  svn_error_t *VAR_16;
  const char *VAR_17;
  const char *VAR_18;

  if (FUNC_0(VAR_9))
    {

      FUNC_19(VAR_9->pool);
      return VAR_3;
    }

  FUNC_2(FUNC_22(VAR_9->ra_session, &VAR_17, VAR_10));

  if (VAR_9->root_op->kind != VAR_1)
    {
      const char *VAR_19;

      FUNC_24(&VAR_17, &VAR_19, VAR_17, VAR_10);

      if (*VAR_19)
        {
          FUNC_2(FUNC_7(VAR_17, VAR_9, VAR_10));

          FUNC_2(FUNC_23(VAR_9->ra_session, VAR_17, VAR_10));
        }
    }


  if (FUNC_1(VAR_9->ctx))
    {
      svn_client_commit_item3_t *VAR_20;
      const char *VAR_21;
      apr_array_header_t *VAR_22
                = FUNC_5(VAR_10, 32, sizeof(VAR_20));

      FUNC_2(FUNC_4(VAR_9->root_op, VAR_17, VAR_17,
                               VAR_22, VAR_10, VAR_10));

      FUNC_2(FUNC_13(&VAR_18, &VAR_21, VAR_22,
                                      VAR_9->ctx, VAR_10));

      if (! VAR_18)
        return VAR_3;
    }
  else
    VAR_18 = "";

  FUNC_2(FUNC_12(&VAR_14, VAR_6,
                                           VAR_18, VAR_9->ctx, VAR_10));




  VAR_16 = FUNC_20(VAR_9->ra_session, "", VAR_9->base_revision, &VAR_15,
                          VAR_10);

  if (VAR_16)
    {
      svn_error_t *VAR_23 = FUNC_14(&VAR_9->ra_session,
                                                      VAR_17,
                                                      ((void*)0), VAR_9->ctx,
                                                      VAR_9->pool,
                                                      VAR_10);

      if (VAR_23)
        {
          FUNC_19(VAR_9->pool);
          return FUNC_18(FUNC_16(VAR_16, VAR_23));
        }
      FUNC_15(VAR_16);

      FUNC_2(FUNC_20(VAR_9->ra_session, "",
                                VAR_9->base_revision, &VAR_15, VAR_10));
    }

  if (VAR_15 != VAR_4)
    return FUNC_17(VAR_2, ((void*)0),
                             FUNC_3("Can't commit to '%s' because it "
                               "is not a directory"),
                             VAR_17);




  FUNC_2(FUNC_21(VAR_9->ra_session, &VAR_11, &VAR_12,
                                    VAR_14,
                                    VAR_7, VAR_8,
                                    ((void*)0) ,
                                    VAR_0 ,
                                    VAR_9->pool));

  VAR_16 = VAR_11->open_root(VAR_12, VAR_9->base_revision, VAR_10, &VAR_13);

  if (!VAR_16)
    VAR_16 = FUNC_6(VAR_11, VAR_9->root_op, "", VAR_9->base_revision,
                           VAR_13, VAR_17, VAR_9->ctx, VAR_10);

  if (!VAR_16)
    {
      if (VAR_9->ctx->notify_func2)
        {
          svn_wc_notify_t *VAR_24;
          VAR_24 = FUNC_25(VAR_17,
                                            VAR_5,
                                            VAR_10);
          VAR_9->ctx->notify_func2(VAR_9->ctx->notify_baton2, VAR_24,
                                  VAR_10);
        }
      FUNC_2(VAR_11->close_edit(VAR_12, VAR_10));
    }
  else
    VAR_16 = FUNC_16(VAR_16,
                                   VAR_11->abort_edit(VAR_12, VAR_10));

  FUNC_19(VAR_9->pool);

  return FUNC_18(VAR_16);
}
