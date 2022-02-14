
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char const*,int *) ;

const char *
FUNC_2(const char *VAR_1,
                         apr_pool_t *VAR_2)
{
  if ((VAR_1[0] == '/') && (VAR_1[1] == '\0'))
    return "/";

  return FUNC_0(VAR_2, "/", FUNC_1(VAR_1, VAR_2),
                     VAR_0);
}
