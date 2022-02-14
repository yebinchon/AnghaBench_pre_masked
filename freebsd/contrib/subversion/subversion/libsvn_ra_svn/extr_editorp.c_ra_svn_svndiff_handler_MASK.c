
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int token; int pool; int conn; int eb; } ;
typedef TYPE_2__ ra_svn_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *FUNC_3(void *VAR_0, const char *VAR_1,
                                           apr_size_t *VAR_2)
{
  ra_svn_baton_t *VAR_3 = VAR_0;
  svn_string_t VAR_4;

  FUNC_0(FUNC_1(VAR_3->eb, VAR_3->pool));
  VAR_4.data = VAR_1;
  VAR_4.len = *VAR_2;
  return FUNC_2(VAR_3->conn, VAR_3->pool,
                                               VAR_3->token, &VAR_4);
}
