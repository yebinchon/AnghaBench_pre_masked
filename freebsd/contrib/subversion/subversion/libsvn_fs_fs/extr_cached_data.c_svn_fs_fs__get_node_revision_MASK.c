
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
struct TYPE_13__ {int number; int revision; } ;
typedef TYPE_2__ svn_fs_fs__id_part_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int *,int ,int *) ;
 TYPE_3__* FUNC_2 (int **,int *,int const*,int *,int *) ;
 TYPE_3__* FUNC_3 (scalar_t__,TYPE_3__*,char*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (int const*) ;
 TYPE_1__* FUNC_6 (int const*,int *) ;

svn_error_t *
FUNC_7(node_revision_t **VAR_2,
                             svn_fs_t *VAR_3,
                             const svn_fs_id_t *VAR_4,
                             apr_pool_t *VAR_5,
                             apr_pool_t *VAR_6)
{
  const svn_fs_fs__id_part_t *VAR_7 = FUNC_5(VAR_4);

  svn_error_t *VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4,
                                            VAR_5, VAR_6);
  if (VAR_8 && VAR_8->apr_err == VAR_0)
    {
      svn_string_t *VAR_9 = FUNC_6(VAR_4, VAR_6);
      return FUNC_3(VAR_0, VAR_8,
                               "Corrupt node-revision '%s'",
                               VAR_9->data);
    }

  FUNC_0(FUNC_1(VAR_3,
                         VAR_7->revision,
                         VAR_7->number,
                         *VAR_2,
                         VAR_1,
                         VAR_6));

  return FUNC_4(VAR_8);
}
