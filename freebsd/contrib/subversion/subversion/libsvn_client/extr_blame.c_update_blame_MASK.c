
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct file_rev_baton {int * currpool; int * lastpool; int last_filename; int * filepool; int last_original_filename; int * prevfilepool; TYPE_1__* ctx; int diff_options; struct blame_chain* chain; scalar_t__ include_merged_revisions; struct blame_chain* merged_chain; } ;
struct delta_baton {int filename; int rev; int is_merged_revision; scalar_t__ source_stream; struct file_rev_baton* file_rev_baton; } ;
struct blame_chain {int dummy; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int cancel_baton; int cancel_func; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,struct blame_chain*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1)
{
  struct delta_baton *VAR_2 = VAR_1;
  struct file_rev_baton *VAR_3 = VAR_2->file_rev_baton;
  struct blame_chain *VAR_4;





  if (VAR_2->source_stream)
    FUNC_0(FUNC_4(VAR_2->source_stream));



  if (VAR_3->include_merged_revisions)
    VAR_4 = VAR_3->merged_chain;
  else
    VAR_4 = VAR_3->chain;


  FUNC_0(FUNC_1(VAR_3->last_filename,
                         VAR_2->filename, VAR_4, VAR_2->rev,
                         VAR_3->diff_options,
                         VAR_3->ctx->cancel_func, VAR_3->ctx->cancel_baton,
                         VAR_3->currpool));




  if (VAR_3->include_merged_revisions && ! VAR_2->is_merged_revision)
    {
      apr_pool_t *VAR_5;

      FUNC_0(FUNC_1(VAR_3->last_original_filename,
                             VAR_2->filename, VAR_3->chain, VAR_2->rev,
                             VAR_3->diff_options,
                             VAR_3->ctx->cancel_func, VAR_3->ctx->cancel_baton,
                             VAR_3->currpool));



      FUNC_3(VAR_3->prevfilepool);
      VAR_5 = VAR_3->filepool;
      VAR_3->filepool = VAR_3->prevfilepool;
      VAR_3->prevfilepool = VAR_5;

      VAR_3->last_original_filename = FUNC_2(VAR_3->filepool,
                                                VAR_2->filename);
    }




  VAR_3->last_filename = VAR_2->filename;


  {
    apr_pool_t *VAR_6 = VAR_3->lastpool;
    VAR_3->lastpool = VAR_3->currpool;
    VAR_3->currpool = VAR_6;
  }

  return VAR_0;
}
