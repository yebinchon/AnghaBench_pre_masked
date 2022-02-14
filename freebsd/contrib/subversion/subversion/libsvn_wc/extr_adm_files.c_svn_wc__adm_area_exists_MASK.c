
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (char const*,int *,int *) ;

svn_boolean_t
FUNC_3(const char *VAR_2,
                        apr_pool_t *VAR_3)
{
  const char *VAR_4 = FUNC_2(VAR_2, ((void*)0), VAR_3);
  svn_node_kind_t VAR_5;
  svn_error_t *VAR_6;

  VAR_6 = FUNC_1(VAR_4, &VAR_5, VAR_3);
  if (VAR_6)
    {
      FUNC_0(VAR_6);

      return VAR_0;
    }

  return VAR_5 != VAR_1;
}
