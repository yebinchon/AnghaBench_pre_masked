
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct replay_baton {int extra_ra_session; int stdout_stream; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const**,void**,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int ,int ,int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_revnum_t VAR_3,
                void *VAR_4,
                const svn_delta_editor_t **VAR_5,
                void **VAR_6,
                apr_hash_t *VAR_7,
                apr_pool_t *VAR_8)
{
  struct replay_baton *VAR_9 = VAR_4;
  apr_hash_t *VAR_10;


  FUNC_0(FUNC_2(&VAR_10, VAR_7, VAR_8));
  FUNC_0(FUNC_3(VAR_9->stdout_stream, VAR_3, ((void*)0),
                                          VAR_10,
                                          VAR_1 ,
                                          VAR_8));

  FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_3,
                                     VAR_9->stdout_stream, VAR_9->extra_ra_session,
                                     ((void*)0), VAR_2, ((void*)0), VAR_8));

  return VAR_0;
}
