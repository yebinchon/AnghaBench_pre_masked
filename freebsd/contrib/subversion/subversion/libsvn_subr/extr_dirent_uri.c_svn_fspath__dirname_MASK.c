
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,int ) ;
 char const* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int *) ;

const char *
FUNC_5(const char *VAR_1,
                    apr_pool_t *VAR_2)
{
  FUNC_2(FUNC_3(VAR_1));

  if (VAR_1[0] == '/' && VAR_1[1] == '\0')
    return FUNC_1(VAR_2, VAR_1);
  else
    return FUNC_0(VAR_2, "/", FUNC_4(VAR_1 + 1, VAR_2),
                       VAR_0);
}
