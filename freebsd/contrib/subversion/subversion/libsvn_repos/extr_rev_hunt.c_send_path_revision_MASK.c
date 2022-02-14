
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_txdelta_stream_t ;
struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_prop_t ;
typedef int svn_fs_root_t ;
typedef int (* svn_file_rev_handler_t ) (void*,int ,int ,int *,int ,scalar_t__*,void**,int *,int *) ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct send_baton {int * last_pool; int * iterpool; int * last_props; int last_path; int * last_root; scalar_t__ include_merged_revisions; } ;
struct path_revision {int path; int merged; int revnum; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__*,int *,int ,int *,int ,int *) ;
 int FUNC_4 (int **,int *,int ,int *,int ,int *) ;
 int FUNC_5 (int **,int *,int ,int *) ;
 int FUNC_6 (scalar_t__*,int *,int ,int *,int ,int *) ;
 int FUNC_7 (int **,int ,int ,int ,int *,int *) ;
 int FUNC_8 (int **,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,scalar_t__,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(struct path_revision *VAR_4,
                   svn_repos_t *VAR_5,
                   struct send_baton *VAR_6,
                   svn_file_rev_handler_t VAR_7,
                   void *VAR_8)
{
  apr_hash_t *VAR_9;
  apr_hash_t *VAR_10;
  apr_array_header_t *VAR_11;
  svn_fs_root_t *VAR_12;
  svn_txdelta_stream_t *VAR_13;
  svn_txdelta_window_handler_t VAR_14 = ((void*)0);
  void *VAR_15 = ((void*)0);
  apr_pool_t *VAR_16;
  svn_boolean_t VAR_17;
  svn_boolean_t VAR_18;

  FUNC_9(VAR_6->iterpool);


  FUNC_0(FUNC_7(&VAR_9, VAR_5->fs,
                                    VAR_4->revnum, VAR_0,
                                    VAR_6->iterpool, VAR_6->iterpool));


  FUNC_0(FUNC_8(&VAR_12, VAR_5->fs, VAR_4->revnum,
                               VAR_6->iterpool));


  if (VAR_6->last_root)
    {


      FUNC_0(FUNC_6(&VAR_18,
                                   VAR_6->last_root, VAR_6->last_path,
                                   VAR_12, VAR_4->path, VAR_6->iterpool));
    }
  else
    {
      VAR_18 = VAR_2;
    }


  if (VAR_18)
    {

      FUNC_0(FUNC_5(&VAR_10, VAR_12, VAR_4->path,
                                   VAR_6->iterpool));
      FUNC_0(FUNC_10(&VAR_11, VAR_10, VAR_6->last_props,
                             VAR_6->iterpool));
    }
  else
    {

      VAR_10 = FUNC_11(VAR_6->last_props, VAR_6->iterpool);
      VAR_11 = FUNC_1(VAR_6->iterpool, 0, sizeof(svn_prop_t));
    }


  if (! VAR_6->last_root)
    {

      VAR_17 = VAR_2;
    }
  else if (VAR_6->include_merged_revisions
           && FUNC_2(VAR_6->last_path, VAR_4->path))
    {







      VAR_17 = VAR_2;
    }
  else
    {


      FUNC_0(FUNC_3(&VAR_17, VAR_6->last_root,
                                        VAR_6->last_path, VAR_12, VAR_4->path,
                                        VAR_6->iterpool));
    }


  FUNC_0(VAR_7(VAR_8, VAR_4->path, VAR_4->revnum,
                  VAR_9, VAR_4->merged,
                  VAR_17 ? &VAR_14 : ((void*)0),
                  VAR_17 ? &VAR_15 : ((void*)0),
                  VAR_11, VAR_6->iterpool));




  if (VAR_14 && VAR_14 != VAR_3)
    {

      FUNC_0(FUNC_4(&VAR_13,
                                           VAR_6->last_root, VAR_6->last_path,
                                           VAR_12, VAR_4->path,
                                           VAR_6->iterpool));

      FUNC_0(FUNC_12(VAR_13,
                                        VAR_14, VAR_15,
                                        VAR_6->iterpool));
    }


  VAR_6->last_root = VAR_12;
  VAR_6->last_path = VAR_4->path;
  VAR_6->last_props = VAR_10;


  VAR_16 = VAR_6->iterpool;
  VAR_6->iterpool = VAR_6->last_pool;
  VAR_6->last_pool = VAR_16;

  return VAR_1;
}
