
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int const**,char const*,int *,int *) ;
 char* FUNC_2 (int *,int,int *) ;

svn_error_t *
FUNC_3(const svn_checksum_t **VAR_1,
                            svn_sqlite__stmt_t *VAR_2, int VAR_3,
                            apr_pool_t *VAR_4)
{
  const char *VAR_5 = FUNC_2(VAR_2, VAR_3, ((void*)0));

  if (VAR_5 == ((void*)0))
    *VAR_1 = ((void*)0);
  else
    FUNC_0(FUNC_1(VAR_1, VAR_5,
                                     VAR_4, VAR_4));

  return VAR_0;
}
