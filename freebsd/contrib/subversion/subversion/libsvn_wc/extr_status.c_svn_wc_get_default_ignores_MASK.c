
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char const**,int ,int ,int ) ;
 int FUNC_2 (int *,char const*,char*,int ,int *) ;
 int * FUNC_3 (int *,int ) ;

svn_error_t *
FUNC_4(apr_array_header_t **VAR_6,
                           apr_hash_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  svn_config_t *VAR_9 = VAR_7
                      ? FUNC_3(VAR_7, VAR_1)
                      : ((void*)0);
  const char *VAR_10;



  FUNC_1(VAR_9, &VAR_10, VAR_4,
                 VAR_3,
                 VAR_2);
  *VAR_6 = FUNC_0(VAR_8, 16, sizeof(const char *));


  FUNC_2(*VAR_6, VAR_10, "\n\r\t\v ", VAR_0, VAR_8);
  return VAR_5;
}
