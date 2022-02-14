
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_2,
                const svn_string_t *VAR_3)
{
  if (FUNC_4(VAR_2))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Revision property '%s' not allowed "
                               "in this context"), VAR_2);

  FUNC_0(FUNC_2(VAR_2));

  if (VAR_3 && ! FUNC_5(VAR_2))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Bad property name: '%s'"), VAR_2);

  return VAR_1;
}
