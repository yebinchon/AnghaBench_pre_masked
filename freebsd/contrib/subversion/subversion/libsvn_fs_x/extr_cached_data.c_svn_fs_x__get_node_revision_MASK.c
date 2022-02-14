
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,int *,int ,int *) ;
 TYPE_2__* FUNC_2 (int **,int *,int const*,int *,int *) ;
 TYPE_2__* FUNC_3 (scalar_t__,TYPE_2__*,char*,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int const*,int *) ;

svn_error_t *
FUNC_6(svn_fs_x__noderev_t **VAR_2,
                            svn_fs_t *VAR_3,
                            const svn_fs_x__id_t *VAR_4,
                            apr_pool_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4,
                                            VAR_5, VAR_6);
  if (VAR_7 && VAR_7->apr_err == VAR_0)
    {
      svn_string_t *VAR_8 = FUNC_5(VAR_4, VAR_6);
      return FUNC_3(VAR_0, VAR_7,
                               "Corrupt node-revision '%s'",
                               VAR_8->data);
    }

  FUNC_0(FUNC_1(VAR_3, VAR_4, *VAR_2,
                          VAR_1, VAR_6));

  return FUNC_4(VAR_7);
}
