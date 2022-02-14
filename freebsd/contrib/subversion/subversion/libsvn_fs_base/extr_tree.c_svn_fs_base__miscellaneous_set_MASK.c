
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_error_t ;
struct miscellaneous_set_args {char const* key; char const* val; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,struct miscellaneous_set_args*,int ,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_1(svn_fs_t *VAR_2,
                               const char *VAR_3,
                               const char *VAR_4,
                               apr_pool_t *VAR_5)
{
  struct miscellaneous_set_args VAR_6;
  VAR_6.key = VAR_3;
  VAR_6.val = VAR_4;

  return FUNC_0(VAR_2, VAR_1, &VAR_6,
                                VAR_0, VAR_5);
}
