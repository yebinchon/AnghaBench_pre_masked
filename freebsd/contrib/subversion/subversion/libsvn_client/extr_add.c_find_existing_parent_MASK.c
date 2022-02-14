
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int cancel_baton; int * (* cancel_func ) (int ) ;int * wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char const*,int *) ;
 char* FUNC_6 (char const*,int *) ;
 scalar_t__ FUNC_7 (char const*,int ) ;
 int FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int ,int *,int *) ;
 int * FUNC_10 (int ,int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int * FUNC_12 (scalar_t__*,int *,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(const char **VAR_5,
                     svn_client_ctx_t *VAR_6,
                     const char *VAR_7,
                     apr_pool_t *VAR_8,
                     apr_pool_t *VAR_9)
{
  svn_node_kind_t VAR_10;
  const char *VAR_11;
  svn_wc_context_t *VAR_12 = VAR_6->wc_ctx;

  FUNC_0(FUNC_12(&VAR_10, VAR_12, VAR_7,
                            VAR_0, VAR_0, VAR_9));

  if (VAR_10 == VAR_4)
    {
      *VAR_5 = FUNC_2(VAR_8, VAR_7);
      return VAR_3;
    }

  if (FUNC_7(VAR_7, FUNC_3(VAR_7)))
    return FUNC_9(VAR_1, ((void*)0), ((void*)0));

  if (FUNC_11(FUNC_5(VAR_7, VAR_9),
                        VAR_9))
    return FUNC_10(VAR_2, ((void*)0),
                             FUNC_1("'%s' ends in a reserved name"),
                             FUNC_8(VAR_7,
                                                    VAR_9));

  VAR_11 = FUNC_6(VAR_7, VAR_9);

  if (VAR_6->cancel_func)
    FUNC_0(VAR_6->cancel_func(VAR_6->cancel_baton));

  FUNC_0(FUNC_13(VAR_5, VAR_6, VAR_11,
                               VAR_8, VAR_9));

  return VAR_3;
}
