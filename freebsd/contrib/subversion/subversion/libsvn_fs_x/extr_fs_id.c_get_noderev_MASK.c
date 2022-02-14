
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_context_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int * fsap_data; } ;
struct TYPE_6__ {int noderev_id; TYPE_1__ generic_id; } ;
typedef TYPE_2__ fs_x__id_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (TYPE_2__ const*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int **,int *,int *,int *,int *) ;

__attribute__((used)) static svn_fs_x__noderev_t *
FUNC_4(const fs_x__id_t *VAR_0)
{
  svn_fs_x__noderev_t *VAR_1 = ((void*)0);

  svn_fs_x__id_context_t *VAR_2 = VAR_0->generic_id.fsap_data;
  svn_fs_t *VAR_3 = FUNC_1(VAR_2);
  apr_pool_t *VAR_4 = FUNC_0(VAR_0);

  if (VAR_3)
    {
      svn_error_t *VAR_5 = FUNC_3(&VAR_1, VAR_3,
                                                     &VAR_0->noderev_id,
                                                     VAR_4, VAR_4);
      if (VAR_5)
        {
          FUNC_2(VAR_5);
          VAR_1 = ((void*)0);
        }
    }

  return VAR_1;
}
