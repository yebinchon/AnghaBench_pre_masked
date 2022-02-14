
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_fs_x__id_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char* FUNC_0 (char*,int const*) ;
 int * FUNC_1 (char*,int,int *) ;

svn_string_t *
FUNC_2(const svn_fs_x__id_t *VAR_1,
                     apr_pool_t *VAR_2)
{
  char VAR_3[2 * VAR_0 + 1];
  char *VAR_4 = FUNC_0(VAR_3, VAR_1);

  return FUNC_1(VAR_3, VAR_4 - VAR_3, VAR_2);
}
