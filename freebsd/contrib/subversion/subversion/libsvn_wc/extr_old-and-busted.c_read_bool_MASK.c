
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,char**,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_boolean_t *VAR_4, const char *VAR_5,
          char **VAR_6, const char *VAR_7)
{
  const char *VAR_8;
  FUNC_0(FUNC_2(&VAR_8, VAR_6, VAR_7));
  if (VAR_8)
    {
      if (FUNC_3(VAR_8, VAR_5) != 0)
        return FUNC_4(VAR_1, ((void*)0),
                                 FUNC_1("Invalid value for field '%s'"),
                                 VAR_5);
      *VAR_4 = VAR_3;
    }
  else
    *VAR_4 = VAR_0;
  return VAR_2;
}
