
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int const*,int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int,char const*) ;

svn_error_t *
FUNC_3(svn_sqlite__stmt_t *VAR_0,
                          int VAR_1,
                          const svn_checksum_t *VAR_2,
                          apr_pool_t *VAR_3)
{
  const char *VAR_4;

  if (VAR_2 == ((void*)0))
    VAR_4 = ((void*)0);
  else
    VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_3);

  return FUNC_1(FUNC_2(VAR_0, VAR_1, VAR_4));
}
