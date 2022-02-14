
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char const* path; int * rev_props; scalar_t__ revision; int lock_state; int prop_state; int content_state; int kind; } ;
typedef TYPE_3__ svn_wc_notify_t ;
typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct rev {int dummy; } ;
struct file_rev_baton {int * currpool; TYPE_2__* last_rev; int * mainpool; scalar_t__ include_merged_revisions; int * last_filename; int start_rev; int end_rev; void* last_props; scalar_t__ last_revnum; scalar_t__ backwards; int * filepool; TYPE_1__* ctx; int repos_root_url; int target; scalar_t__ check_mime_type; } ;
struct delta_baton {int wrapped_baton; int wrapped_handler; TYPE_2__* rev; scalar_t__ is_merged_revision; struct file_rev_baton* file_rev_baton; int filename; int * source_stream; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_7__ {int path; scalar_t__ revision; void* rev_props; } ;
struct TYPE_6__ {int cancel_baton; int (* cancel_func ) (int ) ;int notify_baton2; int (* notify_func2 ) (int ,TYPE_3__*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int ,TYPE_3__*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int *,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,char const*,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *,int *) ;
 char* FUNC_16 (int *,int ) ;
 void* FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *,int *,int *,int *) ;
 int * FUNC_19 (int *,int *) ;
 int FUNC_20 (int **,int *,int *,int *) ;
 int FUNC_21 (int **,int *,int *,int ,int *,int *) ;
 int FUNC_22 (int *,int *,int *,int *,int *,int *,int *) ;
 TYPE_3__* FUNC_23 (int ,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_24 (struct delta_baton*) ;
 int VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_25(void *VAR_11, const char *VAR_12, svn_revnum_t VAR_13,
                 apr_hash_t *VAR_14,
                 svn_boolean_t VAR_15,
                 svn_txdelta_window_handler_t *VAR_16,
                 void **VAR_17,
                 apr_array_header_t *VAR_18,
                 apr_pool_t *VAR_19)
{
  struct file_rev_baton *VAR_20 = VAR_11;
  svn_stream_t *VAR_21;
  svn_stream_t *VAR_22;
  struct delta_baton *VAR_23;
  apr_pool_t *VAR_24;


  FUNC_14(VAR_20->currpool);

  if (VAR_20->check_mime_type)
    {
      apr_hash_t *VAR_25 = FUNC_15(VAR_18, VAR_20->currpool);
      const char *VAR_26;

      VAR_20->check_mime_type = VAR_0;

      VAR_26 = FUNC_16(VAR_25, VAR_4);

      if (VAR_26 && FUNC_11(VAR_26))
        {
          return FUNC_10(
              VAR_1, ((void*)0),
              FUNC_4("Cannot calculate blame information for binary file '%s'"),
               (FUNC_12(VAR_20->target)
                      ? VAR_20->target
                      : FUNC_9(VAR_20->target, VAR_19)));
        }
    }

  if (VAR_20->ctx->notify_func2)
    {
      svn_wc_notify_t *VAR_27
            = FUNC_23(
                            FUNC_13(VAR_20->repos_root_url,
                                                        VAR_12+1, VAR_19),
                            VAR_7, VAR_19);
      VAR_27->path = VAR_12;
      VAR_27->kind = VAR_6;
      VAR_27->content_state = VAR_27->prop_state
        = VAR_9;
      VAR_27->lock_state = VAR_8;
      VAR_27->revision = VAR_13;
      VAR_27->rev_props = VAR_14;
      VAR_20->ctx->notify_func2(VAR_20->ctx->notify_baton2, VAR_27, VAR_19);
    }

  if (VAR_20->ctx->cancel_func)
    FUNC_2(VAR_20->ctx->cancel_func(VAR_20->ctx->cancel_baton));







  if (!VAR_16
      && (!VAR_20->include_merged_revisions || VAR_15))
    return VAR_3;


  VAR_23 = FUNC_5(VAR_20->currpool, sizeof(*VAR_23));


  if (VAR_20->last_filename)
    FUNC_2(FUNC_20(&VAR_23->source_stream, VAR_20->last_filename,
                                     VAR_20->currpool, VAR_19));
  else

    VAR_23->source_stream = ((void*)0);
  VAR_21 = FUNC_19(VAR_23->source_stream, VAR_19);

  if (VAR_20->include_merged_revisions && !VAR_15)
    VAR_24 = VAR_20->filepool;
  else
    VAR_24 = VAR_20->currpool;

  FUNC_2(FUNC_21(&VAR_22, &VAR_23->filename, ((void*)0),
                                 VAR_5,
                                 VAR_24, VAR_24));


  VAR_23->file_rev_baton = VAR_20;
  VAR_23->is_merged_revision = VAR_15;


  VAR_23->rev = FUNC_5(VAR_20->mainpool, sizeof(struct rev));

  if (VAR_20->backwards)
    {



      VAR_23->rev->revision = VAR_20->last_revnum;
      VAR_23->rev->rev_props = VAR_20->last_props;


      if (VAR_13 >= FUNC_1(VAR_20->start_rev, VAR_20->end_rev))
        {
          VAR_20->last_revnum = VAR_13;
          VAR_20->last_props = FUNC_17(VAR_14, VAR_20->mainpool);
        }

    }
  else if (VAR_15
           || (VAR_13 >= FUNC_1(VAR_20->start_rev, VAR_20->end_rev)))
    {

      FUNC_3(VAR_13 <= 1 + FUNC_0(VAR_20->end_rev, VAR_20->start_rev));


      VAR_23->rev->revision = VAR_13;
      VAR_23->rev->rev_props = FUNC_17(VAR_14, VAR_20->mainpool);
    }
  else
    {


      FUNC_3((VAR_20->last_filename == ((void*)0))
                     || VAR_20->include_merged_revisions);






      VAR_23->rev->revision = VAR_2;
    }

  if (VAR_20->include_merged_revisions)
    VAR_23->rev->path = FUNC_6(VAR_20->mainpool, VAR_12);


  VAR_20->last_rev = VAR_23->rev;



  if (VAR_16)
    {


      FUNC_22(VAR_21, VAR_22, ((void*)0), ((void*)0),
                        VAR_20->currpool,
                        &VAR_23->wrapped_handler,
                        &VAR_23->wrapped_baton);
      *VAR_16 = VAR_10;
      *VAR_17 = VAR_23;
    }
  else
    {



      FUNC_2(FUNC_18(VAR_21, VAR_22, ((void*)0), ((void*)0), VAR_19));
      FUNC_2(FUNC_24(VAR_23));
    }

  return VAR_3;
}
