
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int eb; int conn; int token; int pool; } ;
typedef TYPE_1__ ra_svn_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (char,int ,int *) ;
 void* FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int ,int *,char const*,int ,int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_5(const char *VAR_1,
                                     void *VAR_2,
                                     svn_revnum_t VAR_3,
                                     apr_pool_t *VAR_4,
                                     void **VAR_5)
{
  ra_svn_baton_t *VAR_6 = VAR_2;
  svn_string_t *VAR_7 = FUNC_2('c', VAR_6->eb, VAR_4);

  FUNC_0(FUNC_1(VAR_6->eb, VAR_6->pool));
  FUNC_0(FUNC_4(VAR_6->conn, VAR_4, VAR_1, VAR_6->token,
                                          VAR_7, VAR_3));
  *VAR_5 = FUNC_3(VAR_6->conn, VAR_4, VAR_6->eb, VAR_7);
  return VAR_0;
}
