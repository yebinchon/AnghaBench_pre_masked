
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;
 int * FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

svn_boolean_t
FUNC_5(const char *VAR_2)
{
  FUNC_1(FUNC_2(VAR_2, FUNC_4(VAR_2)));


  if (FUNC_0(VAR_2)
      || (VAR_2[0] == '.' && VAR_2[1] == '.' && VAR_2[2] == '\0'))
    return VAR_0;


  if (FUNC_3(VAR_2, '/') != ((void*)0))
    return VAR_0;


  return VAR_1;
}
