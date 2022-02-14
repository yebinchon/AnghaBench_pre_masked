
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int svn_revnum_t ;
struct TYPE_13__ {int code; } ;
struct TYPE_14__ {char* method; char const* path; char* body_type; TYPE_1__ sline; scalar_t__ server_error; TYPE_4__* body_delegate_baton; int body_delegate; TYPE_4__* header_delegate_baton; void* header_delegate; struct TYPE_14__* response_baton; void* response_handler; void* no_fail_on_http_failure_status; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_15__ {TYPE_11__* commit_ctx; int working_url; int * pool; } ;
typedef TYPE_3__ dir_context_t ;
struct TYPE_16__ {void* non_recursive_if; TYPE_11__* commit_ctx; int revision; int relpath; } ;
typedef TYPE_4__ delete_context_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int * pool; int deleted_entries; int session; int txn_root_url; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,void*) ;
 char* FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_9 (int ,int *) ;
 void* VAR_4 ;
 int * FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 char const* FUNC_12 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(const char *VAR_5,
             svn_revnum_t VAR_6,
             void *VAR_7,
             apr_pool_t *VAR_8)
{
  dir_context_t *VAR_9 = VAR_7;
  delete_context_t *VAR_10;
  svn_ra_serf__handler_t *VAR_11;
  const char *VAR_12;

  if (FUNC_1(VAR_9->commit_ctx))
    {
      VAR_12 = FUNC_7(
                                    VAR_9->commit_ctx->txn_root_url,
                                    VAR_5, VAR_9->pool);
    }
  else
    {

      FUNC_0(FUNC_4(VAR_9, VAR_8 ));
      VAR_12 = FUNC_7(VAR_9->working_url,
                                                  FUNC_12(VAR_5,
                                                                       ((void*)0)),
                                                  VAR_8);
    }


  VAR_10 = FUNC_2(VAR_8, sizeof(*VAR_10));
  VAR_10->relpath = FUNC_3(VAR_8, VAR_5);
  VAR_10->revision = VAR_6;
  VAR_10->commit_ctx = VAR_9->commit_ctx;

  VAR_11 = FUNC_9(VAR_9->commit_ctx->session, VAR_8);

  VAR_11->response_handler = VAR_4;
  VAR_11->response_baton = VAR_11;

  VAR_11->header_delegate = VAR_3;
  VAR_11->header_delegate_baton = VAR_10;

  VAR_11->method = "DELETE";
  VAR_11->path = VAR_12;
  VAR_11->no_fail_on_http_failure_status = VAR_1;

  FUNC_0(FUNC_8(VAR_11, VAR_8));

  if (VAR_11->sline.code == 400)
    {


      VAR_10->non_recursive_if = VAR_1;

      VAR_11 = FUNC_9(VAR_9->commit_ctx->session, VAR_8);

      VAR_11->response_handler = VAR_4;
      VAR_11->response_baton = VAR_11;

      VAR_11->header_delegate = VAR_3;
      VAR_11->header_delegate_baton = VAR_10;

      VAR_11->method = "DELETE";
      VAR_11->path = VAR_12;

      VAR_11->body_type = "text/xml";
      VAR_11->body_delegate = VAR_2;
      VAR_11->body_delegate_baton = VAR_10;

      FUNC_0(FUNC_8(VAR_11, VAR_8));
    }

  if (VAR_11->server_error)
    return FUNC_10(VAR_11, VAR_8);


  if (VAR_11->sline.code != 204)
    return FUNC_5(FUNC_11(VAR_11));

  FUNC_6(VAR_9->commit_ctx->deleted_entries,
                FUNC_3(VAR_9->commit_ctx->pool, VAR_5), (void *)1);

  return VAR_0;
}
