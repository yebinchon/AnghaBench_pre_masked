
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char const*,int *) ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
                       const char *VAR_3,
                       svn_boolean_t VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;
  FUNC_0(FUNC_3(*VAR_2, &VAR_6, VAR_5));
  if (VAR_6 == VAR_1)
    {
      const char *VAR_7;

      if (VAR_4)
        VAR_7 = FUNC_4(VAR_3, VAR_5);
      else
        VAR_7 = FUNC_1(VAR_3, ((void*)0));

      *VAR_2 = FUNC_2(*VAR_2,
                                             VAR_7, VAR_5);
    }

  return VAR_0;
}
