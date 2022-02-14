
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int token; int conn; int eb; } ;
typedef TYPE_1__ ra_svn_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ,char const*,int const*) ;

__attribute__((used)) static svn_error_t *FUNC_3(void *VAR_1, const char *VAR_2,
                                           const svn_string_t *VAR_3,
                                           apr_pool_t *VAR_4)
{
  ra_svn_baton_t *VAR_5 = VAR_1;

  FUNC_0(FUNC_1(VAR_5->eb, VAR_4));
  FUNC_0(FUNC_2(VAR_5->conn, VAR_4, VAR_5->token,
                                                VAR_2, VAR_3));
  return VAR_0;
}
