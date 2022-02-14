
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (char*,int*,char const*,int ,int const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_4(char *VAR_2,
                  apr_size_t *VAR_3,
                  const char *VAR_4,
                  svn_boolean_t VAR_5,
                  apr_hash_t *VAR_6)
{
  const svn_string_t *VAR_7;


  FUNC_0(*VAR_3 <= VAR_1);
  FUNC_0((VAR_2[0] == '$') && (VAR_2[*VAR_3 - 1] == '$'));


  if (! VAR_6)
    return VAR_0;

  VAR_7 = FUNC_2(VAR_6, VAR_4);

  if (VAR_7)
    {
      return FUNC_3(VAR_2, VAR_3,
                                     VAR_4, FUNC_1(VAR_4),
                                     VAR_5 ? VAR_7 : ((void*)0));
    }

  return VAR_0;
}
