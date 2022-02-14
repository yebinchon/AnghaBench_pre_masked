
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (char**,char const*,int *) ;
 char* FUNC_3 (char*,char*,int *) ;
 int FUNC_4 (char**,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(char **VAR_2,
                  const char *VAR_3,
                  const char *VAR_4,
                  svn_client_ctx_t *VAR_5,
                  apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  char *VAR_8;
  char *VAR_9;

  FUNC_0(FUNC_4(&VAR_8, VAR_5->wc_ctx, VAR_4,
                                  VAR_7, VAR_7));
  FUNC_0(FUNC_2(&VAR_9, VAR_3, VAR_7));
  VAR_9 = FUNC_1(VAR_7, VAR_9, ".patch", VAR_1);
  *VAR_2 = FUNC_3(VAR_8, VAR_9, VAR_6);
  return VAR_0;
}
