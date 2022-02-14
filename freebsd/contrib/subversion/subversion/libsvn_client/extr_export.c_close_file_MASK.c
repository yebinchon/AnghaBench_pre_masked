
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int kind; } ;
typedef TYPE_3__ svn_wc_notify_t ;
typedef int svn_subst_eol_style_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct file_baton {struct edit_baton* edit_baton; int path; scalar_t__ date; int special; scalar_t__ executable_val; int tmppath; int author; int repos_root_url; int url; int revision; TYPE_2__* keywords_val; TYPE_1__* eol_style_val; int text_digest; int tmp_stream; } ;
struct edit_baton {int notify_baton; int (* notify_func ) (int ,TYPE_3__*,int *) ;int cancel_baton; int cancel_func; int native_eol; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const**,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int * FUNC_6 (int *,int *,int *,int ,int ) ;
 int FUNC_7 (int **,int ,char const*,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (scalar_t__,int ,int *) ;
 int FUNC_12 (int ,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int **,int ,int ,int ,int ,scalar_t__,int ,int *) ;
 int FUNC_15 (int ,int ,char const*,int ,int *,int ,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_16 (int ,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_17(void *VAR_6,
           const char *VAR_7,
           apr_pool_t *VAR_8)
{
  struct file_baton *VAR_9 = VAR_6;
  struct edit_baton *VAR_10 = VAR_9->edit_baton;
  svn_checksum_t *VAR_11;
  svn_checksum_t *VAR_12;


  if (! VAR_9->tmppath)
    return VAR_1;

  FUNC_0(FUNC_13(VAR_9->tmp_stream));

  FUNC_0(FUNC_7(&VAR_11, VAR_3, VAR_7,
                                 VAR_8));
  VAR_12 = FUNC_4(VAR_9->text_digest, VAR_8);




  if (!FUNC_5(VAR_11, VAR_12))
    return FUNC_6(VAR_11, VAR_12, VAR_8,
                                     FUNC_1("Checksum mismatch for '%s'"),
                                     FUNC_8(VAR_9->path, VAR_8));

  if ((! VAR_9->eol_style_val) && (! VAR_9->keywords_val) && (! VAR_9->special))
    {
      FUNC_0(FUNC_9(VAR_9->tmppath, VAR_9->path, VAR_0, VAR_8));
    }
  else
    {
      svn_subst_eol_style_t VAR_13;
      const char *VAR_14 = ((void*)0);
      svn_boolean_t VAR_15 = VAR_0;
      apr_hash_t *VAR_16 = ((void*)0);

      if (VAR_9->eol_style_val)
        {
          FUNC_0(FUNC_2(&VAR_13, &VAR_14, VAR_9->eol_style_val->data,
                                VAR_10->native_eol));
          VAR_15 = VAR_2;
        }

      if (VAR_9->keywords_val)
        FUNC_0(FUNC_14(&VAR_16, VAR_9->keywords_val->data,
                                          VAR_9->revision, VAR_9->url,
                                          VAR_9->repos_root_url, VAR_9->date,
                                          VAR_9->author, VAR_8));

      FUNC_0(FUNC_15(VAR_9->tmppath, VAR_9->path,
                                            VAR_14, VAR_15, VAR_16,
                                            VAR_2,
                                            VAR_9->special,
                                            VAR_10->cancel_func, VAR_10->cancel_baton,
                                            VAR_8));

      FUNC_0(FUNC_10(VAR_9->tmppath, VAR_0, VAR_8));
    }

  if (VAR_9->executable_val)
    FUNC_0(FUNC_12(VAR_9->path, VAR_2, VAR_0, VAR_8));

  if (VAR_9->date && (! VAR_9->special))
    FUNC_0(FUNC_11(VAR_9->date, VAR_9->path, VAR_8));

  if (VAR_9->edit_baton->notify_func)
    {
      svn_wc_notify_t *VAR_17 = FUNC_16(VAR_9->path,
                                                     VAR_5,
                                                     VAR_8);
      VAR_17->kind = VAR_4;
      (*VAR_9->edit_baton->notify_func)(VAR_9->edit_baton->notify_baton, VAR_17,
                                     VAR_8);
    }

  return VAR_1;
}
