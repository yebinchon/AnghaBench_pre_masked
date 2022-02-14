
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int code; } ;
struct TYPE_14__ {char* method; char* body_type; TYPE_1__ sline; TYPE_5__* header_delegate_baton; int header_delegate; TYPE_5__* body_delegate_baton; int body_delegate; struct TYPE_14__* response_baton; int response_handler; int path; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_15__ {int base_revision; int prop_changes; TYPE_2__* commit_ctx; int path; int relpath; int * pool; } ;
typedef TYPE_4__ proppatch_context_t ;
struct TYPE_16__ {char const* result_checksum; TYPE_2__* commit_ctx; int relpath; scalar_t__ remote_result_checksum; int base_revision; int prop_changes; int url; scalar_t__ svndiff; int copy_path; scalar_t__ added; int stream; int svndiff_sent; } ;
typedef TYPE_5__ file_context_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int open_batons; int session; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int *,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_4__*,int *) ;
 int VAR_5 ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_6 ;
 int * FUNC_6 (int *,scalar_t__,int *,int ,int ) ;
 int FUNC_7 (int **,int ,char const*,int *) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_11 (int ,int *) ;
 int VAR_7 ;
 int FUNC_12 (scalar_t__,int *) ;
 int FUNC_13 (int *,TYPE_5__**,scalar_t__) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_16(void *VAR_8,
           const char *VAR_9,
           apr_pool_t *VAR_10)
{
  file_context_t *VAR_11 = VAR_8;
  svn_boolean_t VAR_12 = VAR_0;

  VAR_11->result_checksum = VAR_9;




  if ((!VAR_11->svndiff) && VAR_11->added && (!VAR_11->copy_path))
    VAR_12 = VAR_3;


  if ((VAR_11->svndiff || VAR_12) && !VAR_11->svndiff_sent)
    {
      svn_ra_serf__handler_t *VAR_13;
      int VAR_14;

      VAR_13 = FUNC_11(VAR_11->commit_ctx->session,
                                            VAR_10);

      VAR_13->method = "PUT";
      VAR_13->path = VAR_11->url;

      VAR_13->response_handler = VAR_7;
      VAR_13->response_baton = VAR_13;

      if (VAR_12)
        {
          VAR_13->body_delegate = VAR_4;
          VAR_13->body_delegate_baton = VAR_11;
          VAR_13->body_type = "text/plain";
        }
      else
        {
          FUNC_0(FUNC_15(VAR_11->stream));

          FUNC_13(&VAR_13->body_delegate,
                                                 &VAR_13->body_delegate_baton,
                                                 VAR_11->svndiff);
          VAR_13->body_type = VAR_2;
        }

      VAR_13->header_delegate = VAR_5;
      VAR_13->header_delegate_baton = VAR_11;

      FUNC_0(FUNC_10(VAR_13, VAR_10));

      if (VAR_11->added && ! VAR_11->copy_path)
        VAR_14 = 201;
      else
        VAR_14 = 204;

      if (VAR_13->sline.code != VAR_14)
        return FUNC_9(FUNC_14(VAR_13));
    }


  if (VAR_11->svndiff)
    FUNC_0(FUNC_12(VAR_11->svndiff, VAR_10));


  if (FUNC_2(VAR_11->prop_changes))
    {
      proppatch_context_t *VAR_15;

      VAR_15 = FUNC_3(VAR_10, sizeof(*VAR_15));
      VAR_15->pool = VAR_10;
      VAR_15->relpath = VAR_11->relpath;
      VAR_15->path = VAR_11->url;
      VAR_15->commit_ctx = VAR_11->commit_ctx;
      VAR_15->prop_changes = VAR_11->prop_changes;
      VAR_15->base_revision = VAR_11->base_revision;

      FUNC_0(FUNC_4(VAR_11->commit_ctx->session,
                                 VAR_15, VAR_10));
    }

  if (VAR_11->result_checksum && VAR_11->remote_result_checksum)
    {
      svn_checksum_t *VAR_16;

      FUNC_0(FUNC_7(&VAR_16, VAR_6,
                                     VAR_11->result_checksum, VAR_10));

      if (!FUNC_5(VAR_16, VAR_11->remote_result_checksum))
        return FUNC_6(VAR_16,
                                         VAR_11->remote_result_checksum,
                                         VAR_10,
                                         FUNC_1("Checksum mismatch for '%s'"),
                                         FUNC_8(VAR_11->relpath,
                                                                VAR_10));
    }

  VAR_11->commit_ctx->open_batons--;

  return VAR_1;
}
