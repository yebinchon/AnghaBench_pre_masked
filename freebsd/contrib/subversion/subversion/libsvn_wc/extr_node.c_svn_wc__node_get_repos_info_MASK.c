
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,char const**,char const**,char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_0,
                            const char **VAR_1,
                            const char **VAR_2,
                            const char **VAR_3,
                            svn_wc_context_t *VAR_4,
                            const char *VAR_5,
                            apr_pool_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  return FUNC_0(
            FUNC_1(VAR_0,
                                       VAR_1,
                                       VAR_2,
                                       VAR_3,
                                       VAR_4->db, VAR_5,
                                       VAR_6, VAR_7));
}
