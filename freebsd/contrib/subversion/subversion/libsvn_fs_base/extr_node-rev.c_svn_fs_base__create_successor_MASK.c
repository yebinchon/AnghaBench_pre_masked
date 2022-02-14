
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int const*,char const*,char const*,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;

svn_error_t *
FUNC_3(const svn_fs_id_t **VAR_1,
                              svn_fs_t *VAR_2,
                              const svn_fs_id_t *VAR_3,
                              node_revision_t *VAR_4,
                              const char *VAR_5,
                              const char *VAR_6,
                              trail_t *VAR_7,
                              apr_pool_t *VAR_8)
{
  svn_fs_id_t *VAR_9;


  FUNC_0(FUNC_1(&VAR_9, VAR_2, VAR_3, VAR_5,
                                       VAR_6, VAR_7, VAR_8));


  FUNC_0(FUNC_2(VAR_2, VAR_9, VAR_4,
                                        VAR_7, VAR_8));

  *VAR_1 = VAR_9;
  return VAR_0;
}
