
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int ,int *,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;

svn_error_t *
FUNC_2(svn_fs_fs__id_part_t *VAR_2,
                        const char *VAR_3)
{
  if (! FUNC_1(VAR_2, VAR_3))
    return FUNC_0(VAR_0, ((void*)0),
                             "malformed txn id '%s'", VAR_3);

  return VAR_1;
}
