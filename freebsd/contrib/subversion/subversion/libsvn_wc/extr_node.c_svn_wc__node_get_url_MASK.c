
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char const*,char const*,int *) ;
 int FUNC_2 (int *,char const**,char const**,int *,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_3(const char **VAR_1,
                     svn_wc_context_t *VAR_2,
                     const char *VAR_3,
                     apr_pool_t *VAR_4,
                     apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;

  FUNC_0(FUNC_2(((void*)0), &VAR_7, &VAR_6,
                                     ((void*)0),
                                     VAR_2->db, VAR_3,
                                     VAR_5, VAR_5));

  *VAR_1 = FUNC_1(VAR_6, VAR_7,
                                     VAR_4);

  return VAR_0;
}
