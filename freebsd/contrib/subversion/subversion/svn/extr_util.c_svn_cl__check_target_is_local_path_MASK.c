
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

svn_error_t *
FUNC_3(const char *VAR_2)
{
  if (FUNC_2(VAR_2))
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("'%s' is not a local path"), VAR_2);
  return VAR_1;
}
