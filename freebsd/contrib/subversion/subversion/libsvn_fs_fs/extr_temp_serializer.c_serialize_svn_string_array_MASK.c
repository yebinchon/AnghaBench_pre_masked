
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_temp_serializer__context_t ;
typedef int svn_string_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *,int const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void const* const*,int) ;

__attribute__((used)) static void
FUNC_3(svn_temp_serializer__context_t *VAR_0,
                           const svn_string_t ***VAR_1,
                           apr_size_t VAR_2)
{
  apr_size_t VAR_3;
  const svn_string_t **VAR_4 = *VAR_1;


  FUNC_2(VAR_0,
                            (const void * const *)VAR_1,
                            VAR_2 * sizeof(const char*));


  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    FUNC_0(VAR_0, &VAR_4[VAR_3]);

  FUNC_1(VAR_0);
}
