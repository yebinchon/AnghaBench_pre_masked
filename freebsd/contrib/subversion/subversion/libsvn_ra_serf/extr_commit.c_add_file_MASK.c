
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_26__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_12__ ;


typedef int svn_revnum_t ;
struct TYPE_30__ {int code; } ;
struct TYPE_33__ {char* method; char const* path; void* no_dav_headers; struct TYPE_33__* response_baton; void* response_handler; TYPE_1__ sline; TYPE_5__* header_delegate_baton; int header_delegate; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
struct TYPE_34__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct TYPE_35__ {char const* name; int * pool; void* url; int prop_changes; int copy_revision; void* copy_path; int base_revision; void* added; void* relpath; TYPE_26__* commit_ctx; TYPE_6__* parent_dir; } ;
typedef TYPE_5__ file_context_t ;
struct TYPE_36__ {TYPE_26__* commit_ctx; int copy_path; scalar_t__ added; int working_url; } ;
typedef TYPE_6__ dir_context_t ;
struct TYPE_37__ {int path; } ;
typedef TYPE_7__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_32__ {int path; } ;
struct TYPE_31__ {TYPE_12__* session; int deleted_entries; int txn_root_url; int open_batons; } ;
struct TYPE_29__ {TYPE_2__ session_url; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_26__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,char const*,TYPE_7__*) ;
 TYPE_4__* FUNC_7 (TYPE_6__*,int *) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (int ,int *,int ,char const*) ;
 TYPE_4__* FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int ,char const*) ;
 void* FUNC_12 (int ,char const*,int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_4__* FUNC_15 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_16 (TYPE_12__*,int *) ;
 void* VAR_6 ;
 TYPE_4__* FUNC_17 (char const**,int *,TYPE_12__*,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_18 (TYPE_3__*) ;
 TYPE_4__* FUNC_19 (scalar_t__,int *) ;
 char const* FUNC_20 (void*,int *) ;
 char* FUNC_21 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(const char *VAR_7,
         void *VAR_8,
         const char *VAR_9,
         svn_revnum_t VAR_10,
         apr_pool_t *VAR_11,
         void **VAR_12)
{
  dir_context_t *VAR_13 = VAR_8;
  file_context_t *VAR_14;
  const char *VAR_15 = VAR_7;
  apr_pool_t *VAR_16 = FUNC_13(VAR_11);

  VAR_14 = FUNC_4(VAR_11, sizeof(*VAR_14));
  VAR_14->pool = VAR_11;

  VAR_14->parent_dir = VAR_13;
  VAR_14->commit_ctx = VAR_13->commit_ctx;
  VAR_14->relpath = FUNC_5(VAR_14->pool, VAR_7);
  VAR_14->name = FUNC_20(VAR_14->relpath, ((void*)0));
  VAR_14->added = VAR_4;
  VAR_14->base_revision = VAR_2;
  VAR_14->copy_path = FUNC_5(VAR_14->pool, VAR_9);
  VAR_14->copy_revision = VAR_10;
  VAR_14->prop_changes = FUNC_3(VAR_14->pool);

  VAR_13->commit_ctx->open_batons++;




  if (FUNC_1(VAR_13->commit_ctx))
    {
      VAR_14->url = FUNC_12(VAR_13->commit_ctx->txn_root_url,
                                                  VAR_7, VAR_14->pool);
    }
  else
    {

      FUNC_0(FUNC_7(VAR_13, VAR_16));

      VAR_14->url =
        FUNC_12(VAR_13->working_url,
                                    VAR_14->name, VAR_14->pool);
    }

  while (VAR_15 && VAR_15[0] != '\0')
    {
      if (FUNC_11(VAR_13->commit_ctx->deleted_entries, VAR_15))
        {
          break;
        }
      VAR_15 = FUNC_21(VAR_15, VAR_11);
    }

  if (VAR_9)
    {
      svn_ra_serf__handler_t *VAR_17;
      apr_uri_t VAR_18;
      const char *VAR_19;
      apr_status_t VAR_20;




      VAR_20 = FUNC_6(VAR_16, VAR_9, &VAR_18);
      if (VAR_20)
        return FUNC_19(VAR_20, ((void*)0));

      FUNC_0(FUNC_17(&VAR_19, ((void*)0) ,
                                          VAR_13->commit_ctx->session,
                                          VAR_18.path, VAR_10,
                                          VAR_16, VAR_16));

      VAR_17 = FUNC_16(VAR_13->commit_ctx->session,
                                            VAR_16);
      VAR_17->method = "COPY";
      VAR_17->path = VAR_19;

      VAR_17->response_handler = VAR_6;
      VAR_17->response_baton = VAR_17;

      VAR_17->header_delegate = VAR_5;
      VAR_17->header_delegate_baton = VAR_14;

      FUNC_0(FUNC_15(VAR_17, VAR_16));

      if (VAR_17->sline.code != 201)
        return FUNC_10(FUNC_18(VAR_17));
    }
  else if (! ((VAR_13->added && !VAR_13->copy_path) ||
           (VAR_15 && VAR_15[0] != '\0')))
    {
      svn_ra_serf__handler_t *VAR_21;
      svn_error_t *VAR_22;

      VAR_21 = FUNC_16(VAR_13->commit_ctx->session,
                                            VAR_16);
      VAR_21->method = "HEAD";
      VAR_21->path = FUNC_12(
                                        VAR_13->commit_ctx->session->session_url.path,
                                        VAR_7, VAR_16);
      VAR_21->response_handler = VAR_6;
      VAR_21->response_baton = VAR_21;
      VAR_21->no_dav_headers = VAR_4;

      VAR_22 = FUNC_15(VAR_21, VAR_16);

      if (VAR_22 && VAR_22->apr_err == VAR_1)
        {
          FUNC_8(VAR_22);
        }
      else if (VAR_22)
        return FUNC_10(VAR_22);
      else
        return FUNC_9(VAR_0, ((void*)0),
                                 FUNC_2("File '%s' already exists"), VAR_7);
    }

  FUNC_14(VAR_16);
  *VAR_12 = VAR_14;

  return VAR_3;
}
