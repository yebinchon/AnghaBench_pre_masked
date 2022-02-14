
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_tristate_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*,char const*,...) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_6, const char *VAR_7, svn_boolean_t VAR_8,
         const char *VAR_9, const char *VAR_10)
{
  svn_tristate_t VAR_11 = FUNC_2(VAR_7);

  if (VAR_11 == VAR_5)
    *VAR_6 = VAR_3;
  else if (VAR_11 == VAR_4)
    *VAR_6 = VAR_0;
  else if (VAR_7 == ((void*)0))
    *VAR_6 = VAR_8;

  else if (VAR_9)
    return FUNC_1(VAR_1, ((void*)0),
                             FUNC_0("Config error: invalid boolean "
                               "value '%s' for '[%s] %s'"),
                             VAR_7, VAR_9, VAR_10);
  else
    return FUNC_1(VAR_1, ((void*)0),
                             FUNC_0("Config error: invalid boolean "
                               "value '%s' for '%s'"),
                             VAR_7, VAR_10);

  return VAR_2;
}
