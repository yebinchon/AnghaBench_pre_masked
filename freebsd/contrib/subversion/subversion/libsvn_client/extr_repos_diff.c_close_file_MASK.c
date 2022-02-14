
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct file_baton {int * pool; int pfb; int propchanges; int * path_end_revision; scalar_t__ pristine_props; int * path_start_revision; int right_source; int left_source; int path; scalar_t__ added; scalar_t__ has_propchange; int result_md5_checksum; scalar_t__ skip; struct edit_baton* edit_baton; struct dir_baton* parent_baton; } ;
struct edit_baton {TYPE_1__* processor; scalar_t__ text_deltas; } ;
struct dir_baton {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {int (* file_changed ) (int ,int ,int ,int *,int *,scalar_t__,int *,int ,int ,int ,TYPE_1__*,int *) ;int (* file_added ) (int ,int *,int ,int *,int *,int *,int *,int ,TYPE_1__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct file_baton*,int ,int *) ;
 int FUNC_3 (struct dir_baton*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int *,int ,int *,int *,int *,int *,int ,TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ,int ,int *,int *,scalar_t__,int *,int ,int ,int ,TYPE_1__*,int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;
 int FUNC_8 (int *,int ,int *,int ,int ) ;
 int FUNC_9 (int **,int ,char const*,int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (scalar_t__,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(void *VAR_3,
           const char *VAR_4,
           apr_pool_t *VAR_5)
{
  struct file_baton *VAR_6 = VAR_3;
  struct dir_baton *VAR_7 = VAR_6->parent_baton;
  struct edit_baton *VAR_8 = VAR_6->edit_baton;
  apr_pool_t *VAR_9;


  if (VAR_6->skip)
    {
      FUNC_11(VAR_6->pool);
      FUNC_0(FUNC_3(VAR_7));
      return VAR_0;
    }

  VAR_9 = VAR_6->pool;

  if (VAR_4 && VAR_8->text_deltas)
    {
      svn_checksum_t *VAR_10;

      FUNC_0(FUNC_9(&VAR_10, VAR_2,
                                     VAR_4, VAR_9));

      if (!FUNC_7(VAR_10, VAR_6->result_md5_checksum))
        return FUNC_10(FUNC_8(
                                      VAR_10,
                                      VAR_6->result_md5_checksum,
                                      VAR_5,
                                      FUNC_1("Checksum mismatch for '%s'"),
                                      VAR_6->path));
    }

  if (VAR_6->added || VAR_6->path_end_revision || VAR_6->has_propchange)
    {
      apr_hash_t *VAR_11;

      if (!VAR_6->added && !VAR_6->pristine_props)
        {


          FUNC_0(FUNC_2(VAR_6, VAR_1, VAR_9));
        }

      if (VAR_6->pristine_props)
        FUNC_4(VAR_6->pristine_props, VAR_6->propchanges);

      VAR_11 = FUNC_12(VAR_6->pristine_props, VAR_6->propchanges,
                                    VAR_6->pool);

      if (VAR_6->added)
        FUNC_0(VAR_8->processor->file_added(VAR_6->path,
                                          ((void*)0) ,
                                          VAR_6->right_source,
                                          ((void*)0) ,
                                          VAR_6->path_end_revision,
                                          ((void*)0) ,
                                          VAR_11,
                                          VAR_6->pfb,
                                          VAR_8->processor,
                                          VAR_6->pool));
      else
        FUNC_0(VAR_8->processor->file_changed(VAR_6->path,
                                            VAR_6->left_source,
                                            VAR_6->right_source,
                                            VAR_6->path_end_revision
                                                    ? VAR_6->path_start_revision
                                                    : ((void*)0),
                                            VAR_6->path_end_revision,
                                            VAR_6->pristine_props,
                                            VAR_11,
                                            (VAR_6->path_end_revision != ((void*)0)),
                                            VAR_6->propchanges,
                                            VAR_6->pfb,
                                            VAR_8->processor,
                                            VAR_6->pool));
    }

  FUNC_11(VAR_6->pool);

  FUNC_0(FUNC_3(VAR_7));

  return VAR_0;
}
