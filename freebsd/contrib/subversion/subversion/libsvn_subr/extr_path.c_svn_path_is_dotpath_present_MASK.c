
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 int * FUNC_1 (char const*,char*) ;

svn_boolean_t
FUNC_2(const char *VAR_2)
{
  size_t VAR_3;


  if (VAR_2[0] == '\0')
    return VAR_0;


  if (VAR_2[0] == '.' && (VAR_2[1] == '\0' || VAR_2[1] == '/'))
    return VAR_1;


  if (VAR_2[1] == '\0')
    return VAR_0;


  if (FUNC_1(VAR_2, "/./") != ((void*)0))
    return VAR_1;


  VAR_3 = FUNC_0(VAR_2);
  return VAR_2[VAR_3 - 2] == '/' && VAR_2[VAR_3 - 1] == '.';
}
