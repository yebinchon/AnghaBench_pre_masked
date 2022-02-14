
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_token_map_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*) ;
 int FUNC_2 (int const*,char const*) ;

svn_error_t *
FUNC_3(int *VAR_3,
                         const svn_token_map_t *VAR_4,
                         const char *VAR_5)
{
  *VAR_3 = FUNC_2(VAR_4, VAR_5);

  if (*VAR_3 == VAR_2)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Token '%s' is unrecognized"),
                             VAR_5);

  return VAR_1;
}
