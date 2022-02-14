
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int const**,int ,char const*,int const*,int *,int *) ;

svn_error_t *
FUNC_2(const svn_checksum_t **VAR_0,
                               svn_wc_context_t *VAR_1,
                               const char *VAR_2,
                               const svn_checksum_t *VAR_3,
                               apr_pool_t *VAR_4,
                               apr_pool_t *VAR_5)
{
  return FUNC_0(FUNC_1(VAR_0,
                                                     VAR_1->db,
                                                     VAR_2,
                                                     VAR_3,
                                                     VAR_4,
                                                     VAR_5));
}
