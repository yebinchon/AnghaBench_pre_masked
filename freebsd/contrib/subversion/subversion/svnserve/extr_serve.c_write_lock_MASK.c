
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_3__ {int comment; int owner; int token; int path; scalar_t__ expiration_date; scalar_t__ creation_date; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,char*,int ,int ,int ,int ,char const*,char const*) ;
 char* FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *FUNC_3(svn_ra_svn_conn_t *VAR_1,
                               apr_pool_t *VAR_2,
                               const svn_lock_t *VAR_3)
{
  const char *VAR_4, *VAR_5;

  VAR_4 = FUNC_2(VAR_3->creation_date, VAR_2);
  VAR_5 = VAR_3->expiration_date
    ? FUNC_2(VAR_3->expiration_date, VAR_2) : ((void*)0);
  FUNC_0(FUNC_1(VAR_1, VAR_2, "ccc(?c)c(?c)", VAR_3->path,
                                  VAR_3->token, VAR_3->owner, VAR_3->comment,
                                  VAR_4, VAR_5));

  return VAR_0;
}
