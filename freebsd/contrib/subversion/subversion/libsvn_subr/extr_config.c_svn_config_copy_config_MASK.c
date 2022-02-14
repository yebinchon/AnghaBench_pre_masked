
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int **,int *,int *) ;
 int * FUNC_7 (int *) ;

svn_error_t *
FUNC_8(apr_hash_t **VAR_1,
                       apr_hash_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;

  *VAR_1 = FUNC_7(VAR_3);
  for (VAR_4 = FUNC_1(VAR_3, VAR_2);
       VAR_4 != ((void*)0);
       VAR_4 = FUNC_2(VAR_4))
  {
    const void *VAR_5;
    void *VAR_6;
    apr_ssize_t VAR_7;
    svn_config_t * VAR_8;
    svn_config_t * VAR_9;

    FUNC_4(VAR_4, &VAR_5, &VAR_7, &VAR_6);
    VAR_8 = VAR_6;

    FUNC_0(FUNC_6(&VAR_9, VAR_8, VAR_3));

    FUNC_3(*VAR_1,
                 FUNC_5(VAR_3, (const char*)VAR_5),
                 VAR_7, VAR_9);
  }

  return VAR_0;
}
