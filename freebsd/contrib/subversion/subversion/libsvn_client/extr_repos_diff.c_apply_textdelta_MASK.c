
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct file_baton {int apply_baton; int apply_handler; int * pool; int path; int result_digest; int start_md5_checksum; int * path_start_revision; TYPE_1__* edit_baton; int added; int * path_end_revision; scalar_t__ skip; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int text_deltas; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int **) ;
 int FUNC_4 (struct file_baton*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int *,int ,int ) ;
 int FUNC_7 (int **,int ,char const*,int *) ;
 int VAR_6 ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int ,struct file_baton*,int ,int *) ;
 int FUNC_10 (int *,int *,int ,int ,int *,int *,int *) ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_8,
                const char *VAR_9,
                apr_pool_t *VAR_10,
                svn_txdelta_window_handler_t *VAR_11,
                void **VAR_12)
{
  struct file_baton *VAR_13 = VAR_8;
  svn_stream_t *VAR_14;
  svn_stream_t *VAR_15;
  apr_pool_t *VAR_16 = VAR_13->pool;


  if (VAR_13->skip)
    {
      *VAR_11 = VAR_6;
      *VAR_12 = ((void*)0);
      return VAR_1;
    }


  if (! VAR_13->edit_baton->text_deltas)
    {

      FUNC_0(FUNC_3(VAR_13->edit_baton, &VAR_13->path_start_revision));
      FUNC_0(FUNC_3(VAR_13->edit_baton, &VAR_13->path_end_revision));

      *VAR_11 = VAR_6;
      *VAR_12 = ((void*)0);

      return VAR_1;
    }


  if (!VAR_13->added)
    FUNC_0(FUNC_4(VAR_13, VAR_0, VAR_16));
  else
    FUNC_0(FUNC_3(VAR_13->edit_baton, &(VAR_13->path_start_revision)));

  FUNC_1(VAR_13->path_start_revision != ((void*)0));

  if (VAR_9 != ((void*)0))
    {
      svn_checksum_t *VAR_17;

      FUNC_0(FUNC_7(&VAR_17, VAR_5,
                                     VAR_9, VAR_16));

      if (!FUNC_5(VAR_17, VAR_13->start_md5_checksum))
        return FUNC_8(FUNC_6(
                                      VAR_17,
                                      VAR_13->start_md5_checksum,
                                      VAR_16,
                                      FUNC_2("Base checksum mismatch for '%s'"),
                                      VAR_13->path));
    }


  VAR_14 = FUNC_9(VAR_4, VAR_13, VAR_2,
                                          VAR_16);



  VAR_15 = FUNC_9(VAR_3, VAR_13, VAR_2,
                                             VAR_16);

  FUNC_10(VAR_14,
                    VAR_15,
                    VAR_13->result_digest,
                    VAR_13->path, VAR_13->pool,
                    &(VAR_13->apply_handler), &(VAR_13->apply_baton));

  *VAR_11 = VAR_7;
  *VAR_12 = VAR_8;

  return VAR_1;
}
