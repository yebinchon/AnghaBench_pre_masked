
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_3,
                            const char **VAR_4,
                            const char *VAR_5,
                            svn_client_ctx_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_node_kind_t VAR_8;
  FUNC_0(FUNC_2(VAR_3, VAR_5,
                                  VAR_7));
  FUNC_0(FUNC_3(&VAR_8, VAR_6->wc_ctx, *VAR_3,
                            VAR_0, VAR_0, VAR_7));
  if (VAR_8 == VAR_2)
    *VAR_4 = *VAR_3;
  else
    *VAR_4 = FUNC_1(*VAR_3, VAR_7);

  return VAR_1;
}
