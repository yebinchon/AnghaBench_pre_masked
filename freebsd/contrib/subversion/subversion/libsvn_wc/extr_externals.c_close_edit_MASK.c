
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int notify_baton; int notify_func; int * target_revision; int repos_uuid; int repos_root_url; int new_repos_relpath; int local_abspath; int db; int iprops; int file_closed; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int *,int *,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_3,
           apr_pool_t *VAR_4)
{
  struct edit_baton *VAR_5 = VAR_3;

  if (!VAR_5->file_closed)
    {
      apr_hash_t *VAR_6 = ((void*)0);







      if (VAR_5->iprops)
        {
          VAR_6 = FUNC_1(VAR_4);
          FUNC_2(VAR_6, VAR_5->local_abspath, VAR_5->iprops);
        }

      FUNC_0(FUNC_3(VAR_5->db,
                                                       VAR_5->local_abspath,
                                                       VAR_2,
                                                       VAR_5->new_repos_relpath,
                                                       VAR_5->repos_root_url,
                                                       VAR_5->repos_uuid,
                                                       *VAR_5->target_revision,
                                                       FUNC_1(VAR_4)
                                                                             ,
                                                       VAR_6,
                                                       VAR_1 ,
                                                       VAR_5->notify_func,
                                                       VAR_5->notify_baton,
                                                       VAR_4));
    }

  return VAR_0;
}
