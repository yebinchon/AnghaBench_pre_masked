
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(char *VAR_1,
              apr_size_t VAR_2,
              char *VAR_3,
              apr_hash_t *VAR_4)
{
  apr_size_t VAR_5;


  if (! VAR_4)
    return VAR_0;


  for (VAR_5 = 0; VAR_5 < VAR_2 - 2 && VAR_1[VAR_5 + 1] != ':'; VAR_5++)
    VAR_3[VAR_5] = VAR_1[VAR_5 + 1];
  VAR_3[VAR_5] = '\0';

  return FUNC_0(VAR_4, VAR_3) != ((void*)0);
}
