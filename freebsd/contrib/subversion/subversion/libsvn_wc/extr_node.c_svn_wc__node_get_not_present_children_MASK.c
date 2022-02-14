
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int const**,char const*,int const*,int *) ;
 int FUNC_2 (int const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_3(const apr_array_header_t **VAR_1,
                                      svn_wc_context_t *VAR_2,
                                      const char *VAR_3,
                                      apr_pool_t *VAR_4,
                                      apr_pool_t *VAR_5)
{
  const apr_array_header_t *VAR_6;

  FUNC_0(FUNC_2(
                                   &VAR_6,
                                   VAR_2->db, VAR_3,
                                   VAR_5, VAR_5));
  FUNC_1(VAR_1, VAR_3, VAR_6, VAR_4);
  return VAR_0;
}
