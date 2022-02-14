
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,int *,int *,int *,int *) ;
 int FUNC_2 (char const**,int *,int *,int *,int *) ;
 int FUNC_3 (char const**,int *,int *,int *) ;
 int FUNC_4 (int *) ;






__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_1,
                                            svn_client_conflict_t *VAR_2,
                                            svn_client_ctx_t *VAR_3,
                                            apr_pool_t *VAR_4,
                                            apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;

  VAR_6 = FUNC_4(VAR_2);

  *VAR_1 = ((void*)0);

  switch (VAR_6)
    {
      case 131:
      case 129:
        FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_3,
                                                VAR_4, VAR_5));
        break;
      case 132:
        FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3,
                                               VAR_4, VAR_5));
        break;
      case 130:
      case 128:
        FUNC_0(FUNC_3(VAR_1, VAR_2,
                                                VAR_4, VAR_5));
        break;
    }

  return VAR_0;
}
