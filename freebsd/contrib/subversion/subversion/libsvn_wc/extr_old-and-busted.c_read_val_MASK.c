
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char **VAR_2,
          char **VAR_3, const char *VAR_4)
{
  const char *VAR_5 = *VAR_3;

  if (*VAR_3 == VAR_4)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Unexpected end of entry"));
  if (**VAR_3 == '\n')
    {
      (*VAR_3)++;
      *VAR_2 = ((void*)0);
      return VAR_1;
    }

  while (*VAR_3 != VAR_4 && **VAR_3 != '\n')
    (*VAR_3)++;
  if (*VAR_3 == VAR_4)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Unexpected end of entry"));
  **VAR_3 = '\0';
  *VAR_2 = VAR_5;
  (*VAR_3)++;
  return VAR_1;
}
