
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_baton {int pool; int pristine_props; int base_revision; int path; TYPE_1__* edit_baton; int start_md5_checksum; int path_start_revision; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int ra_session; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int *,int *,int *,int ) ;
 int * FUNC_2 (int *,int *,int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct file_baton *VAR_4,
                 svn_boolean_t VAR_5,
                 apr_pool_t *VAR_6)
{
  if (! VAR_5)
    {
      svn_stream_t *VAR_7;

      FUNC_0(FUNC_4(&VAR_7, &(VAR_4->path_start_revision),
                                     ((void*)0), VAR_3,
                                     VAR_4->pool, VAR_6));

      VAR_7 = FUNC_2(VAR_7, ((void*)0), &VAR_4->start_md5_checksum,
                                        VAR_2, VAR_1, VAR_4->pool);


      FUNC_0(FUNC_1(VAR_4->edit_baton->ra_session,
                              VAR_4->path,
                              VAR_4->base_revision,
                              VAR_7, ((void*)0),
                              &(VAR_4->pristine_props),
                              VAR_4->pool));
      FUNC_0(FUNC_3(VAR_7));
    }
  else
    {
      FUNC_0(FUNC_1(VAR_4->edit_baton->ra_session,
                              VAR_4->path,
                              VAR_4->base_revision,
                              ((void*)0), ((void*)0),
                              &(VAR_4->pristine_props),
                              VAR_4->pool));
    }

  return VAR_0;
}
