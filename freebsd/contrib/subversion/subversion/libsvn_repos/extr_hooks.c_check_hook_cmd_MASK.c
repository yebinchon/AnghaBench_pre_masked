
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char const* FUNC_0 (int *,char const*,char const* const,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const* const,scalar_t__*,int *) ;
 int * FUNC_3 (char const* const,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char*
FUNC_4(const char *VAR_4, svn_boolean_t *VAR_5, apr_pool_t *VAR_6)
{
  static const char* const VAR_7[] = {
    "",

    ((void*)0)
  };

  const char *const *VAR_8;
  svn_error_t *VAR_9 = ((void*)0);
  svn_boolean_t VAR_10;
  for (VAR_8 = VAR_7; *VAR_8; ++VAR_8)
    {
      const char *const VAR_11 =
        (**VAR_8 ? FUNC_0(VAR_6, VAR_4, *VAR_8, VAR_1) : VAR_4);

      svn_node_kind_t VAR_12;
      if (!(VAR_9 = FUNC_2(VAR_11, &VAR_12, VAR_6))
          && VAR_12 == VAR_3)
        {
          *VAR_5 = VAR_0;
          return VAR_11;
        }
      FUNC_1(VAR_9);
      if (!(VAR_9 = FUNC_3(VAR_11, &VAR_12, &VAR_10,
                                            VAR_6))
          && VAR_10)
        {
          *VAR_5 = VAR_2;
          return VAR_11;
        }
      FUNC_1(VAR_9);
    }
  return ((void*)0);
}
