
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*,char*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_1)
{
  return FUNC_0(VAR_0, ((void*)0),
                           "Malformed%s%s skeleton",
                           VAR_1 ? " " : "",
                           VAR_1 ? VAR_1 : "");
}
