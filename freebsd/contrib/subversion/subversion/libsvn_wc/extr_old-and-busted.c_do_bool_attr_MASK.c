
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int ,int *,int ,char const*,char const*) ;
 char* FUNC_3 (int *,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_boolean_t *VAR_5,
             apr_hash_t *VAR_6, const char *VAR_7,
             const char *VAR_8)
{
  const char *VAR_9 = FUNC_3(VAR_6, VAR_7);

  *VAR_5 = VAR_0;
  if (VAR_9)
    {
      if (FUNC_1(VAR_9, "true") == 0)
        *VAR_5 = VAR_4;
      else if (FUNC_1(VAR_9, "false") == 0 || FUNC_1(VAR_9, "") == 0)
        *VAR_5 = VAR_0;
      else
        return FUNC_2
          (VAR_1, ((void*)0),
           FUNC_0("Entry '%s' has invalid '%s' value"),
           (VAR_8 ? VAR_8 : VAR_3), VAR_7);
    }
  return VAR_2;
}
