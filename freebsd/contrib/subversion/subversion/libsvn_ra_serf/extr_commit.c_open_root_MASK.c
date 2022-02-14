
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef void* svn_revnum_t ;
struct TYPE_24__ {int code; } ;
struct TYPE_25__ {char* method; TYPE_2__ sline; struct TYPE_25__* response_baton; int response_handler; void* path; TYPE_8__* commit_ctx; struct TYPE_25__* handler; int * header_delegate_baton; int header_delegate; int * body_delegate_baton; int body_delegate; int body_type; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
struct TYPE_26__ {int name; int value; } ;
typedef TYPE_4__ svn_prop_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_27__ {char const* path; void* prop_changes; int base_revision; int * pool; int * commit_ctx; } ;
typedef TYPE_5__ proppatch_context_t ;
typedef TYPE_3__ post_response_ctx_t ;
struct TYPE_28__ {char* relpath; char* name; char const* url; int * pool; void* base_revision; TYPE_8__* commit_ctx; void* prop_changes; } ;
typedef TYPE_7__ dir_context_t ;
struct TYPE_29__ {char const* txn_root_url; char* txn_url; char* baseline_url; TYPE_9__* session; int * revprop_table; int * pool; void* checked_in_url; int vcc_url; void* activity_url; int open_batons; } ;
typedef TYPE_8__ commit_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_23__ {int path; } ;
struct TYPE_30__ {char* activity_collection_url; TYPE_1__ session_url; void* me_resource; int supported_posts; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_9__*) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_4__* FUNC_8 (int *,int) ;
 void* FUNC_9 (int *,int) ;
 void* FUNC_10 (int *,char const*) ;
 int FUNC_11 (TYPE_7__*,int *) ;
 int VAR_4 ;
 int FUNC_12 (char const**,TYPE_9__*,char*,void*,void*,int *,int *) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_9__*,TYPE_5__*,int *) ;
 int VAR_6 ;
 int * FUNC_14 (int ,int *,int ) ;
 int * FUNC_15 (int ) ;
 int * FUNC_16 (int ,char*) ;
 int FUNC_17 (void*,int ,TYPE_4__*) ;
 void* FUNC_18 (char const*,char const*,int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_22 (TYPE_9__*,int *) ;
 int FUNC_23 (int *,TYPE_9__*,int *) ;
 int VAR_7 ;
 int FUNC_24 (char const**,int ,TYPE_9__*,int *) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (char const**,TYPE_9__*,int *,int *) ;
 char const* FUNC_27 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_28(void *VAR_8,
          svn_revnum_t VAR_9,
          apr_pool_t *VAR_10,
          void **VAR_11)
{
  commit_context_t *VAR_12 = VAR_8;
  svn_ra_serf__handler_t *VAR_13;
  proppatch_context_t *VAR_14;
  dir_context_t *VAR_15;
  apr_hash_index_t *VAR_16;
  const char *VAR_17 = ((void*)0);
  apr_pool_t *VAR_18 = FUNC_19(VAR_10);

  VAR_12->open_batons++;

  if (FUNC_1(VAR_12->session))
    {
      post_response_ctx_t *VAR_19;
      const char *VAR_20;
      svn_boolean_t VAR_21
        = (((void*)0) != FUNC_16(VAR_12->session->supported_posts,
                                 "create-txn-with-props"));


      VAR_13 = FUNC_22(VAR_12->session, VAR_18);

      VAR_13->method = "POST";
      VAR_13->body_type = VAR_3;
      VAR_13->body_delegate = VAR_4;
      VAR_13->body_delegate_baton =
          VAR_21 ? VAR_12->revprop_table : ((void*)0);
      VAR_13->header_delegate = VAR_6;
      VAR_13->header_delegate_baton = ((void*)0);
      VAR_13->path = VAR_12->session->me_resource;

      VAR_19 = FUNC_9(VAR_18, sizeof(*VAR_19));
      VAR_19->handler = VAR_13;
      VAR_19->commit_ctx = VAR_12;

      VAR_13->response_handler = VAR_5;
      VAR_13->response_baton = VAR_19;

      FUNC_0(FUNC_21(VAR_13, VAR_18));

      if (VAR_13->sline.code != 201)
        return FUNC_15(FUNC_25(VAR_13));

      if (! (VAR_12->txn_root_url && VAR_12->txn_url))
        {
          return FUNC_14(
            VAR_0, ((void*)0),
            FUNC_2("POST request did not return transaction information"));
        }


      FUNC_0(FUNC_24(
                                        &VAR_20,
                                        VAR_12->session->session_url.path,
                                        VAR_12->session,
                                        VAR_18));
      VAR_12->txn_root_url = FUNC_18(
                                        VAR_12->txn_root_url,
                                        VAR_20, VAR_12->pool);


      VAR_15 = FUNC_9(VAR_10, sizeof(*VAR_15));
      VAR_15->pool = VAR_10;
      VAR_15->commit_ctx = VAR_12;
      VAR_15->base_revision = VAR_9;
      VAR_15->relpath = "";
      VAR_15->name = "";
      VAR_15->prop_changes = FUNC_4(VAR_15->pool);
      VAR_15->url = FUNC_10(VAR_15->pool, VAR_12->txn_root_url);



      VAR_17 = VAR_21 ? ((void*)0) : VAR_12->txn_url;
    }
  else
    {
      const char *VAR_22 = VAR_12->session->activity_collection_url;

      if (!VAR_22)
        FUNC_0(FUNC_26(
                                    &VAR_22,
                                    VAR_12->session,
                                    VAR_18, VAR_18));

      VAR_12->activity_url = FUNC_18(
                                    VAR_22,
                                    FUNC_27(VAR_18),
                                    VAR_12->pool);


      VAR_13 = FUNC_22(VAR_12->session, VAR_18);

      VAR_13->method = "MKACTIVITY";
      VAR_13->path = VAR_12->activity_url;

      VAR_13->response_handler = VAR_7;
      VAR_13->response_baton = VAR_13;

      FUNC_0(FUNC_21(VAR_13, VAR_18));

      if (VAR_13->sline.code != 201)
        return FUNC_15(FUNC_25(VAR_13));


      FUNC_0(FUNC_23(&(VAR_12->vcc_url),
                                        VAR_12->session, VAR_18));



      VAR_15 = FUNC_9(VAR_10, sizeof(*VAR_15));
      VAR_15->pool = VAR_10;
      VAR_15->commit_ctx = VAR_12;
      VAR_15->base_revision = VAR_9;
      VAR_15->relpath = "";
      VAR_15->name = "";
      VAR_15->prop_changes = FUNC_4(VAR_15->pool);

      FUNC_0(FUNC_12(&VAR_15->url, VAR_15->commit_ctx->session,
                              VAR_15->relpath,
                              VAR_15->base_revision, VAR_12->checked_in_url,
                              VAR_15->pool, VAR_18));
      VAR_12->checked_in_url = FUNC_10(VAR_12->pool, VAR_15->url);


      FUNC_0(FUNC_11(VAR_15, VAR_18));

      VAR_17 = VAR_12->baseline_url;
    }




  if (VAR_17)
    {
      VAR_14 = FUNC_9(VAR_18, sizeof(*VAR_14));
      VAR_14->pool = VAR_18;
      VAR_14->commit_ctx = ((void*)0);
      VAR_14->path = VAR_17;
      VAR_14->prop_changes = FUNC_4(VAR_14->pool);
      VAR_14->base_revision = VAR_1;

      for (VAR_16 = FUNC_3(VAR_18, VAR_12->revprop_table);
           VAR_16;
           VAR_16 = FUNC_5(VAR_16))
        {
          svn_prop_t *VAR_23 = FUNC_8(VAR_18, sizeof(*VAR_23));

          VAR_23->name = FUNC_6(VAR_16);
          VAR_23->value = FUNC_7(VAR_16);

          FUNC_17(VAR_14->prop_changes, VAR_23->name, VAR_23);
        }

      FUNC_0(FUNC_13(VAR_12->session,
                                 VAR_14, VAR_18));
    }

  FUNC_20(VAR_18);

  *VAR_11 = VAR_15;

  return VAR_2;
}
