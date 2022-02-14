
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int token; int conn; int eb; } ;
typedef TYPE_1__ ra_svn_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,char const*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_4(const char *VAR_2,
                                      void *VAR_3, apr_pool_t *VAR_4)
{
  ra_svn_baton_t *VAR_5 = VAR_3;



  if (! FUNC_3(VAR_5->conn, VAR_1))
    return VAR_0;

  FUNC_0(FUNC_1(VAR_5->eb, VAR_4));
  FUNC_0(FUNC_2(VAR_5->conn, VAR_4, VAR_2, VAR_5->token));
  return VAR_0;
}
