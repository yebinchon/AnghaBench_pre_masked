
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int ,int ,int ,int ,scalar_t__,int *,int *) ;
 int VAR_2 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*,scalar_t__*,int *) ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*,int ,int *,int *,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_8(const char *VAR_4,
                               svn_boolean_t VAR_5,
                               svn_client_ctx_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;
  svn_node_kind_t VAR_9;
  FUNC_0(FUNC_4(VAR_4, &VAR_9, VAR_7));
  if (VAR_5)
    FUNC_0(FUNC_6(VAR_4, VAR_7));
  else
    FUNC_0(FUNC_5(VAR_4, VAR_0, VAR_7));

  VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_1, VAR_1, VAR_1,
                        VAR_5, VAR_6, VAR_7);



  if (VAR_8 && (VAR_9 == VAR_3))
    {
      VAR_8 = FUNC_2(VAR_8,
                                     FUNC_7(VAR_4, VAR_1,
                                                        ((void*)0), ((void*)0),
                                                        VAR_7));
    }

  return FUNC_3(VAR_8);
}
