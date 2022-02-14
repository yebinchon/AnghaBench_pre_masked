
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_txdelta_stream_open_func_t ;
struct TYPE_12__ {int code; } ;
struct TYPE_13__ {char* method; TYPE_2__ sline; TYPE_6__* header_delegate_baton; int header_delegate; int body_type; TYPE_5__* body_delegate_baton; int body_delegate; TYPE_4__* response_baton; int response_handler; int path; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct TYPE_14__ {TYPE_6__* file_ctx; TYPE_3__* handler; } ;
typedef TYPE_4__ put_response_ctx_t ;
struct TYPE_15__ {int * err; void* open_baton; int open_func; int session; int member_0; } ;
typedef TYPE_5__ open_txdelta_baton_t ;
struct TYPE_16__ {char const* base_checksum; int copy_path; scalar_t__ added; TYPE_1__* commit_ctx; int url; int svndiff_sent; } ;
typedef TYPE_6__ file_context_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int session; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int ,int *) ;
 int * FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const svn_delta_editor_t *VAR_6,
                       void *VAR_7,
                       const char *VAR_8,
                       svn_txdelta_stream_open_func_t VAR_9,
                       void *VAR_10,
                       apr_pool_t *VAR_11)
{
  file_context_t *VAR_12 = VAR_7;
  open_txdelta_baton_t VAR_13 = {0};
  svn_ra_serf__handler_t *VAR_14;
  put_response_ctx_t *VAR_15;
  int VAR_16;
  svn_error_t *VAR_17;





  VAR_12->svndiff_sent = VAR_2;
  VAR_12->base_checksum = VAR_8;

  VAR_14 = FUNC_4(VAR_12->commit_ctx->session,
                                        VAR_11);
  VAR_14->method = "PUT";
  VAR_14->path = VAR_12->url;

  VAR_15 = FUNC_0(VAR_11, sizeof(*VAR_15));
  VAR_15->handler = VAR_14;
  VAR_15->file_ctx = VAR_12;

  VAR_14->response_handler = VAR_4;
  VAR_14->response_baton = VAR_15;

  VAR_13.session = VAR_12->commit_ctx->session;
  VAR_13.open_func = VAR_9;
  VAR_13.open_baton = VAR_10;
  VAR_13.err = VAR_0;

  VAR_14->body_delegate = VAR_3;
  VAR_14->body_delegate_baton = &VAR_13;
  VAR_14->body_type = VAR_1;

  VAR_14->header_delegate = VAR_5;
  VAR_14->header_delegate_baton = VAR_12;

  VAR_17 = FUNC_3(VAR_14, VAR_11);

  if (VAR_13.err)
    {
      FUNC_1(VAR_17);
      return FUNC_2(VAR_13.err);
    }
  else if (VAR_17)
    return FUNC_2(VAR_17);

  if (VAR_12->added && !VAR_12->copy_path)
    VAR_16 = 201;
  else
    VAR_16 = 204;

  if (VAR_14->sline.code != VAR_16)
    return FUNC_2(FUNC_5(VAR_14));

  return VAR_0;
}
