
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef enum svn_prop_kind { ____Placeholder_svn_prop_kind } svn_prop_kind ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_4)
{
  enum svn_prop_kind VAR_5 = FUNC_2(VAR_4);


  if (VAR_5 == VAR_2)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Property '%s' is an entry property"), VAR_4);


  if (VAR_5 == VAR_3)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Property '%s' is a WC property, not "
                               "a regular property"), VAR_4);

  return VAR_1;
}
