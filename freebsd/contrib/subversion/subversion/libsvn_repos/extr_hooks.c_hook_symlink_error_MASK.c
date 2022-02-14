
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1)
{
  return FUNC_1
    (VAR_0, ((void*)0),
     FUNC_0("Failed to run '%s' hook; broken symlink"), VAR_1);
}
