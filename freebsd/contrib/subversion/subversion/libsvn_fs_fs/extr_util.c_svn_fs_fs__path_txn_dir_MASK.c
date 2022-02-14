
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int ,int *) ;
 char const* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;

const char *
FUNC_4(svn_fs_t *VAR_1,
                        const svn_fs_fs__id_part_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  FUNC_0(VAR_2 != ((void*)0));
  return FUNC_2(FUNC_3(VAR_1, VAR_3),
                         FUNC_1(VAR_2, VAR_0, VAR_3),
                         VAR_3);
}
