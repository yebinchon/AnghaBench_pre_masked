
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_error_t ;
struct miscellaneous_get_args {char const* key; char const** val; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,struct miscellaneous_get_args*,int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_5(const char **VAR_3,
                               svn_fs_t *VAR_4,
                               const char *VAR_5,
                               apr_pool_t *VAR_6)
{
  struct miscellaneous_get_args VAR_7;
  apr_pool_t *VAR_8 = FUNC_3(VAR_6);

  VAR_7.key = VAR_5;
  VAR_7.val = VAR_3;
  FUNC_0(FUNC_2(VAR_4, VAR_2, &VAR_7,
                                 VAR_0, VAR_8));
  if (*VAR_3)
    *VAR_3 = FUNC_1(VAR_6, *VAR_3);
  FUNC_4(VAR_8);
  return VAR_1;
}
