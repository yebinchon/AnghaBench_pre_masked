
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__id_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int ,int *,char*) ;

svn_error_t *
FUNC_2(svn_fs_x__id_t *VAR_2,
                   const char *VAR_3)
{
  if (!FUNC_0(VAR_2, VAR_3))
    return FUNC_1(VAR_0, ((void*)0),
                             "Malformed ID string");

  return VAR_1;
}
