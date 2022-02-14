
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_7__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,char const*,int const*,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const*,int *) ;
 char* FUNC_5 (int *,int const*,int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_0,
                           const svn_fs_fs__id_part_t *VAR_1,
                           const svn_fs_id_t *VAR_2,
                           apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;
  const char *VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_3);

  VAR_4 = FUNC_1(VAR_0, VAR_5,
                                  VAR_1,
                                  FUNC_4(VAR_2, VAR_3),
                                  VAR_3);
  if (VAR_4 && FUNC_0(VAR_4->apr_err))
    {

      FUNC_2(VAR_4);
      VAR_4 = ((void*)0);
    }
  return FUNC_3(VAR_4);
}
