
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (char*,int *) ;
 int * FUNC_1 (int ,int *,char*) ;

svn_error_t *
FUNC_2(const svn_fs_id_t **VAR_2,
                    char *VAR_3,
                    apr_pool_t *VAR_4)
{
  svn_fs_id_t *VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5 == ((void*)0))
    return FUNC_1(VAR_0, ((void*)0),
                             "Malformed node revision ID string");

  *VAR_2 = VAR_5;

  return VAR_1;
}
