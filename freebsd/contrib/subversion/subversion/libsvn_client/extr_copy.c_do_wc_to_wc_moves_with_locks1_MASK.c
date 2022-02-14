
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_client__copy_pair_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int FUNC_2 (int *,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_client__copy_pair_t *VAR_2,
                              const char *VAR_3,
                              svn_boolean_t VAR_4,
                              svn_boolean_t VAR_5,
                              svn_boolean_t VAR_6,
                              svn_boolean_t VAR_7,
                              svn_client_ctx_t *VAR_8,
                              apr_pool_t *VAR_9)
{
  if (VAR_5)
    FUNC_1(
      FUNC_2(VAR_2, VAR_3, VAR_4,
                                    VAR_5, VAR_6,
                                    VAR_7,
                                    VAR_8, VAR_9),
      VAR_8->wc_ctx, VAR_3, VAR_0, VAR_9);
  else
    FUNC_0(FUNC_2(VAR_2, VAR_3, VAR_4,
                                          VAR_5, VAR_6,
                                          VAR_7,
                                          VAR_8, VAR_9));

  return VAR_1;
}
